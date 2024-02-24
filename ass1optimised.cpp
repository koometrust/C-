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

 cout<< "Enter marks for Jude"<< endl;
 cout<< "subject 1"<< endl;
 cin >>jude.OS;
 cout<< "subject 2"<< endl;
 cin >>jude.SAD;
 cout<< "subject 3"<< endl;
 cin >>jude.OOP;
 cout<<endl;

 cout<< "Enter marks for mike"<< endl;
 cout<< "subject 1"<< endl;
 cin >> mike.OS;
 cout<< "subject 2"<< endl;
 cin >>mike.SAD;
 cout<< "subject 3"<< endl;
 cin >>mike.OOP;
 cout<<endl;

 cout<< "Enter marks for choxii"<< endl;
 cout<< "subject 1"<< endl endl;
 cin >>choxii.OS;
 cout<< "subject 2"<< endl;
 cin >>choxii.SAD;
 cout<< "subject 3"<< endl;
 cin >>choxii.OOP;
 cout<<endl;

 average = (jude.OS + jude.SAD + jude.OOP)/3;
 cout << "Jude's average is: "<< average << endl;

 average = (mike.OS + mike.SAD + mike.OOP)/3;
 cout << "Mike's average is: "<< average << endl;

 average = (choxii.OS + choxii.SAD + choxii.OOP)/3;
 cout << "Choxii's average is: "<< average << endl;

    return 0;
} 