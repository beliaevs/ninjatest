# Build Instructions

$ mkdir build

$ cd build

$ cmake --toolchain=../clang.cmake -S ../ -B . -G Ninja

$ cmake --build .

Now you can run ninjatest:
$ ./ninjatest

# Building Release and Debug

Default configuration is Debug. Multiconfiguration generation works only for msvc, 
so for building Releasse on Windows use

$ cd build

$ cmake ../

$ cmake --build . --config=Release

For Linux use the following:

$ mkdir release

$ cmake ../ -DCMAKE_BUILD_TYPE=Release --toolchain=../clang.cmake -G Ninja

$ cmake --build .

# Multiconfig with Ninja

$ cmake ../ -G "Ninja Multi-Config"

Now --config=Release and --config=Debug options for "cmake --build ." are available

# Detecting C++ standard version for msvc

__cplusplus macro is set to 199711L by default in msvc, but you can use it 
with option  /Zc:__cplusplus 




