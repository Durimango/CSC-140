#include <iostream>
#include <string>
#include <bits/stdc++.h>

//declaring variables
std::string userInput = "";
int day = 0;

int main() {

    //display a message, take user input, and convert userInput to lowercase
    std::cout << "Uh oh, guess what day it is! GUESS WHAT DAY IT IS: ";
    std::cin >> userInput;
    std::transform(userInput.begin(), userInput.end(), userInput.begin(), ::tolower);

    //converts day into a number between 0 and 3
    if (userInput == "monday"){
        day = 0;
    } else if (userInput == "wednesday"){
        day = 1;
    } else if (userInput == "tuesday" || userInput == "thursday"){
        day = 2;
    } else {
        day = 3;
    }

    //switches response dynamically based on what day is
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