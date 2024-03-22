#pragma once
#include<iostream>
#include<string>
using namespace std;

class Algos
{
private:
	int answer = -1; // catch variable for i

	int someNumbers[10] = { 10, 15, 12, 18, 6, 2, 1, -20, 0, 100 };
	int sortedNumbers[10] = { 10,20,30,40,50,60,70,80,90,100 };
	char someChars[10] = { 'a','z','b','y','c','x','d','w','e','v' };
	string someStrings[10] = { "banana", "cherry", "apple", "kiwi", "grape", "fig", "lemon", "date", "elderberry", "honeydew" };
	int choice;
	int userNum = -1;
	int findMidPoint(int min, int max);
	void swap(int& n1, int& n2);
	void swapChars(char& c1, char& c2);
	void swapStrings(string& s1, string& s2);
public:
	void showMenu();
	int linearSearch(int key, int *myNums, int sizeOfArray);
	int binarySearch(int key, int* myNums, int min, int max);
	void bubbleSort(int* A, int n);
	void bubbleSortChars(char* A, int n);
	void bubbleSortStrings(string* A, int n);
};