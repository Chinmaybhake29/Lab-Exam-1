/*
Q.No. 2
Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a class named 'Rectangle' with a function named 'Area' which returns the area. 
Length 

*/
#include<iostream>
using namespace std;

class Reactangle
{
	private:
		int l,b;
	public:
		void area(int l1, int b1)
		{
			l=l1;
			b=b1;
			cout<<"\n Area of Rectangle: "<<(l1*b1);
		}
};
int main()
{
	Reactangle r1,r2;
	r1.area(4,5);
	r2.area(5,8);
	return 0;
}