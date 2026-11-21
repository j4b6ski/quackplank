cmake_minimum_required(VERSION 3.22...3.24)
project(quackplank LANGUAGES C)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")

include(FetchContent)
FetchContent_Declare(raylib
    URL https://codeload.github.com/raysan5/raylib/tar.gz/refs/tags/6.2
    URL_HASH SHA256=df7a13129b1bec9e73a6962efff170beba310ee6eab8f94cd000b7316b4db5ee
)
FetchContent_Declare(box2d
    URL https://codeload.github.com/erincatto/box2d/tar.gz/refs/tags/v3.1.1
    URL_HASH SHA256=fb6ef914b50f4312d7d921a600eabc12318bb3c55a0b8c0b90608fa4488ef2e4
)
FetchContent_MakeAvailable(raylib box2d)

if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
    target_compile_definitions(raylib PRIVATE SUPPORT_CLIPBOARD_IMAGE=0)
endif()

add_library(b2 STATIC src/b2.c)
target_link_libraries(b2 PRIVATE box2d)

add_library(rl STATIC src/rl.c)
target_link_libraries(rl PRIVATE raylib)
