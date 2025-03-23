#include <iostream>

//declaring variables
int userNumber = 0;

int main(){

    //display a message and take user input
    std::cout << "Count down in T minus: ";
    std::cin >> userNumber;

    //for loop logic counting down from the user input
    for (int i = userNumber; i > 0; i-- ) {
        std::cout << i << "\n";
    }

    std::system("pause>0");
}