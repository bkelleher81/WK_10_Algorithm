#include "Algos.h"


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
