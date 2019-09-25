// Copyright (c) 2019 Jacob Bonner All rights reserved.
//
// Created by: Jacob Bonner
// Created on: September 2019
// This program is some experimentation of local and global variables

#include <iostream>

// Global variables
int variableX = 25;

void localVariabel() {
    // This function demonstrates local variables

    int variableX = 10;
    int variableY = 30;
    int variableZ = variableX + variableY;
    std::cout << "Local varibaleX, variableY, variableZ: " << variableX << " + "
              << variableY << " = " << variableZ << std::endl;
}


void globalVariable() {
    // This function demonstrates global variables

    variableX = variableX + 1;
    int variableY = 30;
    int variableZ = variableX + variableY;
    std::cout << "Global varibaleX, variableY, variableZ: " << variableX <<
              " + " << variableY << " = " << variableZ << std::endl;
}

int main() {
    // This function calls the localVariable and globalVariable functions

    localVariabel();
    globalVariable();
}
