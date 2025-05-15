#include <iostream>

// declaring variables
int userOption = 0;
double userNumber1 = 0;
double userNumber2 = 0;
double userAnswer = 0;
bool running = true;

//declaring menu function, this displays the menu to the user and let's them input an option
void menu(){
    std::cout << "===== Calculator Menu =====" << "\n"
    << "1. Addition" << "\n" << "2. Subtraction" << "\n" << "3. Multiplication" << "\n" << "4. Division" << "\n"
    << "5. Modulo" << "\n" << "6. Exit" << "\n" << "Choose an option: ";
    std::cin >> userOption;
}

//declaring userInput function, this gives the user two inputs for their numbers to be operated on
void userInput(){
    std::cout << "First number: " << "\n";
    std::cin >> userNumber1;
    std::cout << "Second number: " << "\n";
    std::cin >> userNumber2;
}

//declaring operation function, this displays the product of the user's numbers
void operation(){
    std::cout << "Answer: " << userAnswer << "\n";
    std::system("pause>0");
}

//declaring all math functions
double addition(double x, double y){
    userAnswer = x + y;
    return userAnswer;
}

double subtraction(double x, double y){
    userAnswer = x - y;
    return userAnswer;
}

double multiplication(double x, double y){
    userAnswer = x * y;
    return userAnswer;
}

double division(double x, double y){
    userAnswer = x / y;
    return userAnswer;
}

//declaring the modulo function, this converts numbers to integers and operates
//modulo is a special case that doesn't work with doubles
void modulo(int x, int y){
    userAnswer = x % y;
}

int main(){
    while (running == true){
        //displays menu
        menu();

        //if the user inputs a number outside the range of the menu they're asked to enter a different one
        if (userOption>=1 && userOption<=6){
            //this switches between cases corresponding with the menu
            switch (userOption){
                //addition
                case 1:
                    userInput();
                    addition(userNumber1, userNumber2);
                    operation();
                    break;

                //subtraction
                case 2:
                    userInput();
                    subtraction(userNumber1, userNumber2);
                    operation();
                    break;
                
                //multiplication
                case 3:
                    userInput();
                    multiplication(userNumber1, userNumber2);
                    operation();
                    break;

                //division
                case 4:
                    userInput();
                    //if the user tries to divide by 0 it asks them to try again
                    if (userNumber2 != 0) {
                        division(userNumber1, userNumber2);
                        operation();
                    } else {
                        std::cout << "You cannot divide by 0, try again." << '\n';
                        std::system("pause>0");
                    }
                    break;

                //modulo
                case 5:
                    userInput();
                    ////if the user tries to divide by 0 it asks them to try again
                    if (userNumber2 != 0) {
                        modulo(userNumber1, userNumber2);
                        operation();
                    } else {
                        std::cout << "You cannot divide by 0, try again." << '\n';
                        std::system("pause>0");
                    }
                    break;
                
                //exiting
                case 6:
                    running = false;
                    std::cout << "Exiting program...";
                    std::system("pause>0");
                }
        } else {
            std::cout << "Please input a valid number." << "\n";
            std::system("pause>0");
            menu();
        }
    }
}