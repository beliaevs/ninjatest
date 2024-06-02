# Build Instructions

$ mkdir build
$ cd build
$ cmake --toolchain=../clang.cmake -S ../ -B . -G Ninja
$ cmake --build .

Now you can run ninjatest:
$ ./ninjatest


