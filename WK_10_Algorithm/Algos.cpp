#include "Algos.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void Algos::initializeArray()
{
	ifstream inStream("myData.txt");
	if (inStream.fail())
	{
		cout << "File failed to open" << endl;
		exit(1);
	}
	for (int i = 0; i < 10; i++)
	{
		inStream >> someNumbers[i];
	}
	// int sortedNumbers[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int userNum = -1;
	int answer = -1;
}

int Algos::findMidPoint(int min, int max)
{
	return ((min+max)/2);
}

void Algos::swap(int& n1, int& n2)
{
	int temp = -1;
	temp = n1;
	n1 = n2;
	n2 = temp;
}

void Algos::swapChars(char& c1, char& c2)
{
	char temp2 = c1;
	c1 = c2;
	c2 = temp2;
}

void Algos::swapStrings(string& s1, string& s2)
{
	string temp3 = s1;
	s1 = s2;
	s2 = temp3;
}


void Algos::showMenu()
{	
	cout << "Please select an option from the menu below: " << endl;
	cout << "1. Linear Search" << endl;
	cout << "2. Binary Search" << endl;
	cout << "3. Bubble Sort" << endl;
	cout << "4. Bubble Sort with Pointers" << endl;
	cout << "5. Bubble Sort Chars" << endl;
	cout << "6. Bubble Sort Strings" << endl;
	cout << "7. Selection Sort" << endl;
	cout << "8. Selection Sort  with Pointers" << endl;
	cout << "9. Exit" << endl;
	cin >> choice;
	if (choice == 1)
	{
		cout << "Enter number we are looking for: ";// enter number before searching
		cin >> userNum;
		answer = linearSearch(userNum, someNumbers, 10);
		cout << "Numbers in array are as follows: " << endl;
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
	}
	else if (choice == 2)
	{
		cout << "Enter number we are looking for: ";// enter number before searching
		cin >> userNum;
		answer=binarySearch(userNum, sortedNumbers, 0, 9); // must insert value we are looking for and size of array
		cout << endl;
		cout << "Numbers in array are as follows: " << endl;
		cout << endl;
		for (int j = 0; j < 10; j++)
		{
			cout << sortedNumbers[j] << " ";
		}


		if (answer == -1)
		{
			cout << "\n" << userNum << " is not found in array;" << endl; // array locatuion

		}
		else
		{
			cout << "\n" << userNum << " is found at array location: " << answer << endl;
		}
		cout << endl;
	}
	else if (choice == 3)
	{
		cout << "Array before sorting: \n";
		for (int j = 0; j < 10; j++)
		{
			cout << someNumbers[j] << " ";
		}
		cout << endl;
		bubbleSort(someNumbers, 10);
		cout << endl;
		cout << "Array after sorting: \n";
		for (int j = 0; j < 10; j++)
		{
			cout << someNumbers[j] << " ";
		}
	}
	else if (choice == 4)
	{
		cout << "Array before sorting: \n";
		for (int j = 0; j < 10; j++)
		{
			cout << someNumbers[j] << " ";
		}
		cout << endl;
		bubbleSortPointerVersion(someNumbers, 10);
		cout << endl;
		cout << "Array after sorting: \n";
		for (int j = 0; j < 10; j++)
		{
			cout << someNumbers[j] << " ";
		}
	}
	else if (choice == 5)
	{
		cout << "Array before sorting: \n";
		for (int j = 0; j < 10; j++)
		{
			cout << someChars[j] << " ";
		}
		cout << endl;
		bubbleSortChars(someChars, 10);
		cout << endl;
		cout << "Array after sorting: \n";
		for (int j = 0; j < 10; j++)
		{
			cout << someChars[j] << " ";
		}
	}
	else if (choice == 6)
	{
		cout << "Array before sorting: \n";
		for (int j = 0; j < 10; j++)
		{
			cout << someStrings[j] << " ";
		}
		cout << endl;
		bubbleSortStrings(someStrings, 10);
		cout << endl;
		cout << "Array after sorting: \n";
		for (int j = 0; j < 10; j++)
		{
			cout << someStrings[j] << " ";
		}
	}
	else if (choice == 7)
	{
		cout << "Array before sorting: \n";
		for (int j = 0; j < 10; j++)
		{
			cout << someNumbers[j] << " ";
		}
		cout << endl;
		selectionSort(someNumbers, 10); // Call the selection sort function
		cout << "Array after sorting: \n";
		for (int j = 0; j < 10; j++)
		{
			cout << someNumbers[j] << " ";
		}
		cout << endl;
	}
	else if (choice == 8)
	{
		cout << "Array before sorting: \n";
		for (int j = 0; j < 10; j++)
		{
			cout << someNumbers[j] << " ";
		}
		cout << endl;
		selectionSortPointerVersion(someNumbers, 10); // Call the selection sort function
		cout << "Array after sorting: \n";
		for (int j = 0; j < 10; j++)
		{
			cout << someNumbers[j] << " ";
		}
		cout << endl;
	}
	else if (choice == 9)
	{
		cout << "Goodbye!\n";
		exit(0);
	}
	else
	{
		cout << "Invalid choice. Please try again.\n";
	}
	cout << endl;
	showMenu();
}
int Algos::linearSearch(int key, int *myNums, int sizeOfArray)
{
	for (int i = 0; i < sizeOfArray; i++)
	{
		if (*(myNums+i) == key) // dereference array and grab actual value of the array
		{
			return i;
		}
	}
	return -1;
}


