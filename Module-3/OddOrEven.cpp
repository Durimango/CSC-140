#include <iostream>

//declaring variables
int userInput = 0;

int main() {

    //display a message and take user input
    std::cout << "Hi there, I'm Even Steven. Please input an integer: ";
    std::cin >> userInput;

    //check to see if the user input is divisble by 2. if it is display the first message, if not do the second. (this unfortunately does not account for the user not entering an integer.)
    if (userInput % 2 == 0) {
        std::cout << "Oh good it's even. My favorite!";
    } else {
        std::cout << "Ugh, I hate odd numbers. Try giving that to Todd.";
    }
    std:: system("pause>0");
    return 0;
}