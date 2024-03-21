#include "Algos.h"
#include<iostream>
#include<string>
using namespace std;


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

void Algos::showMenu()
{

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
	int midpoint = -1;
	if (max < min)
	{
		return -1;
	}
	else
	{
		midpoint = findMidPoint(min, max);
	}
	if (myNums[midpoint] < key)
	{
		binarySearch(key, myNums, midpoint + 1, max);
	}
	else if (myNums[midpoint] > key)
	{
		binarySearch(key, myNums, min, midpoint - 1);
	}
	else
	{
		return midpoint;
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
