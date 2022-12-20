// Copyright (c) 2022 Nolan Shami All rights reserved.

// Created by : Nolan Shami
// Created on : Dec 15th, 2022
// This program generates 10
// random numbers, between 1 and 100, and
// calculates the average out of all those numbers.

#include <iostream>
#include <random>

int main() {
    // Set the variables
    float sum = 0;
    const int MAX_ARRAY_SIZE = 10, MIN_NUM = 0, MAX_NUM = 100;
    int randomNumber;

    // Empty list where you can store the 10 random numbers
    int randomNumbers[MAX_ARRAY_SIZE];

    // Creating seed for the random number generator
    std::random_device rseed;

    std::mt19937 rgen(rseed());

    // Set the range of random number generator from 0 to 100
    std::uniform_int_distribution<int> idist(MIN_NUM, MAX_NUM);

    for (int counter = 0; counter < MAX_ARRAY_SIZE; counter++) {
        // Generates 10 random numbers from 0 to 100
        randomNumber = idist(rgen);

        // Appends the number to the array
        randomNumbers[counter] = randomNumber;

        // Prints out the random numbers added to list
        std::cout << randomNumber << " added to array at index "
                  << counter << "\n";

        // Adds the 10 random numbers to sum variable
        sum += randomNumber;
    }

    // Prints the average of the ten random numbers
    std::cout << "The average of the 10 numbers ";
    std::cout << "is: " << sum / MAX_ARRAY_SIZE << "\n";
}
