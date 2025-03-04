#include <iostream>
#include <string>
#include <bits/stdc++.h>

std::string userInput = "";
int day = 0;

int main() {

    std::cout << "Uh oh, guess what day it is! GUESS WHAT DAY IT IS: ";
    std::cin >> userInput;
    std::transform(userInput.begin(), userInput.end(), userInput.begin(), ::tolower);
    std::cout << userInput << std::endl;

    if (userInput == "monday"){
        day = 0;
    } else if (userInput == "wednesday"){
        day = 1;
    } else if (userInput == "tuesday" || userInput == "thursday"){
        day = 2;
    } else {
        day = 3;
    }

    std::cout << day << std::endl;

    switch (day){
        default:
            std::cout << "It's the weekend baby!";
            break;
        case 0:
            std::cout << "Monday );";
            break;
        case 1:
            std::cout << "HUMP DAYYYYY!";
            break;
        case 2:
            std::cout << "Ehh, it's a weekday.";
            break;
    }

    std::system("pause>0");
}