#include "Algos.h"


int Algos::findMidPoint(int min, int max)
{
	return ((min+max)/2);
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
