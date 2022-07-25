cmake_minimum_required(VERSION 3.13)
project(libbase-example VERSION 1.0 LANGUAGES CXX)

add_subdirectory(third_party/libbase)

add_executable(libbase-example "")

set_target_properties(libbase-example PROPERTIES CXX_EXTENSIONS OFF)
target_compile_options(libbase-example PRIVATE ${LIBBASE_COMPILE_FLAGS})
target_link_libraries(libbase-example PRIVATE libbase)

target_sources(libbase-example
  PRIVATE
    src/main.cc
)
