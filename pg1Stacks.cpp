#include<iostream>
#define max 5
using namespace std;
int main()
{
	int ele,top=-1,a[max],ch;
	do
	{
		cout<<"\n 1 PUSH 2 POP 3 DISPLAY 4 EXIT \nEnter choice =";
		cin>>ch;
		switch(ch)
		{
			case 1:if(top==max-1)
						cout<<"\nstack overflow "<<endl;
					else
					{
						cout<<"\nEnter ele =";
						cin>>ele;
						top++;
						a[top] = ele;						
					}
					break;
			case 2 :if(top==-1)
						cout<<"\n Stack underflow\n";
					else
					{
						cout<<"\n deleted ele = "<<a[top];
						top--;						
					}
					break;
			case 3: if(top==-1)
						cout<<"\n Stack empty\n";
					else
					{
						cout<<"\n Stack elements are =" ;
						for(int i=top;i>=0;i--)
							cout<<a[i]<<endl;		
					}
					break;
			case 4:break;
			default:cout<<"\n Invalid choice \n";
		}
	}while(ch!=4);
}
