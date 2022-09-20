/*
Author: Vladislav Vostrikov
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 4

Tests functions from shapes.cpp
*/
#include <iostream>
#include <string>
#include "shapes.h"

int main(){
    std::cout << "testing box(7, 5)" << std::endl;
    std::cout << box(7,5);
    std::cout << "testing box(3, 3)" << std::endl;
    std::cout << box(3,3);
    std::cout << "testing box(1, 1)" << std::endl;
    std::cout << box(1,1);
    std::cout << "testing box(0, 7)" << std::endl;
    std::cout << box(0,7);
    std::cout << "testing box(7, 0)" << std::endl;
    std::cout << box(7,0);
    std::cout << "testing checkerboard(11, 6)" << std::endl;
    std::cout << checkerboard(11,6);
    std::cout << "testing checkerboard(3, 3)" << std::endl;
    std::cout << checkerboard(3,3);
    std::cout << "testing checkerboard(1, 1)" << std::endl;
    std::cout << checkerboard(1,1);
    std::cout << "testing checkerboard(0, 7)" << std::endl;
    std::cout << checkerboard(0,7);
    std::cout << "testing checkerboard(7, 0)" << std::endl;
    std::cout << checkerboard(7,0);

    return 0;
}