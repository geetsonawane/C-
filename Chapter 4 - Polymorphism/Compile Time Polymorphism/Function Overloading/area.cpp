#include<iostream>
using namespace std;

class Area
{
	public:
		float area(int r);
		int area(int l,int b);
		float area(float b,float h);
};
float Area ::area(int r)
{
	return 3.142*r*r;
}
int Area::area(int l,int b)
{
	return l*b;
}
float Area ::area (float b,float h)
{
	return 0.5*b*h;
}
int main()
{
	int a;
	float b;
	
	Area A;
	b=area(10);
	cout<<"\n\n Area of a circle : "<<b;
	
	a=area(20,30);
	cout<<"\n\n Area of a rectangle : "<<a;
	
	b=area(40,50);
	cout<<"\n\n Area of a triangle : "<<b;
	
	return 0;
	
	
	
}
