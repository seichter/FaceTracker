#
# CMake Build System for libFaceTracker 
#
# 2014 - Hartmut Seichter <http://technotecture.com>
#

set(libfacetracker_srcs
	CLM.cc
	FCheck.cc
	FDet.cc
	IO.cc
	PAW.cc
	PDM.cc
	Patch.cc
	Tracker.cc
	)
	
include_directories(${PROJECT_SOURCE_DIR}/include)
	
set(libfacetracker_hdrs
	${PROJECT_SOURCE_DIR}/include/FaceTracker/CLM.h
	${PROJECT_SOURCE_DIR}/include/FaceTracker/FCheck.h
	${PROJECT_SOURCE_DIR}/include/FaceTracker/FDet.h
	${PROJECT_SOURCE_DIR}/include/FaceTracker/IO.h
	${PROJECT_SOURCE_DIR}/include/FaceTracker/PAW.h
	${PROJECT_SOURCE_DIR}/include/FaceTracker/PDM.h
	${PROJECT_SOURCE_DIR}/include/FaceTracker/Patch.h
	${PROJECT_SOURCE_DIR}/include/FaceTracker/Tracker.h
	)

set(libfacetracker_misc
	${PROJECT_SOURCE_DIR}/license.md
	${PROJECT_SOURCE_DIR}/readme.md
	)
	
add_library(facetracker STATIC
	${libfacetracker_hdrs}
	${libfacetracker_srcs}
	${libfacetracker_misc}
	)
	
target_link_libraries(facetracker
        ${OpenCV_LIBRARIES}
	)
