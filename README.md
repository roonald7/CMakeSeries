# CMakeSeries
Cross Platform C++ Development with CMake

## Downloads

1. Cmake
    - https://cmake.org/download/

2. MinGW
    - https://winlibs.com/

3. Ninja
    - https://github.com/ninja-build/ninja/releases
    
## 01

### Build with MinGW/G++ c++ 20 / Windows PowerShell

- $ g++ -g -std=c++20 main.cpp -o test.exe
- $ .\test.exe

### Build with VisualStudio c++ latest version / Developer PowerShell for VS 2019

- $ cl.exe /Zi /std:c++latest /EHsc /Fe: test.exe main.cpp
- $ .\test.exe

## 02

### Build Project with CMake on Windows

- $ mkdir build 
- $ cd .\build\
- $ cmake ..\source\
- $ msbuild .\HelloApp.sln
- $ .\Debug\HelloApp.exe

### Build Project with CMake on Linux

- $ mkdir build
- $ cd build/
- $ cmake ../source/
- $ make
- $ ./HelloApp

### Build Project with CMake on Mac

- $ mkdir build
- $ cd build/
- $ cmake ../source/
- $ make
- $ ./HelloApp

### Generators

1. Building with MinGW Makefiles
    - $ cmake -G "MinGW Makefiles" ..\source\
    - $ mingw32-make (make on Linux)

2. Building with Ninja
    - $ cmake -G "Ninja" ..\source\
    - $ ninja

3. General build for whatever generator you've used
    - $ cmake --build .

4. Check possible action after a build
    - $ cmake --build . --target help