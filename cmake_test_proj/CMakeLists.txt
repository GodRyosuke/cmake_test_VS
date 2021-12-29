# CMakeList.txt : cmake_test_proj の CMake プロジェクト。ソースを含めて、次を定義します:
# プロジェクト専用ロジックはこちらです。
#
cmake_minimum_required (VERSION 3.8)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

string(TIMESTAMP BUILD_DATE "%Y%m%d")
string(TIMESTAMP BUILD_TIME "%H%M%S")

configure_file(../config/about.txt ../resources/about.txt)

# ソースをこのプロジェクトの実行可能ファイルに追加します。
add_executable (cmake_test_proj "cmake_test_proj.cpp" "cmake_test_proj.h")


# フォルダを開いたりするのに必要
# buildフォルダにresourcesを移動させて、.exeから参照できるようにしている
# Resource フォルダを追加している
add_custom_command(
	TARGET cmake_test_proj POST_BUILD
	COMMAND ${CMAKE_COMMAND} -E copy_directory
		${CMAKE_SOURCE_DIR}/resources $<TARGET_FILE_DIR:cmake_test_proj>/../resources
)


# Testについて。
# cmake_test_proj.exeの階層で、ctestとうつと、できる
# 以下の項目を、実行ファイルexeがあるフォルダと同じ階層のCMakeLists.txtに入れる
enable_testing()

add_test(NAME WanderGreetingTest COMMAND cmake_test_proj)
set_tests_properties(
	WanderGreetingTest
	PROPERTIES PASS_REGULAR_EXPRESSION "hello cmake! this is wnader!"
)

add_test(NAME WanderVersionTest COMMAND cmake_test_proj -v)
set_tests_properties(
	WanderVersionTest
	PROPERTIES PASS_REGULAR_EXPRESSION "version=${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}"
)