/*Q.No 1
Employee Management System
File handling has been effectively used for each feature of this project
Operation
1.	Add  Employee Information
2.	Search Employee Information
4.	Delete Employee Data
5.	Search Employee Record.*/

#include<iostream>
#include<fstream>
using namespace std;
void add()
{
	string name,age;
	cout<<"\n --------------Employee Information-------------- \n";
   cout<<"Enter name:";
   cin>>name;
  ofstream out("d:\\"+name+".txt");
  cout<<"Your age\n";
  cin>>age;
  out<<"Name is "<<name<<" and age is "<<age;
  out.close();
  cout<<"\nWritten to file and saved..";
};
int main()
{
  add();
}