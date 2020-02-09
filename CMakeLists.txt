cmake_minimum_required(VERSION 3.10)

# set the project name
project(Github-CI-Test)

include_directories(include)
set(HEADER_FILES include/lib.h)

# add the executable
add_executable(main src/main.cpp src/lib.cpp ${HEADER_FILES})

enable_testing()
add_executable(specs test/lib.specs.cpp src/lib.cpp ${HEADER_FILES})
add_test(test specs)