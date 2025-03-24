#include <iostream>
#include <string>
#include <ctime>

//declaring variables
int userNumber = 0;
bool guessedIt = false;
std::string secretPassword = "VESPER";
std::string userPassword = "";

int main(){

    //genrate random number
    srand(time(0));
    int randomNumber = rand() % 11;

    while (guessedIt == false) {
        //display message and take user input
        std::cout << "Pick a number between 1 and 10: ";
        std::cin >> userNumber;



        //if the user guesses the number make guessedIt = true, else try again
        if (userNumber == randomNumber) {
     guessedIt = true;
            std::cout << "You did it!" << "\n";
        } else if (userNumber > randomNumber) {
            std::cout << "Too high. Try again." << "\n";
        } else {
            std::cout << "Too low. Try again." << "\n";
        }
    }

    while (guessedIt == true) {
        //display message and take user input
        std::cout << "Enter the password: ";
        std::cin >> userPassword;

        //if the user guesses secretPassword display welcome message, else try again
        if (userPassword == secretPassword){
     guessedIt = false;
            std::cout << "Welcome Mr. Bond.";
        } else {
            std::cout << "Please try again." << "\n";
        }
    }
    
    std::system("pause>0");
}