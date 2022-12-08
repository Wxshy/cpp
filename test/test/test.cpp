// test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<stdlib.h>
#include "word.h"

constexpr auto RESET = "\033[0m";
constexpr auto GREEN = "\033[32m";
constexpr auto YELLOW = "\033[33m";
constexpr auto RED = "\033[31m";

int main()
{
    word test;
    std::string testt = "SOARE";
    test.chars = testt;
    test.colours = {RED, GREEN, RED, GREEN, RED };
    for (int i = 0; i < 5; i++) {
        std::cout << test.colours[i];
        std::cout << test.chars[i];


    };
}
