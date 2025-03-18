#include <iostream>
#include <vector>

int main(){

    //this establishes our array
    int array1[] = {6, 10, 102, 32, 89};

    //this displays what's in our array
    for (int i : array1) {
        std::cout <<  i << " ";
    }

    std::cout << "\n";

    //this changes what's in our array in slots 0 and 2
    array1[2] = 25;
    array1[0] = 8;

    //this displays what's in our array again
    for (int i : array1) {
        std::cout <<  i << " ";
    }

    std::cout << "\n";

    //this establishes our vector
    std::vector<int> vector1 = {55, 83, 22};

    //this displays what's in our vector
    for (int i : vector1) {
        std::cout <<  i << " ";
    }

    std::cout << "\n";

    //modifies our vector by adding 99 to the last slot
    vector1.push_back(99);

    //prints the vector size to the console
    std::cout << vector1.size() << "\n";
    
    //erases the first slot in the vector
    vector1.erase(vector1.begin());

    //this displays what's in our vector
    for (int i : vector1) {
        std::cout <<  i << " ";
    }

    std::system("pause>0");

    return 0;
}