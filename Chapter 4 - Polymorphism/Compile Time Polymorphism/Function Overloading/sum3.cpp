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
	Geet g1,g2,g3;
	g1.sum(100,200);
	g1.sum(10.0F,20.0F);
	g1.sum(20.0F,10);
	g2.sum(100,200);
	g2.sum(10.0F,20.0F);
	g2.sum(20.0F,10);
	g3.sum(100,200);
	g3.sum(10.0F,20.0F);
	g3.sum(20.0F,10);
	
	return 0;
}
