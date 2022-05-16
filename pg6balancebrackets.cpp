#include <iostream>
#include <string>
using namespace std;
int main()
{	
	int stack[999];
	int top = -1;
	int nDelims = 3;
	int i, j;
	bool close, open;
	char closing[nDelims] = {')','}',']'};
	char opening[nDelims] = {'(','{','['};
	char input;
	cout<<"Please enter a string";
	while(cin >> input){
		//Break condition
		if (input == '!') break;
		//check if closing/opening delim
		close = false;
		open = false;
		for(i = 0; i < nDelims; i++){
			if (opening[i] == input) {
				j = i; 
				open = true;
			}
		}
		for(i = 0; i < nDelims; i++){
			if (closing[i] == input) {
				j = i; 
				close = true;
			}
		}
		
		if (open){
			top ++;
			stack[top] = j;
		}
		if (close){
			if (top >= 0 && stack[top] == j) top--;
			else{
				top++;
				stack[top] = j;
			}
		}
	}
	if (top == -1) cout<<"No syntax error";
	else cout<<"Missing delimiter";
}

