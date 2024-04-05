#include<iostream>
using namespace std;

class Geet
{
	int x,y;
	float a,b;
	public:
		void sum(int x,int y)
		{
			cout<<"\n\n Sum of two integers is "<<x+y;
		}
		void sum(float a, float b)
		{
			cout<<"\n\n\ Sum of two floats is "<<a+b;
		}
		void sum(float a,int x)
		{
			cout<<"\n\n Sum of one float and one integer is "<<a+x;
		}
};
int main()
{
	Geet g;
	g.sum(100,200);
	g.sum(10.0F,20.0F);
	g.sum(20.0F,10);
	
	return 0;
}