int Algos::binarySearch(int key, int* myNums, int min, int max)
{
	if (max < min)
	{
		return -1; // Element not found
	}

	int midpoint = findMidPoint(min, max);

	if (myNums[midpoint] < key)
	{
		return binarySearch(key, myNums, midpoint + 1, max);
	}
	else if (myNums[midpoint] > key)
	{
		return binarySearch(key, myNums, min, midpoint - 1);
	}
	else
	{
		return midpoint; // Element found at midpoint
	}
}
void Algos::bubbleSort(int* A, int n)
{
	bool flag = false;
	for (int k = 1; k < n; k++)
	{
		flag = false;
		for (int i = 0; i < n - k; i++)
		{
			if (A[i] > A[i + 1])
			{
				swap(A[i], A[i + 1]);
				flag = true;
			}
		}
		if (!flag)// didnt do any swapping
		{
			break;
		}
	}
}

void Algos::bubbleSortPointerVersion(int* A, int n)
{
	bool flag = false;
	for (int k = 1; k < n; k++)
	{
		flag = false;
		for (int i = 0; i < n - k; i++)
		{
			if (*(A+i) > *(A+i + 1))
			{
				swap(*(A+i), *(A+i + 1));
				flag = true;
			}
		}
		if (!flag)// didnt do any swapping
		{
			break;
		}
	}
}

void Algos::bubbleSortChars(char* A, int n)
{
	bool flag = false;
	for (int k = 1; k < n; k++)
	{
		flag = false;
		for (int i = 0; i < n - k; i++)
		{
			if (A[i] > A[i + 1])
			{
				swapChars(A[i], A[i + 1]);
				flag = true;
			}
		}
		if (!flag)// didnt do any swapping
		{
			break;
		}
	}
}

void Algos::bubbleSortStrings(string* A, int n)
{
	bool flag = false;
	for (int k = 1; k < n; k++)
	{
		flag = false;
		for (int i = 0; i < n - k; i++)
		{
			if (A[i] > A[i + 1])
			{
				swapStrings(A[i], A[i + 1]);
				flag = true;
			}
		}
		if (!flag)// didnt do any swapping
		{
			break;
		}
	}
}
void Algos::selectionSort(int* A, int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		int minIndex = i;
		for (int j = i + 1; j < n; ++j)
		{
			if (A[j] < A[minIndex])
			{
				minIndex = j;
			}
		}
		if (minIndex != i)
		{
			swap(A[i], A[minIndex]);
		}
	}
}

void Algos::selectionSortPointerVersion(int* A, int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		int minIndex = i;
		for (int j = i + 1; j < n; ++j)
		{
			if (*(A+j) < *(A+minIndex))
			{
				minIndex = j;
			}
		}
		if (minIndex != i)
		{
			swap(*(A+i), *(A+minIndex));
		}
	}
}
