enable_testing()
include_directories(${PROJECT_SOURCE_DIR}/inc)

set(TestToRun
    testConstructor.cpp
    testIsEmpty.cpp
    testSize.cpp
    testPush.cpp
    testPop.cpp
    testPushOverflow.cpp
    testPopUnderflow.cpp
    testStruct.cpp
)
create_test_sourcelist(Tests CommonCxxTests.cxx ${TestToRun})
add_executable(CommonCxxTests ${Tests})

# Add tests
foreach (test ${TestToRun})
    get_filename_component(TName ${test} NAME_WE)
    add_test(NAME ${TName} COMMAND CommonCxxTests ${TName})
endforeach ()
