#include<iostream>
#define max 100
using namespace std;

void push(char a[],char c,int top)
{
	if(top==max-1)
		cout<<"\n Cannot inert stack overflow \n";
	else
		a[++top] = c;
}
char pop(char a[],int top)
{
	if(top==-1)
		cout<<"\n stack underflow \n";
	else
		return a[top];
}
