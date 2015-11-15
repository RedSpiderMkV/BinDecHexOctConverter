/* 
 * File:   NumberBaseConverterTest.cpp
 * Author: RedSpiderMkV
 *
 * Created on 15-Nov-2015, 00:53:00
 */

#include <stdlib.h>
#include <iostream>

/*
 * Simple C++ Test Suite
 */

void test1() {
    std::cout << "NumberBaseConverterTest test 1" << std::endl;
}

void test2() {
    std::cout << "NumberBaseConverterTest test 2" << std::endl;
    std::cout << "%TEST_FAILED% time=0 testname=test2 (NumberBaseConverterTest) message=error message sample" << std::endl;
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% NumberBaseConverterTest" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% test1 (NumberBaseConverterTest)" << std::endl;
    test1();
    std::cout << "%TEST_FINISHED% time=0 test1 (NumberBaseConverterTest)" << std::endl;

    std::cout << "%TEST_STARTED% test2 (NumberBaseConverterTest)\n" << std::endl;
    test2();
    std::cout << "%TEST_FINISHED% time=0 test2 (NumberBaseConverterTest)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

