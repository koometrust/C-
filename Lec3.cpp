//pass by reference
//pass by value
// Difference btwn union and struct
//make a union
// make a struct
//classes and objects
//Polymorphism(many forms)function overiding and overloading 
//inheritance
//encapsulation(Accessibility)
//Data abstraction - 

#include <iostream>
using namespace std;
class Car {
public:
    // Attributes
    string color;
    int year;

    // Method
    void startEngine() {
        cout << "Engine started!" << endl;
        cout << "The car is color: " << color << endl;
        cout << "It was made in the year: " << year << endl;

    }
};

int main() {
    // Object creation
    Car myCar;

    // Assigning values to attributes
    myCar.color = "Blue";
    myCar.year = 2022;

    // Calling a method
    myCar.startEngine();

    return 0;
}
