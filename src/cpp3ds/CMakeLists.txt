include(arm-toolchain)

include_directories(
        ${PROJECT_SOURCE_DIR}/include
        ${DEVKITPRO}/portlibs/armv6k/include
        ${DEVKITPRO}/portlibs/3ds/include
        ${LIBCTRU_INCLUDE_DIRS}
        ${GL3DS}/include
)

add_subdirectory(Audio)
add_subdirectory(Graphics)
add_subdirectory(Network)
add_subdirectory(System)
add_subdirectory(Window)
