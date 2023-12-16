cmake_minimum_required(VERSION 3.16)
project(emlv1_practice_board C)

set(CMAKE_C_COMPILER "clang")
set(CMAKE_CXX_COMPILER "clang++")

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g")

set(CMAKE_BUILD_TYPE Debug)

file(GLOB SOURCE_FILES
        "*.c"
        "../process/board/controller/*.c"
        "../process/board/entity/*.c"
        "../process/board/repository/*.c"
        "../process/board/service/*.c"
        "../process/comment/controller/*.c"
        "../process/comment/entity/*.c"
        "../process/comment/repository/*.c"
        "../process/comment/service/*.c"
        "../process/post/controller/*.c"
        "../process/post/entity/*.c"
        "../process/post/repository/*.c"
        "../process/post/service/*.c"
        "../process/ui/console/controller/*.c"
        "../process/ui/console/repository/*.c"
        "../process/ui/console/service/*.c"
)

add_executable(
    emlv1_practice_board
    ${SOURCE_FILES}
)