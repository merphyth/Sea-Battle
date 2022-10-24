#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>
#include <string>
#include <string.h>
#include <ctype.h>

using namespace std;

char Player[80];
//const int rows = 9; 
//const int elements = 9;
const int SIZE = 9;
int maxships = 2;
int matrix[SIZE][SIZE];
int x, y;

void korabli(int matrix[][9], int& x, int& y, int maxships) // создание кораблей
{
	for (size_t i = 0; i < maxships; i++)
	{
		x = rand() % SIZE + 1;
		y = rand() % SIZE + 1;
		matrix[x][y] = 1;
	}
}

void vivod_polya(int matrix[][9], int& x, int& y) // вівод поля
{
	for (size_t i = 0; i < SIZE; i++)
	{
		for (size_t j = 0; j < SIZE; j++)
		{
			cout << matrix[i][j];
		}
		cout << endl;
	}
}

void vistrel(int matrix[][9], int& x, int& y) // віполнение вістрела
{
	int maxships = 2;
	cout << "Enter coord: " << endl;
	cin >> x;
	cin >> y;
	if (matrix[x][y] == 1)
	{
		cout << "Nice!" << endl;
		matrix[x][y] = 0;
		maxships--;
		bool flag = false;
		for (size_t i = 0; i < SIZE; i++) //перевірка
		{
			for (size_t j = 0; j < SIZE; j++)
			{
				if (matrix[i][j] == 1)
				{
					flag = true;
					break;
				}
			}
			if (flag == true)
			{
				break;
			}
		}
		if (flag == false && maxships == 0)
		{
			cout << "Win!" << endl;
		}
	}
	else
	{
		cout << "Try again!" << endl;
	}
}

void Bot_vistrel(int matrix[][9], int& x, int& y) //выполнение выстрела ботом
{
	int maxships = 2;
	x = rand() % SIZE;
	y = rand() % SIZE;
	if (matrix[x][y] == 1)
	{
		cout << "Nice!" << endl;
		matrix[x][y] = 0;
		maxships--;
		bool flag = false;
		for (size_t i = 0; i < SIZE; i++) //перевірка
		{
			for (size_t j = 0; j < SIZE; j++)
			{
				if (matrix[i][j] == 1)
				{
					flag = true;
					break;
				}
			}
			if (flag == true)
			{
				break;
			}
		}
		if (flag == false && maxships == 0)
		{
			cout << "Win!" << endl;
		}
	}
	else
	{
		cout << "Try again!" << endl;
	}
}