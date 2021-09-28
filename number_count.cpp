// Copyright (c) 2021 Liam Fletcher All rights reserved
//
// Created by: Liam Fletcher
// Created on: Sep 2021
// This program asks the user to enter positive integer
// The program will add all the positive numbers up to the integer

#include <iostream>
#include <string>

int main() {
    // this tells the user the sum of
    // all the positive numbers from the integer
std::string numberCount;
    int numberCountInt;
    int sum = 0;

    // input
    std::cout << "Please enter a positive integer: ";
    std::cin >> numberCount;
    std::cout << std::endl;

    // process & output

    try {
        numberCountInt = std::stoi(numberCount);

        while (0 < numberCountInt) {
            sum = sum + numberCountInt;
            numberCountInt = numberCountInt - 1;
        }
        std::cout << "The sum of all positive numbers " 
        << "is " << sum << "." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "That is not a positive integer!";
    }

    std::cout << "\nDone." << std::endl;
}
