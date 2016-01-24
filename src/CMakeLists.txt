set(SOURCE_FILES Plugin.cpp include/Plugin.h)

## Remove the annoying "lib" prefix
set(CMAKE_SHARED_LIBRARY_PREFIX "")

add_library(Game SHARED ${SOURCE_FILES})
include_directories(
        ${CMAKE_SOURCE_DIR}/../NeoEditor/SDK/NeoCore/Includes
        ${CMAKE_SOURCE_DIR}/../NeoEditor/SDK/NeoEngine/Includes
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_definitions(-DPLUGIN_DLL_EXPORT)