#include <iostream>
using namespace std;
const int maxSize = 5;
int main() {
	int ele, top = -1, a[maxSize]{}, ch;
	do {
		cout << "\n 1 PUSH TOP 2 PUSH BOTTOM 3 POP TOP 4 POP BOTTOM 5 DISPLAY 6 EXIT\nENTER CHOICE = ";
		cin >> ch;
		switch (ch) {
			case 1:
				if (top == maxSize - 1) {
				cout << "\nstack overflow" << endl;
				}
				else {
					cout << "\nEnter ele = ";
					cin >> ele;
					top++;
					a[top] = ele;
				}
				break;
			case 2:
				if (top == maxSize - 1) {
					cout << "\nstack overflow" << endl;
				}
				else {
					cout << "\nEnter ele = ";
					cin >> ele;
					for (int i = top + 1; i > 0; i--) {
						a[i] = a[i - 1];
					}
					a[0] = ele;
					top++;
				}
				break;
			case 3:
				if (top == -1) {
					cout << "\nStack underflow\n";
				}
				else {
					cout << "Deleted ele = " << a[top];
					top--;
				}
				break;
				
			case 4:
				if (top == - 1) {
					cout << "\nstack underflow" << endl;
				}
				else {
					cout << "Deleted ele = " << a[0];
					
					for (int i = 0; i < top; i++) {
						a[i] = a[i + 1];
					}
					top--;
				}
				break;
			;
			case 5:
				if (top == -1) {
					cout << "\nStack empty\n";
				}
				else {
					cout << "\nStack elements are: ";
					for (int i = top; i >= 0; i--) {
						cout << a[i] << endl;
					}
				}
				break;
			case 6:
				break;
			default:
				cout << "\nInvalid choice\n";
				
		}
	} while (ch != 6);
}
