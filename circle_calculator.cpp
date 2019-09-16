// Copyright (c) 2019 Liam Hearty All rights reserved.
//
// Created by: Liam Hearty
// Created on: September 2019
// This program will calculate the Area and Perimeter of a r=15mm circle


#include <iostream>
#include <cmath>

int main() {
    std::cout << "If a circle has the radius of 15mm:" << std::endl;
    std::cout << "What are the area/perimeter of the circle?" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Area is " << (M_PI*pow(15.0, 2.0)) << "mm^2" << std::endl;
    std::cout << "Perimeter is " << (2*M_PI*15) << "mm" << std::endl;
}
