add_executable(unittests
        testmain.cpp catch.hpp
        TestStringReverse.cpp)
target_link_libraries(unittests tddlesson1)
