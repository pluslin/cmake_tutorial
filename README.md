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


