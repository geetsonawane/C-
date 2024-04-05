// WAP to demostrate multiple inheritance

#include<iostream>
using namespace std;

class A
{
	int a;
	public:
		void accept1()
		{
			cout<<" \n\nEnter any number: ";
			cin>>a;
		}
		void display1()
		{
			cout<<"\n\nA  : "<<a;
		}
};
class B
{
	int b;
	public:
		void accept2()
		{
			cout<<"\n\nEnter any number : ";
			cin>>b;
		}
		void display2()
		{
			cout<<"\n\nB : "<<b;
		}
};
class C :public A,public B
{
	int c;
	public:
		void accept3()
		{
			cout<<"\n\nEnter any Number : ";
			cin>>c;
		}
		void display3()
		{
			cout<<"\n\nC : "<<c;
		}
};
int main()
{
	C obj;
	obj.accept1();
	obj.accept2();
	obj.accept3();
	obj.display1();
	obj.display2();
	obj.display3();
	return 0;
}
