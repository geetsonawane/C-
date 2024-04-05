#include<iostream>
using namespace std;

class Geet
{
	int a;
	public:
		Geet()
		{
			cout<<"\n\n Enter any Number : ";
			cin>>a;
		}
		void display()
		{
			cout<<"\n\n A = "<<a;
		}
};
int main()
{
	Geet g1,g2,g3;
	g1.display();
	g2.display();
	g3.display();
	return 0;
	
}
