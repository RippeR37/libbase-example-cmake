cmake_minimum_required(VERSION 3.13)
project(libbase-example-cmake VERSION 1.0 LANGUAGES CXX)

add_subdirectory(third_party/libbase)

add_executable(libbase-example-cmake "")

set_target_properties(libbase-example-cmake PROPERTIES CXX_EXTENSIONS OFF)
target_compile_options(libbase-example-cmake PRIVATE ${LIBBASE_COMPILE_FLAGS})
target_link_libraries(libbase-example-cmake PRIVATE libbase)

target_sources(libbase-example-cmake
  PRIVATE
    src/main.cc
)
