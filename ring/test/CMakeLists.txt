include_directories(${PROJECT_SOURCE_DIR}/inc)
enable_testing()

set(TestToRun testConstructor.cpp testSize.cpp testPush.cpp testPop.cpp)
create_test_sourcelist(Tests CommonCxxTests.cxx ${TestToRun})
add_executable(CommonCxxTests ${Tests})
target_link_libraries(CommonCxxTests ring)

# Link the main program (if needed) or any libraries target_link_libraries(runTests main) #
# Uncomment if you need to link

# Add tests
foreach (test ${TestToRun})
    get_filename_component(TName ${test} NAME_WE)
    add_test(NAME ${TName} COMMAND CommonCxxTests ${TName})
endforeach ()
