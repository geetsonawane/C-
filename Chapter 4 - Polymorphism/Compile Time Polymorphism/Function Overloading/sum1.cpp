#include<iostream>
using namespace std;

	void sum(int x,int y)
	{
		cout<<"\n\n Sum of two integers is "<<x+y;
	}
	void sum(int a,int b,int z)
	{
		cout<<"\n\n Sum of three integers is "<<a+b+z;
	}
				
int main()

{

	sum(20,100);
	sum(100,70,400);
	
	return 0;
}
