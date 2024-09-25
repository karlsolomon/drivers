include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../inc)
set(BUILD_SHARED_LIBS ON)
add_library(ring SHARED ring.cpp)
