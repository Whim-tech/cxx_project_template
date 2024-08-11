# C++ + CMake Template project

## How to build and run:
By default clang compiler is used.

```bash
cmake --preset debug # or release
cmake --build --preset debug # or release
./bin/main # or main.exe
```

# TODO

- [x] add tests
    - [x] add google test dependency
    - [x] add test executable target with CMakeFiles.txt
    - [x] make integration with cTest
- [x] add more info in README.md (how to run, whats inside and etc)
- [x] add CMake presets
  - [x] add config preset for clang
  - [ ] add config preset for msvc
  - [ ] add config preset for gcc
- [ ] write make script file 
 