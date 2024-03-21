#pragma once
class Algos
{
private:
	int findMidPoint(int min, int max);
public:
	int linearSearch(int key, int *myNums, int sizeOfArray);
	int binarySearch(int key, int* myNums, int min, int max);

};