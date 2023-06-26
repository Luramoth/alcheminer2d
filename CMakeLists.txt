# Can be set to 3.11 if you dont care about precompiled headers
cmake_minimum_required(VERSION 3.16)
project(alcheminer2d)

# Generate compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Dependencies
set(RAYLIB_VERSION 4.5.0)
find_package(raylib ${RAYLIB_VERSION} QUIET) # QUIET or REQUIRED
if (NOT raylib_FOUND) # If there's none, fetch and build raylib
    include(FetchContent)
    FetchContent_Declare(
            raylib
            DOWNLOAD_EXTRACT_TIMESTAMP OFF
            URL https://github.com/raysan5/raylib/archive/refs/tags/${RAYLIB_VERSION}.tar.gz
    )
    FetchContent_GetProperties(raylib)
    if (NOT raylib_POPULATED) # Have we downloaded raylib yet?
        set(FETCHCONTENT_QUIET NO)
        FetchContent_Populate(raylib)
        set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE) # don't build the supplied examples
        add_subdirectory(${raylib_SOURCE_DIR} ${raylib_BINARY_DIR})
    endif()
endif()

add_executable(${PROJECT_NAME} src/main.cpp
        src/App.cpp
        src/App.h
        Engine/AssetMan/Asset.h
        Engine/AssetMan/Sprite.cpp
        Engine/AssetMan/Sprite.h
        Engine/EntityMan/Transform2D.cpp
        Engine/EntityMan/Transform2D.h
        Engine/EntityMan/Entity2D.cpp
        Engine/EntityMan/Entity2D.h
        Engine/ComponentMan/Component.cpp
        Engine/ComponentMan/Component.h
        Engine/EntityMan/Entity.h
)

target_include_directories(${PROJECT_NAME} PRIVATE "Engine")
target_precompile_headers(${PROJECT_NAME} PRIVATE "Engine/CommonPCH.h")

target_link_libraries(${PROJECT_NAME} raylib)

# Web Configurations
if (${PLATFORM} STREQUAL "Web")
    # Tell Emscripten to build an example.html file.
    set_target_properties(${PROJECT_NAME} PROPERTIES SUFFIX ".html")
endif()

# Checks if OSX and links appropriate frameworks (Only required on MacOS)
if (APPLE)
    target_link_libraries(${PROJECT_NAME} "-framework IOKit")
    target_link_libraries(${PROJECT_NAME} "-framework Cocoa")
    target_link_libraries(${PROJECT_NAME} "-framework OpenGL")
endif()

# if in release have the assets path be relative to the executable, otherwise to the dev machine
if (CMAKE_BUILD_TYPE EQUAL "RELEASE")
    target_compile_definitions(${PROJECT_NAME} PUBLIC ASSETS="./assets/")
else ()
    target_compile_definitions(${PROJECT_NAME} PUBLIC ASSETS="${CMAKE_CURRENT_SOURCE_DIR}/assets/")
endif ()