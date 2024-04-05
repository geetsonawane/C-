#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream out;
	out.open("geet.txt");
	
	
		cout<<"Writing content to the file";
		
		out<<"\n\n Mumbai";
		out<<"\n\n Pune";
		out<<"\n\n Dhule";
		out<<"\n\n Surat";
		out<<"\n\n Delhi";
		
		cout<<"\n\n File Written Successful";
	
	out.close();
	return 0;
}
