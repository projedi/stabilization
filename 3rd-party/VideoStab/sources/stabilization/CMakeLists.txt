cmake_minimum_required(VERSION 2.6)

FIND_PACKAGE(Stabilization REQUIRED)

INCLUDE_DIRECTORIES(${STABILIZATION_INCLUDE_DIR})
ADD_DEFINITIONS(${STABILIZATION_DEFINITIONS})

FILE( GLOB_RECURSE SOURCES "src/*.cpp" )

SET(TARGET_NAME ${STABILIZATION_LIBRARY})
ADD_LIBRARY(${TARGET_NAME} STATIC ${SOURCES})
SET_TARGET_PROPERTIES(${TARGET_NAME} PROPERTIES COMPILE_FLAGS -fPIC)

ADD_SUBDIRECTORY(src)