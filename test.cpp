#include <iostream>

using namespace std;

// Function definition
void modifyValue(int x) {
    x = x * 2;
    cout << "modified value: " << x << endl;

}

int main() {
    int num = 5;
    
    // Call the function with num passed by value
    modifyValue(num);
    // Output the original value of num
    cout << "Original value of num: " << num << endl;
    
    return 0;
}