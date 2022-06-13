#include<iostream>
#include<fstream>
using namespace std;
// define a class to store student data
class student{
   int roll;
   char name[30];
   float marks;
public:
   student() { }
   void getData(); // get student data from user
   void displayData(); // display data
};
void student :: getData() {
   cout << "\nEnter Roll No. :: ";
   cin >> roll;
   cin.ignore(); // ignore the newline char inserted when you press enter
   cout << "\nEnter Name :: ";
   cin.getline(name, 30);
   cout << "\nEnter Marks :: ";
   cin >> marks;
}
void student :: displayData() {
   cout << "\nName :: " << name << endl;
   cout << "\nRoll No. :: " << roll << endl;
   cout << "\nMarks :: " << marks << endl;
}
int main(){
   student s[10]; // array of 10 student objects
   fstream file;
   int i;
   file.open("D:\\file4.txt", ios :: out); // open file for writing
    cout << "\nWriting Student information to the file :- " << endl;
    cout << "\nEnter 10 students Details to the File :- " << endl;
   for (i = 0; i < 10; i++){
      s[i].getData();
      // write the object to a file
      file.write((char *)&s[i], sizeof(s[i]));
    }
   file.close(); // close the file
   file.open("D:\\file4.txt", ios :: in); // open file for reading
   cout << "\nReading Student information to the file :- " << endl;
   for (i = 0; i < 10; i++){
      // read an object from a file
      file.read((char *)&s[i], sizeof(s[i]));
      s[i].displayData();
    }
   file.close(); // close the file
   return 0;
}
