#include <iostream>
#include <string>

//declaring variables
std::string fruits[] = {"Pomegranate", "Pear", "Coconut", "Plum", "Starfruit"};

std::string fruitsUser[7] = {"Pomegranate", "Pear", "Coconut", "Plum", "Starfruit"};

int main(){
    //display a message and our first list
    std::cout << "Here's our shopping list for the fruit salad!" << "\n";

    //for loop logic counting out our fruits array
    for (std::string fruit : fruits) {
        std::cout << fruit << "\n";
    }

    //display a message and take user input for the second list
    std::cout << "Add two of your favorite fruits!" << "\n";
    std::cout << "Fruit 1: ";
    std::cin >> fruitsUser[5];
    std::cout << "Fruit 2: ";
    std::cin >> fruitsUser[6];

    //for loop logic counting out our fruitsUser array
    for (std::string fruit : fruitsUser) {
        std::cout << fruit << "\n";
    }
    
    std::system("pause>0");
}