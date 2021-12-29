# CMakeList.txt : cmake_test_proj の CMake プロジェクト。ソースを含めて、次を定義します:
# プロジェクト専用ロジックはこちらです。
#
cmake_minimum_required (VERSION 3.8)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

# ソースをこのプロジェクトの実行可能ファイルに追加します。
add_executable (cmake_test_proj "cmake_test_proj.cpp" "cmake_test_proj.h")

# TODO: テストを追加し、必要な場合は、ターゲットをインストールします。
