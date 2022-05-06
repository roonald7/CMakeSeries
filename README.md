# CMakeSeries
Cross Platform C++ Development with CMake

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
- $ ./HelloAppBinary
