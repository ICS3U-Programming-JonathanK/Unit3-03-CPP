// Copyright (c) 2021 Jonathan Kene All rights reserved.
//
// Created by: Jonathan Kene
// Created on: May 10 2021
// This program asks the user to guess a number between 0 to 9
// and tells the user if the guess is right or wrong

#include <iostream>
#include <random>

int main() {
  int userGuess;

  int correctGuess;

  // get the user's guess
  std::cout << "Enter a number between 0 to 9: ";
  std::cin >> userGuess;
  std::cout << "" << std::endl;
  // generate a number between 0 to 9
  std::random_device rseed;
  std::mt19937 rgen(rseed());
  std::uniform_int_distribution<int> idist(0, 9);
  correctGuess = idist(rgen);


  // check to see if the user guess is correct or wrong
if (userGuess == correctGuess) {
    std::cout << "You are correct!";
} else {
    std::cout << "You are wrong! The answer is = ";

    std::cout << correctGuess << std::endl;
}
}
