#include <iostream>
using namespace std;

class IT2024 {
  public:

  int OS;
  int SAD;
  int OOP;

};

int main(){
 IT2024 jude,mike,choxii;
 int average = 0.0;

 jude.OS = 77;
 jude.SAD = 77;
 jude.OOP = 77;

 average = (jude.OS + jude.SAD + jude.OOP)/3;
 cout << "Jude's average is: "<< average << endl;

 mike.OS = 66;
 mike.SAD = 66;
 mike.OOP = 66;

 average = (mike.OS + mike.SAD + mike.OOP)/3;
 cout << "Mike's average is: "<< average << endl;

 choxii.OS = 99;
 choxii.SAD = 99;
 choxii.OOP = 99;

 average = (choxii.OS + choxii.SAD + choxii.OOP)/3;
 cout << "Choxii's average is: "<< average << endl;



    return 0;
} 