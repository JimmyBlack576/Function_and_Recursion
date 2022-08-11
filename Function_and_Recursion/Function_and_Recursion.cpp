#include <iostream>

using namespace std;

void printarr(int arr[4][4]);

void printarr(double arr[4][4]);

void printarr(char arr[4][4]);

void MinAndMax(int arr[4][4]);

void MinAndMax(double arr[4][4]);

void sortString(int arr[4][4]);

void sortString(double arr[4][4]);



int main()
{
	//Task 1____________________________
	int arr[4][4]= {
		{1,5,8,2},
		{8,5,3,0},
		{6,2,3,9},
		{4,7,1,9}};
	double arr1[4][4] = { 
		{1.3,3.2,6.1,5.4},
		{7.2,9.6,3.7,4.6},
		{5.5,8.1,3.6,1.1},
		{4.4,9.3,7.4,5.1} };
	char arr2[4][4]= {
		{1,2,5,2},
		{2,3,6,5},
		{4,2,3,6},
		{2,1,1,5}};
	
	printarr(arr);
	printarr(arr1);
	printarr(arr2);
	MinAndMax(arr);
	MinAndMax(arr1);
	sortString(arr);
	sortString(arr1);
	//Task 2___________________________

}


void printarr(int arr[4][4])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			cout << arr[i][j] << "  ";
		cout << "\n";
	}
}

void printarr(double arr[4][4])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			cout << arr[i][j] << "  ";
		cout << "\n";
	}
}

void printarr(char arr[4][4])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			cout << arr[i][j] << "  ";
		cout << "\n";
	}
}

void MinAndMax(int arr[4][4]) {
	int min = arr[0][0];
	int max = arr[0][0];
	for (int i = 0; i < 4; ++i) {
		if (min > arr[i][i])
			min = arr[i][i];
		else if (max < arr[i][i])
			max = arr[i][i];
	}
	cout << "Min " << min << endl;
	cout << "Max " << max << "\n\n";

}

void MinAndMax(double arr[4][4]) {
	double min = arr[0][0];
	double max = arr[0][0];
	for (int i = 0; i < 4; ++i) {
		if (min > arr[i][i])
			min = arr[i][i];
		else if (max < arr[i][i])
			max = arr[i][i];
	}
	cout << "Min " << min << endl;
	cout << "Max " << max << "\n\n";

}

void sortString(int arr[4][4]) {
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 4 - 1; k > j; k--)
				if (arr[i][k - 1] > arr[i][k])
				{
					int tmp = arr[i][k];
					arr[i][k] = arr[i][k - 1];
					arr[i][k - 1] = tmp;
				}
			cout << arr[i][j] << "  ";
		}
		cout << "\n";
	}
}

void sortString(double arr[4][4]) {
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 4 - 1; k > j; k--)
				if (arr[i][k - 1] > arr[i][k])
				{
					double tmp = arr[i][k];
					arr[i][k] = arr[i][k - 1];
					arr[i][k - 1] = tmp;
				}
			cout << arr[i][j] << "  ";
		}
		cout << "\n";
	}
}