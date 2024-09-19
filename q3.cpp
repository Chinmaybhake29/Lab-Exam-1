/*
Q.No. 3
Write a C++ program to create a class Student with data members Roll_No, 
Student_Name, Class. Write member functions to accept and display Student information also display count of students. 
(Use Static data member and Static member function)
*/
#include<iostream>
using namespace std;
class student
{
    private:
    	string Student_Name,std; 
		int Roll_No;
		static int count;        
    public:
    	void accept(string Student_name, int Roll_no)    
    	{
    		cout<<"Enter the rollno and student name";
    		cin>>Roll_No>>Student_Name>>std;
		}
		void display()
		{
			cout<<"Student Name: "<<Student_Name;
			cout<<"Student Rollno: "<<Roll_No;
			count++;
		}
		
};
static student::void display();
int main()
{
	student s1, s2;
    s1.accept("ABGS",23);
    s1.display();
    s2.accept("Tiger",34);
    s2.display();
    
    return 0;
}