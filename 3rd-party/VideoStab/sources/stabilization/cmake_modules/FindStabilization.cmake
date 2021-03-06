#FIND_PACKAGE(VideoLib 1.41 REQUIRED system)
FIND_PACKAGE(OpenCV REQUIRED)
FIND_PACKAGE(Boost 1.41 REQUIRED system)

# Include directories for project
GET_FILENAME_COMPONENT(STABILIZATION_CMAKE_CURRENT_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
SET(STABILIZATION_INCLUDE_DIR
#   ${VIDEO_LIB_INCLUDE_DIR}
    ${OpenCV_INCLUDE_DIRS}
    ${Boost_INCLUDE_DIRS}
	${STABILIZATION_CMAKE_CURRENT_DIR}/../include
)

# Project library name
SET(STABILIZATION_LIBRARY stabilization)

# Project dependenses
SET(STABILIZATION_LIBRARIES
	${STABILIZATION_LIBRARY}
	${OpenCV_LIBS}
	${Boost_LIBRARIES}
#	${VIDEO_LIB_LIBRARIES}
)


FOREACH(SUBDIR ${Boost_LIBRARIES})
    MESSAGE(STATUS ${SUBDIR}')
ENDFOREACH()

# Result flag
SET(STABILIZATION_FOUND TRUE)

# Project specific global definitions
SET(STABILIZATION_DEFINITIONS
)
