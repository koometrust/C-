#include <iostream>

using namespace std;

void sum (int x, int y){
  cout <<  x + y;
}

int main(){
    int a,b;
cout << "input num 1: ";
cin >> a;
cout << "input num 2: ";
cin >> b;

cout << "Result is:" ;

sum(a,b);
cout<<endl;

return 0; 
}