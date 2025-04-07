// Copyright (c) 2025 Volodymyr Kryzhanovskyi All rights reserved
// Created by: Volodymyr Kryzhanovskyi
// Created on: 03-04-2025
// This program calculates the leap year or not leap year

#include <iostream>

int main() {
    // defines variables
    std::string year;
    int yearInt;
    // gets input
    std::cout << "Enter the year: ";
    std::cin >> year;
    // Catches any value errors such as if the input is a string and not integer.
    try {
        yearInt = std::stoi(year);
        // First step of calculating of a leap year, where module answer supposed to be 0 otherwise it is not leap year, the same rule acts for other calculations, but in first one we just divide the year by 4.
        if (yearInt % 4 == 0) {
            // If module was 0, we divide our year then by 100 with same rules acting above.
            if (yearInt % 100 == 0) {
                // If module was 0, we divide our year by 400, same rules acting from first comment.
                if (yearInt % 400 == 0) {
                    // Prints if it is a leap year if module is 0
                    std::cout << "The year " << year << " is a leap year." << std::endl;
                } else {
                    //If module is not 0, then it prints that the year is not a leap year.
                    std::cout << "The year " << year << " is not a leap year." << std::endl;
                }
                // If module is not 0 upon division of 100 then it is a leap year.
            } else {
                std::cout << "The year " << year << " is a leap year." << std::endl;
            }
        } else {//If module is not 0 in our first division by 4, then it prints that year is not a leap year.
            std::cout << "The year " << year << " is not a leap year." << std::endl;
        }
        //Catches any errors.
} catch (std::invalid_argument) {
    std::cout << "Enter integer.\n";
}
}
