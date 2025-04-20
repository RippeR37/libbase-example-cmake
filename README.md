## `libbase-example-submodules`

### Project description

This is an example project showing how to import `libbase` in a CMake project
using Git submodules and CMake's `add_subdirectory()`.

For simplicity only core library is added to avoid manually resolving many
dependencies required for non-core modules.

For more details refer to [`libbase` documentation][1].

[1]: https://RippeR37.github.io/libbase/master/getting_started/using.html


### Building

To build this project simply clone it and build with CMake:

```bash
$ git clone https://github.com/RippeR37/libbase-example-submodules --recurse-submodules
$ cd libbase-example-submodules
$ cmake -S . -B build
$ cmake --build build
$ ./build/libbase-example-submodules
Hello World!
```


### License

This project is licensed under the [MIT License](LICENSE).
