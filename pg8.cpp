#include<iostream>

using namespace std;

int a = 10;
int d;
int main()
{
	int a=8;
	d = 76;
	int d[] = {11,22,33};

	//d[0]=99;
	cout<<"\na = "<<a;
	cout<<"\n::a = "<<::a;
	
	{
		int b = 10;
		cout<<"\nb = "<<b;
	}
	int b = 35;
	cout<<"\nb = "<<b;
	
	cout<<" d = "<<d<<endl;
	cout<<" ::d = "<<::d<<endl;
	cout<<" d[0] = "<<d[0]<<" &d[0] = "<<&d[0]<<endl;
	
	
	
	
}
