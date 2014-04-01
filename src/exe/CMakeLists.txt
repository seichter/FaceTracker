#
# CMake Build System for libFaceTracker
#
# 2014 - Hartmut Seichter <http://technotecture.com>
#


find_package(OpenCV REQUIRED)

include_directories(${PROJECT_SOURCE_DIR}/include)

set(facetracker_model
        ${PROJECT_SOURCE_DIR}/model/face.con
        ${PROJECT_SOURCE_DIR}/model/face.tracker
        ${PROJECT_SOURCE_DIR}/model/face.tri
        ${PROJECT_SOURCE_DIR}/model/face2.tracker
	)

add_executable(face_tracker face_tracker.cc ${facetracker_model})

add_custom_command(TARGET face_tracker POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory ${PROJECT_SOURCE_DIR}/model $<TARGET_FILE_DIR:face_tracker>/model
    )

target_link_libraries(face_tracker 
    ${OpenCV_LIBRARIES}
    facetracker
    )
