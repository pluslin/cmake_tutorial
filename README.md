# CMake tutorial 
> A simple example for building total source tree by work steadily

## Version 1 -- basic project

- CMakeLists.txt
- tutorial.cxx : using standard function compute the square of a number

> About how to run the cmake project
>
> And same for other version. Just check it for more understand
```
    $ mkdir build
    $ cd build
    $ cmake ..
    $ make
```

## Version 1.1 -- add version number for program

- CMakeLists.txt : set the version and configure the header file
- TutorialConfig.h.in : generate the TurorialConfig.h and pass CMakeLists.txt setting to tutorial.cxx
- tutorial.cxx : invoke the args "Tutorial_VERSION_MAJOR and Tutorial_VERSION_MINOR"

> run it 
```
    $ ./tutorial 

    ./Tutorial Version 1.0
    Usage: ./Tutorial number
```

## Version 2 -- add a subdirectory library

- CMakeLists.txt : link to MathFunctions's library
- TutorialConfig.h.in
- tutorial.cxx : include MathFunctions.h and call mysqrt function
- MathFunctions/CmakeLists.txt : add a subdirectory library to project
- MathFunctions/MathFunctions.h : declare the mysqrt function
- MathFunctions/mysqrt.cxx : implement the mysqrt function

## Version 2.2 -- function optional : mysqrt or sqrt?

- CMakeLists.txt : Add option and judge whether use mysqrt
- TutorialConfig.h.in : define or not define USE_MYMATH
- tutorial.cxx : judge and invoke which function
- MathFunctions/CmakeLists.txt
- MathFunctions/MathFunctions.h
- MathFunctions/mysqrt.cxx

## Version 3 -- add install rules

- CMakeLists.txt : add install target
- TutorialConfig.h.in
- tutorial.cxx 
- MathFunctions/CmakeLists.txt : add install target
- MathFunctions/MathFunctions.h
- MathFunctions/mysqrt.cxx

> We can type 'make install' after that
```
    // specify the installation path
    $ cmake .. -DCMAKE_INSTALL_PREFIX=$HOME/.local
    $ make
    $ make install
```

## Version 3.2 -- add tests to verify application working correctly

- CMakeLists.txt : add test code
- TutorialConfig.h.in
- tutorial.cxx 
- MathFunctions/CmakeLists.txt 
- MathFunctions/MathFunctions.h
- MathFunctions/mysqrt.cxx

> Run test examples
```
    $ ctest
```
