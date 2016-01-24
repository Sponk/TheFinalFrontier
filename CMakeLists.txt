cmake_minimum_required(VERSION 3.3)
project(TheFinalFrontier)

set(DOXYGEN_SOURCEDIRS "${CMAKE_SOURCE_DIR}/src/include" "${CMAKE_SOURCE_DIR}/tests")

find_package(Doxygen)
if(DOXYGEN_FOUND AND NOT DISABLE_DOCS)
    configure_file(${CMAKE_CURRENT_SOURCE_DIR}/doc/Doxyfile.in ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile @ONLY)
    add_custom_target(doc
            ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile
            WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
            COMMENT "Generating API documentation with Doxygen" VERBATIM
            )
endif(DOXYGEN_FOUND AND NOT DISABLE_DOCS)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_subdirectory(src)
add_subdirectory(gtest)
add_subdirectory(tests)