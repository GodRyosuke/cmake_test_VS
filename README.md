# 実行手順

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

## Test
```bash
$ cd /path/to/cmake_test_proj # cmake_test_proj.exeがあるディレクトリと同じ場所
$ ctest
```

