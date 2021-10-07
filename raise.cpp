// Copyright (c) 2020 Sydney Kuhn All rights reserved
//
// Created by: Sydney Kuhn
// Created on: Sep 2020
// This program tells you if you are eligible for a raise

#include <iostream>
#include <string>

int main() {
    // this function is the program
    std::string numberOfYearsAsString;
    int numberOfYears;
    std::string salaryAsString;
    int salary;
    int increase;
    int yearsLeft;

    // input
    std::cout << "How many years have you been an employee at your company : ";
    std::cin >> numberOfYearsAsString;

    // process & output
    try {
        numberOfYears = std::stoi(numberOfYearsAsString);
        if (numberOfYears >= 5) {
            std::cout << "Please enter your yearly salary (CAD $) : ";
            std::cin >> salaryAsString;
            salary = std::stoi(salaryAsString);
            increase = 0.05 * salary;
            std::cout << "Congratulations, you are eligible for a $" ""
            << increase << " raise!" << std::endl;
        } else {
            yearsLeft = 5 - numberOfYears;
            std::cout << "Sorry, in " "" << yearsLeft
            << " years you will be able to receive a 5% raise." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid number entered, please try again." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
