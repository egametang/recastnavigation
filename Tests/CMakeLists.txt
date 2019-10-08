file(GLOB TESTS_SOURCES *.cpp Detour/*.cpp Recast/*.cpp)

include_directories(../Recast/Include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(Tests ${TESTS_SOURCES})
add_dependencies(Tests Recast)
target_link_libraries(Tests Recast)
add_test(Tests Tests)

install(TARGETS Tests RUNTIME DESTINATION bin)
