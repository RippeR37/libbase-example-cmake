cmake_minimum_required(VERSION 3.13)
project(libbase-example-submodules VERSION 1.0 LANGUAGES CXX)

# Core libbase dependency
set(BUILD_TESTING OFF) # disable building tests
add_subdirectory(third_party/glog)

# Disable networking module which depends on libcurl which in turn requires many
# other dependencies
set(LIBBASE_BUILD_MODULE_NET OFF)
add_subdirectory(third_party/libbase)

add_executable(libbase-example-submodules "")
target_link_libraries(libbase-example-submodules
  PRIVATE
    glog::glog
    libbase::libbase)

target_sources(libbase-example-submodules
  PRIVATE
    src/main.cc
)
