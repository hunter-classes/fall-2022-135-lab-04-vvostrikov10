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
    std::cout << "testing cross(2)" << std::endl;
    std::cout << cross(2);
    std::cout << "testing cross(8)" << std::endl;
    std::cout << cross(8);
    std::cout << "testing cross(1)" << std::endl;
    std::cout << cross(1);
    std::cout << "testing cross(9)" << std::endl;
    std::cout << cross(9);
    std::cout << "testing cross(0)" << std::endl;
    std::cout << cross(0);
    std::cout << "testing lowerTriangle(1)" << std::endl;
    std::cout << lowerTriangle(1);
    std::cout << "testing lowerTriangle(3)" << std::endl;
    std::cout << lowerTriangle(3);
    std::cout << "testing lowerTriangle(0)" << std::endl;
    std::cout << lowerTriangle(0);
    std::cout << "testing lowerTriangle(5)" << std::endl;
    std::cout << lowerTriangle(5);
    std::cout << "testing upperTriangle(5)" << std::endl;
    std::cout << upperTriangle(5);
    std::cout << "testing upperTriangle(3)" << std::endl;
    std::cout << upperTriangle(3);
    std::cout << "testing upperTriangle(7)" << std::endl;
    std::cout << upperTriangle(7);
    std::cout << "testing upperTriangle(1)" << std::endl;
    std::cout << upperTriangle(1);
    std::cout << "testing trapezoid(12, 5)" << std::endl;
    std::cout << trapezoid(12,5);
    std::cout << "testing trapezoid(12, 6)" << std::endl;
    std::cout << trapezoid(12,6);
    std::cout << "testing trapezoid(12, 7)" << std::endl;
    std::cout << trapezoid(12,7);
    std::cout << "testing trapezoid(13, 7)" << std::endl;
    std::cout << trapezoid(13,7);
    std::cout << "testing trapezoid(13, 1)" << std::endl;
    std::cout << trapezoid(13,1); 
    std::cout << "testing trapezoid(13, 0)" << std::endl;
    std::cout << trapezoid(13,0);
    std::cout << "testing detailedCheckerboard(16, 11)" << std::endl;
    std::cout << detailedCheckerboard(16,11); 
    std::cout << "testing detailedCheckerboard(27, 27)" << std::endl;
    std::cout << detailedCheckerboard(27,27);
    return 0;
}