# 実行手順
練習用project

## Linux
```bash
$ git clone https://github.com/GodRyosuke/cmake_test_VS.git
$ cd cmake_test_VS
$ mkdir -p "build/mingw"
$ cd build/mingw
$ cmake -G "MinGW Makefiles" -S ../../ -B .
$ cmake --build .
$ cd cmake_test_proj
$ cmake_test_proj.exe
```

## Windows Visual Studio
```bash
$ git clone https://github.com/GodRyosuke/cmake_test_VS.git
$ cd cmake_test_VS
$ mkdir -p "build\Win64"
$ cd build\Win64
$ cmake -S ../../ -B .
$ cmake --build .
$ cd cmake_test_proj\Debug
$ cmake_test_proj.exe
$ cmake_test_proj.exe -v
```

## Test
```bash
$ cd /path/to/cmake_test_proj # cmake_test_proj.exeがあるディレクトリと同じ場所
$ ctest
```

