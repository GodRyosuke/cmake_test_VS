﻿# CMakeList.txt : 最上位の CMake プロジェクト ファイル。グローバル構成を行います
# また、サブプロジェクトをここに含めます。
#
cmake_minimum_required (VERSION 3.8)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

project ("cmake_test_proj" VERSION 1.2)

# サブプロジェクトを含めます。
add_subdirectory ("cmake_test_proj")



