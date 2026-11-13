// Copyright (c) 2026 Bryson G All rights reserved.
// .
// Created by: Bryson G
// Date: 11,13,2026
// This program gets a number from the user and
// calculates that number to the power of two
// using a for loop

#include <iostream>
#include <string>
#include <cmath>

int main() {
    // Declare variables
    std::string userNum;
    int userNumInt;
    float userNumFlo;
    int powerOfTwo = 1;

    // Get the number from the user
    std::cout << "Enter a positive integer: ";
    std::cin >> userNum;

    // See if it is a valid number and convert it to an integer
    try {
        userNumInt = std::stoi(userNum);
        userNumFlo = std::stof(userNum);

        // see if it is a positive integer
        if (userNumInt == userNumFlo && userNumInt > 0) {
            // Calculate the number to the power of two using a for loop
            for (int counter = 0; counter <= userNumInt; counter++) {
                std::cout << counter << "^2 = " 
                << std::pow(counter, 2) << "\n";
                powerOfTwo = std::pow(counter, 2);
            }

            // Display the result to the user
            std::cout << userNumInt <<
            " raised to the power of two is " << powerOfTwo << "\n";
        } else {
            std::cout << userNum <<
            " is not a positive integer or whole number \n";
        }
    } catch (std::invalid_argument) {
        // userNum is not an integer
        std::cout << userNum <<
        " is not a valid number \n";
    }
}
