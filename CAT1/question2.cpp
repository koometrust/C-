#include <iostream>

using namespace std;

void sum (int x, int y){
  cout <<  x + y; // this '+' and '-' are operators that act on operands
}

int main(){
    int a,b; // this are variables a and b
cout << "input num 1: "; // cout and cin are keywords
cin >> a;
cout << "input num 2: ";// this "//" is used for commenting and is not run in the code .
cin >> b;

cout << "Result is:" ;

sum(a,b);
cout<<endl;

return 0; 
}