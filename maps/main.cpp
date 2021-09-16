#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {

   map<string, int> students;
   int numberOfStudents = 0;
   cin >> numberOfStudents;

   for (int index = 0; index < numberOfStudents; index++) {
       int type = 0;
       string name;
       cin >> type >> name;

       switch (type) {
           case 1: {
               int grade = 0;
               cin >> grade;
               students[name] += grade;
               break;
           }

           case 2:
               students.erase(name);
               break;

           case 3:
               cout << students[name] << "\n";
               break;

           default:
               cout << 0 << "\n";
       }

   }

   return 0;
}



