#include <iostream>
#include <string>
#include <vector>

using namespace std;

    class Diet {
        private:
        string type;

        public:
        //default constructor
        Diet() = default;

        //special constructor initializing "type"
        Diet(const string& type) : type(type){}

        //type getter
        string getType() const {return type;}
    };

    class Habitat {
        private:
        string description;

        public:
        //default constructor
        Habitat() = default;

        //special constructor
        Habitat(const string& description) : description(description){}

        //description getter
        string getDescription() const {return description;}
    };

//declaring the animal class
class Animal {
    private:
        //declaring variables
        string name = "placeholderName";
        int age = 0;
        const string species;
        Diet objDiet;
        Habitat objHabitat;

    public:
    //default constructor
    Animal() = default;

    //constructor for subsequent animal classes (lists all attributes and assigns them specifically to objects)
    Animal(string name, int age, const string& species, string diet, string habitat) : species(species), objDiet(""), objHabitat("") {
        this->name = name;
        this->age = age;
        this->objDiet = Diet (diet);
        this->objHabitat = Habitat (habitat);
    }

    virtual ~Animal(){
        cout << "Destructor called. Memory deallocated.\n";
    }

    //pure virtual functions set for polymorphism
    virtual void makeSound() = 0;

    virtual void eat() = 0;

    //displays a single animal's information
    virtual void displayInfo() final {
    cout << "Name: " << name << "\n"
    << "Age: " << age << "\n"
     << "Species: " << species << "\n"
    << "Diet: " << objDiet.getType() << "\n"
    << "Habitat: " << objHabitat.getDescription() << "\n"
    ;
    };
};

class Lion : public Animal {
    public:
    //using the above animal constructor
    using Animal::Animal;

    //default constructor
    Lion() = default;

    //virtual functions set for polymorphism
    virtual void makeSound(){
        cout << "The lion roars.\n";
    };

    virtual void eat(){
        cout << "The lion tears into some meat.\n";
    };
};

class Elephant : public Animal {
    public:
    //using the above animal constructor
    using Animal::Animal;

    //default constructor
    Elephant() = default;

    //virtual functions set for polymorphism
    virtual void makeSound(){
        cout << "The elephant toots its trunk.\n";
    };

    virtual void eat(){
        cout << "The elephant crunches some leaves.\n";
    };
};

    //declaring all animals and the zooCollection vector for storing the animals
    vector <Animal*> zooCollection = {};

    Lion* lion1 = new Lion ("Simba", 6, "Lion", "Carnivore", "Grassy Plains");
    Lion* lion2 = new Lion ("Nala", 5, "Lion", "Carnivore", "Grassy Plains");
    Elephant* elephant1 = new Elephant ("Dumbo", 2, "Elephant", "Herbivore", "Grassy Plains");
    Elephant* elephant2 = new Elephant ("Mrs. Jumbo", 10, "Elephant", "Herbivore", "Grassy Plains");

    void deleteAnimal(Animal* animal){
            delete animal;
            cout << "Animal deleted\n";
    };

    //this adds any single animal to the zooCollection vector
    void addAnimal(Animal* animal){
        zooCollection.push_back(animal);
    };

    //this calls the makeSound function for all animals
    void makeAllAnimalSound(){
        cout << "Listen to our lovely animals!\n";

        for (int i=0; i < zooCollection.size(); i++) {
            zooCollection[i]->makeSound();
        }
};

    //this displays all info for every animal within the zooCollection vector
    void displayAllAnimals(){

        //this detects whether there is information in the zooCollection vector to display (I know it doesn't work if there's only a single animal)
        if (zooCollection.size() == 0){
            cout << "Oops there's no animals.\n";
        }
        else {
        cout << "Here's a list of all of our animals:\n";

        for (int i=0; i < zooCollection.size(); i++) {
            zooCollection[i]->displayInfo();
        }
    }
};

int main(){

    //welcome message
    cout << "Welcome to the Zoo managment system!" << endl;

    //before doing any logic this adds all of these animals to the zooCollection vector
    addAnimal(lion1);
    addAnimal(lion2);
    addAnimal(elephant1);
    addAnimal(elephant2);

    //automatically plays all animal sounds
    makeAllAnimalSound();

    //automatically displays all animal information
    displayAllAnimals();

    //deletes all animals and frees memory
    deleteAnimal(elephant2);
    deleteAnimal(elephant1);
    deleteAnimal(lion2);
    deleteAnimal(lion1);

    zooCollection.clear();
    cout << "The zoo has been cleared.\n";

    //shows that there are no animals to display
    displayAllAnimals();

    system("pause>0");

    return 0;
}