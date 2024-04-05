
#include<iostream>
using namespace std;

class Sample
{
	public:
		void sum(int x,int y)
		{
			cout<<"\n\n Sum of two integers is "<<x+y;
		}
		void sum(int a,int b,int z)
		{
			cout<<"\n\n Sum of three integers is "<<a+b+z;
		}
};
int main()
{
	Sample s;
	s.sum(20,50);
	s.sum(10,70,40);
	return 0;
}
