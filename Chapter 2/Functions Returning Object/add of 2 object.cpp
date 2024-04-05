// WAP to demostrate "Function returning object"
OR
// WAP to add two object and store the result into third object. Assume suitable data member and member function.




#include<iostream>
using namespace std;

class Sample
{
	int a,b;
	public:
		void accept()
		{
			cout<<"\n\nEnter any two Number : ";
			cin>>a>>b;
		}
	    void display()
	    {
	    	cout<<"A : "<<a;
	    	cout<<"B : "<<b;
		}
	    Sample calculate(Sample S2)
	    {
	    	Sample S3;
	    	S3.a = a + S2.a;
	    	S3.b = b + S2.b;
	    	return S3;
		}
	        
};
int main()
{
	Sample S1,S2,S3;
	
	cout<<"\n\n Object S1 : ";
	S1.accept();
	cout<<"\n\n Object S2 : ";
	S2.accept();
	
	S3 = S1.calculate(S2);
	
	cout<<"\n\n Object S1 : ";
	S1.display();
	cout<<"\n\n Object S2 : ";
	S2.display();
	
	cout<<"\n\n Addition of two object S1 and S2  :";
	S3.display();
	
	return 0;
	
}
