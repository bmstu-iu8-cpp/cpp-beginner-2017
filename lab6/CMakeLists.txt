cmake_minimum_required (VERSION 2.8)

include_directories(SYSTEM
    ./
)

ADD_DEFINITIONS(
    -std=c++11
)

# enum your files
add_executable(executable
    lab6_1.cpp
    list.cpp
    map.cpp
    vector.cpp
)

target_link_libraries(executable)
