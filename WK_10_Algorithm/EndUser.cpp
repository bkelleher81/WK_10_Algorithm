#pragma once
#include"Algos.h"
#include <iostream>
using namespace std;

int main()
{
	Algos a;
	int someNumbers[10] = { 10, 15, 12, 18, 6, 2, 1, -20, 0, 100 };
	int sortedNumbers[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int userNum = -1;
	int answer = -1; // catch variable for i
	cout << "Enter number we are looking for: ";
	cin >> userNum;
	answer = a.linearSearch(userNum, someNumbers,10); // must insert value we are looking for and size of array
	cout << "Numbers in array are as follows: "<< endl;
	cout << endl;
	for (int j = 0; j < 10; j++)
	{
		cout << someNumbers[j] << " ";
	}
	if (answer == -1)
	{
		cout << "\n" << userNum << " is not found in array;" << endl; // array locatuion

	}
	else
	{
		cout << "\n" << userNum << " is found at array location: " << answer << endl;
	}
	answer = a.binarySearch(userNum, sortedNumbers, 0,9); // must insert value we are looking for and size of array
	cout << endl;
	cout << "Numbers in array are as follows: " << endl;
		cout << endl;
	for (int j = 0; j < 10; j++)
	{
		cout << sortedNumbers[j] << " ";
	}
	

	if (answer == -1)
	{
	cout << "\n"<<userNum << " is not found in array;" << endl; // array locatuion
	
	}
	else
	{
		cout << "\n"<< userNum << " is found at array location: " << answer << endl;
	}
	return 0;
}