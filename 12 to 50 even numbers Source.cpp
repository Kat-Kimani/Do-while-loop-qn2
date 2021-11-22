#include<iostream>
using namespace std;

int main() {

	//allows you to execute code atleast once before testing it
	int num = 12;

		cout << "Even Numbers between 12 and 50" << endl;
		do {
			if (num % 2 == 0)
				cout << num << endl;
				num = num + 2;

			} while (num <= 50);
		
			return 0;
		}