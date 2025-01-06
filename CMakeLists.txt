cmake_minimum_required(VERSION 3.10)
project(SimpleCProject C)

# Set the C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# Add the Unity library
add_library(unity STATIC 
    ${CMAKE_SOURCE_DIR}/unity/unity.c
    ${CMAKE_SOURCE_DIR}/unity/unity.h
    ${CMAKE_SOURCE_DIR}/unity/unity_internals.h
)

# Add the executable
add_executable(main main.c)

# Add test_component sources directly to the main target
target_sources(main PRIVATE
    ${CMAKE_SOURCE_DIR}/components/test_component/test_component.c
    ${CMAKE_SOURCE_DIR}/components/test_component/test_component.h
)

# Include directory for test_component
target_include_directories(main PRIVATE
    ${CMAKE_SOURCE_DIR}/components/test_component/
)

# Link Unity to the main executable
target_link_libraries(main unity)