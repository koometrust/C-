#include <iostream>

using namespace std;

void square(int x){
    cout << x * x << endl;
}

int main (){
    int num;
    cout << "input number: ";
    cin >> num;
    // the square value 
    cout << "The square is: ";
    square(num);

    return 0;
}