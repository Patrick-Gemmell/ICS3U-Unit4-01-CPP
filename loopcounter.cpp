// Copyright (c) 2019 Patrick Gemmell All rights reserved.
//
// Created by: Patrick Gemmell
// Created on: October 2019
// This program adds up to a number
// with user input

#include <iostream>
#include <cstdlib>
#include <string>

int main() {
    int totalNumber = 0;
    int addedNumber = 0;
    std::string numberAsString;
    int numberAsNumber;

    std::cout << "Input a number: ";
    std::cin >> numberAsString;

    try {
        numberAsNumber = std::stoi(numberAsString);
        while (numberAsNumber > addedNumber) {
            // process
            std::cout << "+" << addedNumber << "" << std::endl;
            addedNumber = addedNumber + 1;
            totalNumber = addedNumber + totalNumber;
        } std::cout << "+" << numberAsNumber << std::endl;
        std::cout << "The answer is " << totalNumber << std::endl;
    } catch (std::invalid_argument) {
            std::cout << "Not a valid number" << std::endl;
    }
}
