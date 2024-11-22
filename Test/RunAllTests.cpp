#include <iostream>
#include "./Token/Normal/TestNormalTokens.h"
#include "./Token/Spec/TestSpecTokens.h"

void run_all_tests() {
    std::cout << "Running all tests" << std::endl;

    RunNormalTokenTests();
    RunSpecTokenTests();
};
