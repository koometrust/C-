#include <iostream>
using namespace std;

class IT2024 {
public:
    int OS;
    int SAD;
    int OOP;
};

// Function to calculate average marks
double calculateAverage(int subject1, int subject2, int subject3) {
    return static_cast<double>(subject1 + subject2 + subject3) / 3.0;
}

int main() {
    IT2024 jude, mike, choxii;

    cout << "Enter marks for Jude" << endl;
    cout << "Subject 1: ";
    cin >> jude.OS;
    cout << "Subject 2: ";
    cin >> jude.SAD;
    cout << "Subject 3: ";
    cin >> jude.OOP;
    cout << endl;

    cout << "Enter marks for Mike" << endl;
    cout << "Subject 1: ";
    cin >> mike.OS;
    cout << "Subject 2: ";
    cin >> mike.SAD;
    cout << "Subject 3: ";
    cin >> mike.OOP;
    cout << endl;

    cout << "Enter marks for Choxii" << endl;
    cout << "Subject 1: ";
    cin >> choxii.OS;
    cout << "Subject 2: ";
    cin >> choxii.SAD;
    cout << "Subject 3: ";
    cin >> choxii.OOP;
    cout << endl;

    // Calculate and display averages
    double judeAverage = calculateAverage(jude.OS, jude.SAD, jude.OOP);
    double mikeAverage = calculateAverage(mike.OS, mike.SAD, mike.OOP);
    double choxiiAverage = calculateAverage(choxii.OS, choxii.SAD, choxii.OOP);

    cout << "Jude's average is: " << judeAverage << endl;
    cout << "Mike's average is: " << mikeAverage << endl;
    cout << "Choxii's average is: " << choxiiAverage << endl;

    return 0;
}
