//WAP to create  a class Person with data member as name and age. Accept information of 2 persons . Diplay the name of person who is elder person.


#include<iostream>
using namespace std;

class Person
{
	char name[10];
	int age;
	public:
		void accept()
		{
			cout<<" Enter the Name and Age : ";
			cin>>name>>age;
		}
		void display()
		{
			cout<<" Name : "<<name;
			cout<<" Age : "<<age;
		}
		
		
		
		
		
}
