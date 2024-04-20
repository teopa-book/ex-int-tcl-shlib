# ex-int-tcl-shlib
A minimum example for embedding Tcl scripting engine.

Build in Linux:

```shell
$ mkdir build-debug
$ cd build-debug
$ cmake .. -DCMAKE_BUILD_TYPE=Debug
$ cmake --build .
$ export TCL_LIBRARY=./tcl90b1-unix-prefix/src/tcl90b1-unix/library
$ ./tclshlib
% history
     1  history
%
```

Build in Windows:

```shell
$ mkdir build
$ cd build
$ cmake ..
$ cmake --build . --config Debug
$ cd Debug
$ set TCL_LIBRARY=../tcl90b1-win-debug-prefix/src/tcl90b1-win-debug/win/Debug_AMD64_VC1939/libtcl.vfs/tcl_library
$ tclshlib
% history
     1  history
%
```
