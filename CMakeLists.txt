cmake_minimum_required(VERSION 3.10)
project(SimpleCProject C)

# Set the C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)



# Add the main executable
add_executable(main main.c)

# Add test_component sources directly to the main target
target_sources(main PRIVATE

    ${CMAKE_SOURCE_DIR}/components/test_component/test_component.c
    ${CMAKE_SOURCE_DIR}/components/stubbed/stubbed.c
    ${CMAKE_SOURCE_DIR}/components/mocked/mocked.c


)

# Include directory for test_component
target_include_directories(main PRIVATE
    ${CMAKE_SOURCE_DIR}/components/test_component/
    ${CMAKE_SOURCE_DIR}/components/stubbed/
    ${CMAKE_SOURCE_DIR}/components/mocked/
)

# Link Unity to the main executable
# target_link_libraries(main unity)


# Test components#########################
# Add the test_test_component executable
add_executable(test_component_exec
    ${CMAKE_SOURCE_DIR}/cmock/cmock.c
    ${CMAKE_SOURCE_DIR}/unity/unity.c

    ${CMAKE_SOURCE_DIR}/test/test_test_component.c
    ${CMAKE_SOURCE_DIR}/components/test_component/test_component.c
    ${CMAKE_SOURCE_DIR}/test/stubs/test_stub.c
    ${CMAKE_SOURCE_DIR}/test/mocks/test_mock.c
)

# Include directories for test_component_exec
target_include_directories(test_component_exec PRIVATE
    ${CMAKE_SOURCE_DIR}/components/test_component/
    ${CMAKE_SOURCE_DIR}/unity/
    ${CMAKE_SOURCE_DIR}/components/stubbed/
    ${CMAKE_SOURCE_DIR}/components/mocked/
    ${CMAKE_SOURCE_DIR}/test/mocks/
    ${CMAKE_SOURCE_DIR}/unity/
    ${CMAKE_SOURCE_DIR}/cmock/
)
 
# Link Unity to the test_component_exec executable
# target_link_libraries(test_component_exec unity cmock)
