#include <iostream>

using namespace std;

int main() {
    int grade;

    cout << "Input your grade: ";
    cin >> grade;

    if (grade >= 70 && grade <= 100) {
        cout << "Grade A" << endl;
    } else if (grade >= 60 && grade <= 69) {
        cout << "Grade B" << endl;
    } else if (grade >= 50 && grade <= 59) {
        cout << "Grade C" << endl;
    } else if (grade >= 40 && grade <= 49) {
        cout << "Grade D" << endl;
    } else if (grade >= 0 && grade <= 39) {
        cout << "Grade E" << endl;
    } else {
        cout << "Input a valid grade between 0 and 100." << endl;
    }

    return 0;
}
