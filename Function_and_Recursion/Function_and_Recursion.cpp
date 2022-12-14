#include <iostream>
#include <ctime>

using namespace std;
//Целочисленный массив задание 1
void printarr(int arr[4][4]);
//double массив задание 1
void printarr(double arr[4][4]);
//Char массив задание 1
void printarr(char arr[4][4]);
//задание 1
void MinAndMax(int arr[4][4]);
//Задание 1
void MinAndMax(double arr[4][4]);
//Задание 1 сортировка
void sortString(int arr[4][4]);
//Задание 1 сортировка
void sortString(double arr[4][4]);
//Задание 2 
int NOD(int a, int b);
//Создание массива для Задания 3
void create_arr(int arr[]);
//Вывод массива для задание 3 (для проверки работоспособности программы)
void print_arr(int arr[]);
//массив для хранения данных введёных пользователем
void enter_arr(int arr[]);
//Функция сравнения исходных данных с пользовательскими 
void comparison(int arr[], int arr1[], int* n);
 


int main()
{
	srand(time(NULL));
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
	cout << "Task 1 \n\n";
	printarr(arr);
	printarr(arr1);
	printarr(arr2);
	MinAndMax(arr);
	MinAndMax(arr1);
	sortString(arr);
	sortString(arr1);
	system("pause");
	system("cls");
	//Task 2___________________________
	cout << "Task 2 \n\n";
	int a, b;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	cout<<" NOD = " << NOD(a, b) <<endl;
	system("pause");
	system("cls");
	//Task 3___________________________
	int cow[4];
	int bull[4];
	int count=0,n=0;
	cout << "Task 3 \n\n";
	create_arr(cow);
	print_arr(cow);//Можно закомментировать что бы загаданное число не отображалось
	do {
		enter_arr(bull);
		comparison(cow, bull,&n);
		count++;
		cout << "\n\nAttempts: " << count << endl;
	} while (n==0);

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

int NOD(int a, int b) {
	if (b == 0)
		return a;
	if (a > b)
		return NOD(b, a % b);
	else 
		return NOD(a, b % a);
}

void create_arr(int arr[]) {
	for (int i = 0; i < 4; i++) {
		arr[i] = 1 + rand() % 9;
	}
}

void print_arr(int arr[]) {
	for (int i = 0; i < 4; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void enter_arr(int arr[]) {
	int n;
	cout << "Enter single digit numbers one by one: \n";
	for (int i = 0; i < 4; i++) {
		cin >> n;
		arr[i] = n;
	}
}

void comparison(int arr[], int arr1[], int* n) {
	for (int i = 0; i < 4; i++) {
		if (arr[i] != arr1[i]) {
			cout << '*' << " ";
			*n++;
		}
		else if (arr[i] == arr1[i])
			cout << arr[i] << " ";
	}
	if (*n == 0) {
		cout << "\n  You win!\n\n";
		exit(0);
	}
}