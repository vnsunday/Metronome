cmake_minimum_required(VERSION 3.8)
add_compile_options(-std=c++11)

project( metronome  )
include_directories(./)
# cmake -D DYNSOCCDIR=/path/to/source ..
# 
include_directories(${DYNSOCCDIR}/src/DynamicSoccer)
link_directories(${DYNSOCCDIR_BIN})


file(GLOB SOURCE "*.cpp")

add_executable( metronome ${SOURCE} )
TARGET_LINK_LIBRARIES(metronome libdynsocc)