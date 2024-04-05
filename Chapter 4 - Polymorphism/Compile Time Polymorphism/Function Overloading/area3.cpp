#include<iostream>
using namespace std;

class Area
{
	public:
		float area(int r)
		{
			return 3.142*r*r;
		}
		int area(int l,int b)
		{
			return l*b;
		}
		float area(float b,float h)
		{
			return 0.5*b*h;
		}
		
};

int main()
{
	int a;
	float b,c;
	
	Area A;
	
	b=A.area(10);
	cout<<"\n\n Area of a circle : "<<b;
	
	a=A.area(20,30);
	cout<<"\n\n Area of a rectangle : "<<a;
	
	c=A.area(40,50);
	cout<<"\n\n Area of a triangle : "<<c;
	
	return 0;
	
	
	
}
