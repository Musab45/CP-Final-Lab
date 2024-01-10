#include<iostream>
using namespace std;

//Initail Data
int arr1[5];
int arr2[7];
int arr3[13];
int temp = 0;

//Merge Function
void merge()
{
	//First 5 Indexes
	for (int i = 0; i < 5; i++)
	{
		temp = arr1[i];
		for (int j = i; j <= 12; j++)
		{
			arr3[j] = temp;
		}
	}
	//Last 7 indexes
	for (int i = 0; i < 7; i++)
	{
		temp = arr2[i];
		for (int j = i + 5; j <= 12; j++)
		{
			arr3[j] = temp;
		}
	}
	//Bubble Sort Method (For Ascending Order)
	for (int i = 0; i < 13; i++)
	{
		for (int j = i + 1; j < 13; j++)
		{
			if (arr3[i] > arr3[j])
			{
				temp = arr3[i];
				arr3[i] = arr3[j];
				arr3[j] = temp;
			}
		}
	}
}

int main()
{
	//Get Array 1
	cout << "Array 1" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr1[i];
	}
	//Get Array 2
	cout << "Array 2" << endl;
	for (int i = 0; i < 7; i++)
	{
		cin >> arr2[i];
	}
	//Merge Function Call
	merge();
	//Display Final Array
	for (int i = 0; i < 13; i++)
	{
		cout << arr3[i] <<"\t";
	}
}