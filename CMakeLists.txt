cmake_minimum_required(VERSION 3.13)
project(libbase-example VERSION 1.0 LANGUAGES CXX)

add_executable(libbase-example "")

set_target_properties(libbase-example PROPERTIES CXX_EXTENSIONS OFF)

target_sources(libbase-example
  PRIVATE
    src/main.cc
)
