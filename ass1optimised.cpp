#include <iostream>
#include <vector> //use the vector library

using namespace std;

class IT2024 {
public:
    int OS;
    int SAD;
    int OOP;
};

//this function calculates the average marks
double calculateAverage(int subject1, int subject2, int subject3) {
    return static_cast<double>(subject1 + subject2 + subject3) / 3.0;
}

int main() {
    int numStudents; // Number of students
    cout << "Enter the number of students: ";
    cin >> numStudents;

    vector<IT2024> students(numStudents); // Create a vector of IT2024 objects

    //a vector is basically a dynamic array that can change size and is not static and 
    //it is ideal for this sceneario cause no. of students can always change.

    // loop through & Input marks for each student based on mumStudents
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter marks for Student " << i + 1 << endl;
        cout << "Subject 1: ";
        cin >> students[i].OS;
        cout << "Subject 2: ";
        cin >> students[i].SAD;
        cout << "Subject 3: ";
        cin >> students[i].OOP;
        cout << endl;
    }

    // Calculate and display averages for each student
    for (int i = 0; i < numStudents; ++i) {
        double studentAverage = calculateAverage(students[i].OS, students[i].SAD, students[i].OOP);
        cout << "Student " << i + 1 << "'s average is: " << studentAverage << endl;
    }

    return 0;
}
