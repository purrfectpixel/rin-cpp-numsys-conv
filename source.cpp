#include <iostream>
#include "header/converter.h"

using namespace std;

int main()
{
	int input, choice, r;
	

	for(;;)
	{
		cout << "Welcome to my number conversion program!\n1/Decimal to Binary\n2/Binary to Decimal\n3/Hexadecimal to Decimal\n4/Decimal to Hexadecimal\nInput your choice: " << endl;
		
		do
		{
			cin >> choice;
			if(!(choice >= 1 && choice <= 4))
				cout << "Error, invalid choice!\n1/Decimal to Binary\n2/Binary to Decimal\n3/Hexadecimal to Decimal\n4/Decimal to Hexadecimal\nInput your choice: ";
		}
		while(!(choice >= 1 && choice <= 4));

		cout << "Input: ";
		
		if(choice != 3)
			cin >> input;
		
		switch(choice)
		{
			case 1:
				r = Dec2Bin(input);
				break;
			case 2:
				r = Bin2Dec(input);
				break;
			case 3:
				r = Hex2Dec();
				break;
			case 4:
				cout << "Result: ";
				Dec2Hex(input);
				break;
		}

		if(choice != 4)
			cout << "Result: " << r << endl;

		cout << "Continue?[1/0]: ";
		cin >> choice;
		if(choice != 1)
			return 0;
	}
}