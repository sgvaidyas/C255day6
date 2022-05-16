#include<iostream>
using namespace std;
int main(){
	int MAX = 5;
	int ele, top1= -1, a[MAX],ch,ch2, top2 = MAX, counter = 0;
	do{
		cout<<"\n 1 PUSH 2 POP 3 DISPLAY 4 EXIT \n Enter choice = ";
		cin >> ch;
		switch(ch)
		{
			case 1 :
				
				if(top2==top1+1)
					cout<<"\n stack overflow \n";
				else
				{
					cout<<"\n 1 TOP 2 BOTTOM";
					cin>>ch2;
					switch(ch2){					
						case 1:							
								cout<<"\nEnter ele =";
								cin>>ele;
								top2--;
								a[top2] = ele;
								break;						
						case 2:
							
								cout<<"\nEnter ele =";
								cin>>ele;
								top1++;
								a[top1] = ele;
								break;
					}
				}			
				break;
			case 2:
				cout<<"\n 1 TOP 2 BOTTOM";
				cin>>ch2;
				switch(ch2){
					case 1:
						if(top2 == MAX){
							cout<<"\n Stack Underflow";
						}else{
							cout<<"\n deleted ele = " << a[top2++];
						}
						break;
					case 2:
						if(top1 ==-1){
							cout<<"\n Stack underflow\n";
						} else{
							cout<<"\n deleted ele = "<<a[top1];
							top1--;
						}
					break;
				}
				break;
			case 3:
				if (top1==-1 && top2==MAX){
					cout <<"\n Stack Empty \n";
				}else{
					cout<<"\n Stack elements from the top are =";
					for (int i =top2; i<MAX ; i++){
						cout<<a[i]<<endl;
					}
					cout<<"\n Stack elements from the bottom are =";
					for (int i =top1; i>=0 ; i--){
					cout<<a[i]<<endl;
					}
				}
				break;
			case 4:
				break;
			default:cout<<"\n Invalid choice \n";
		}
	}while(ch!=4);
	
}
