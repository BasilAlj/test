#include <iostream>
using namespace std;
int main()
{
	short arrayName[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	// Use array name to get pointer to the first element.
	short* firstPtr = arrayName;
	cout << "Style 1: Addition operator." << endl;
	for (int i = 0; i < 8; ++i)
	{
		cout << *(firstPtr+ i) << " ";
	}
	cout << endl;
	cout << "Style 2: Addition operator." << endl;
	for (int i = 0; i < 8; ++i)
	{
		cout << firstPtr [i] << " ";
	}
	cout << endl;
	cout << "Style 3: Increment operator." << endl;
	for (int i = 0; i < 8; ++i)
	{
		cout << *firstPtr << " ";
		++firstPtr; // Move pointer to next element.
		//This style will change the address 
	}
	cout << endl;
	cout << "Style 2: Addition operator.once more" << endl;
	for (int i = 0; i < 8; ++i)
	{
		cout << firstPtr[i] << " ";
	}
	cout << endl;
	cout << "Style 1: Addition operator. once more" << endl;
	for (int i = 0; i < 8; ++i)
	{
		cout << *(firstPtr + i) << " ";
	}
	cout << endl;
	cout << "  You can see that both Style 1 and 2  have changed because style 3 effects the address!";
	system("pause>0");
