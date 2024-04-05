// WAP to demostrate single inheritance in OOP.

#include<iostream>
using namespace std;

class A 
{
	int a;
	public:
		void accept1()
		{
			cout<<"Enter any number :";
			cin>>a;
		}
		void display1()
		{
			cout<<" A : "<<a;
		}
};
class B: public A
{
	int b;
	public:
		void accept2()
		{
			cout<<"Enter any number : ";
		}
		void display2()
		{
			cout<<" B : "<<b;
		}
};
int main()
{
	B obj;
	obj.accept1();
	obj.accept2();
	obj.display1();
	obj.display2();
	return 0;
	
}
