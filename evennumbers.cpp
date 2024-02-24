#include <iostream>
using namespace std;
//display even numbers from 10 to 20
int main (){
int i;

    for(i=10; i<=20; i++){
        if(i % 2 == 0){
            cout << i << endl;
        }
    }

    return 0;
}