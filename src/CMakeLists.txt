add_library(tddlesson1 OBJECT
        StringReverse.cpp ../include/StringReverse.h)
target_include_directories(tddlesson1 INTERFACE ../include PRIVATE ../include)

add_executable(MainApp main.cpp)
target_link_libraries(MainApp tddlesson1)
