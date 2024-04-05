#include<iostream>
using namespace std;

class Geet
{
	int a,b,sum;
	public:
		Geet()
		{
			cout<<"\n\n Enter any two Number : ";
			cin>>a>>b;
			cout<<"\n\n A = "<<a;
			cout<<"\n\n B = "<<b;
			sum=a+b;
			cout<<"\n\n Sum : "<<sum;
			
		}
		
};
int main()
{
	Geet g1,g2,g3;
	return 0;
	
}
