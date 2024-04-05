#include<iostream>
using namespace std;

int sum(int x,int y)
{
	return x+y;
}
float sum(float x,float y)
{
	return x+y;
}
float sum(float x,int y)
{
	return x+y;
}

int main()
{
	int a;
	float b;
	
	a=sum(10,20);
	cout<<"\n\n Sum of Two integers "<<a;
	
	b=sum(20.0F,40.0F);
	cout<<"\n\n Sum of Two floats "<<b;
	
	b=sum(50.0F,10);
	cout<<"\n\n Sum of one int and one float "<<b;
	
	return 0;	
}
