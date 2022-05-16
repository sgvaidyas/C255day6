#include<iostream>
#define max 5
using namespace std;

int a[max],front,rear;

void enqueue()
{
	if(rear-front==max-1)
		cout<<"\n queue overflown \n";
	else
	{
		int ele;
		cout<<"\n Enter the element  = ";
		cin>>ele;
		rear++;
		a[rear%max] = ele;
	}
}

void dequeue()
{
	if(front>rear)
	{
		cout<<"\n queue underflow \n";
		front = 0;
		rear=-1;
	}	
	else
	{
		cout<<"\n Deleting the element  = "<<a[front%max];
		front++;
	}
}

void display()
{
	if(front>rear)
		cout<<"\n queue empty \n";
	else
	{
		cout<<"\n Queue elements = \n";
		for(int i=front ; i<=rear ; i++)
			cout<<a[i%max]<<"\t";
			
		cout<<endl;
	}
}
int main()
{
	int ch;
	int front[] = {44,55,66};
	::front =0;
	rear = -1;
	do
	{
		cout<<"\n1 ENQUEUE 2 DEQUEUE 3 DISPLAY 4 EXIT Enter choice =";
		cin>>ch;
		switch(ch)
		{
			case 1:enqueue();break;
			case 2:dequeue();break;
			case 3:display();break;
			case 4:break;
			default:cout<<"\n invalid choice\n";
			
		}
	}while(ch!=4);
}

