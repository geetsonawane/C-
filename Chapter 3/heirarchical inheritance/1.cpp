#include<iostream>
using namespace std;

class A
{
	int a;
	public:
		void accept1()
	    {
	    	cout<<"Enter any number :  ";
	    	cin>>a;
		}
		void display1()
		{
			cout<<"\n\n A : ";
		}
};
class B:public A
{
	int b;
	public:
		void accept2()
		{
			cout<<"\n\n Enter any number : ";
			cin>>b;
		}
		void display2()
		{
			cout<<"\n\n B : ";
		}
};
class C:public A
{
	int c;
	public:
		void accept3()
		{
			cout<<"\n\n Enter any number : ";
			cin>>c;
		}
		void display3()
		{
			cout<<"\n\n C : ";
		}
};
int main()
{
	  B obj1;
	  cout<<" \n\n class B accept ";
	  obj1.accept1();
	  obj1.accept2();
	  
	  cout<<" \n\n class B display ";
	  obj1.display1();
	  obj1.display2();
	  
	  C obj2;
	  cout<<"\n\n class C accept ";
	  obj2.accept1();
	  obj2.accept3();
	  
	  cout<<"\n\n class C display ";
	  obj2.display1();
	  obj2.display3();
	  
	  return 0;
	  
}
