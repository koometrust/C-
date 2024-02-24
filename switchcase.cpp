#include <iostream>

using namespace std;

int main (){
    int grade;

    cout << "Input your grade: ";
    cin >> grade;

    switch(grade){
        case 70 ... 100:
        cout << "Grade A" << endl;
        break;
        case 60 ... 69:
        cout << "Grade B" << endl;
        break;
        case 50 ... 59:
        cout << "Grade C" << endl;
        break;
        case 40 ... 49:
        cout << "Grade D" << endl;
        break;
        case 0 ... 39:
        cout << "Grade E" << endl;
        break;
        default:
        cout << "Input Correct Values" << endl;
        break;
    }

    

    return 0;
}