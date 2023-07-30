# handling massive single file tests with minimal changes
create_test_sourcelist(Tests
commonTest.c
myTest.c
)

add_executable(CommonTests ${Tests})

# remove the test driver source file
set (TestsToRun ${Tests})
remove (TestsToRun commonTest.c)

# Add all the ADD_TEST for each test
foreach (test ${TestsToRun})
  get_filename_component (TName ${test} NAME_WE)
  add_test (NAME ${TName} COMMAND CommonTests ${TName})
endforeach ()

# -----------------------------------

# criterion test
add_executable(criterion_test 
test_criterion.c
../src/fizzbuzz.h
../src/fizzbuzz.c
)

find_library(CRITLIB libcriterion.so)
target_link_libraries(criterion_test ${CRITLIB})

add_test(criterion ../bin/criterion_test)

