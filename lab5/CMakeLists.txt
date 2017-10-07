cmake_minimum_required (VERSION 2.8)

include_directories(SYSTEM
    ./
)

ADD_DEFINITIONS(
    -std=c++11
)

# enum your files
add_executable(executable
    lab5_1.cpp
    my_swap.cpp
)

target_link_libraries(executable)
