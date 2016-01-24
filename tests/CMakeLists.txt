set(SOURCE_FILES tests.cpp)
add_executable(Test ${SOURCE_FILES})

target_link_libraries(Test gtest Game)
include_directories(${CMAKE_SOURCE_DIR}/gtest/include ${CMAKE_SOURCE_DIR}/src/include)