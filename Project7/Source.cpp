#define _CRT_SECURE_NO_WARNINGS
#define SIZE 9
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>
#include <string>
#include <string.h>
#include <ctype.h>
using namespace std;

char Player1[80], Player2[80]; //Name player
const int rows = 9; // Number of rows for 1 level
const int elements = 9; // Numbers elements for 1 level
int maxships = 9; // Number of maxships for 1 level
int matrix[rows][elements];


void make_move(int num) // выполнение хода
{
	if (num == 1)
	{
		cout << Player1;
	}
	else
	{
		cout << Player2;
	}
	int cell;
	cout << "Enter cell: "; cin >> cell;
    while (;)
    {

    }
}

bool proverka_x(int** pole, int rows, int elements, int dlina_korablya) // проверка заполнения поля по X
{
    bool provX = true;
    for (size_t i = 0; i < dlina_korablya; i++)
    {
        if (sosed(pole, rows + i, elements) == 0 || rows + i >= SIZE)
        {
            provX = false;
        }
    }
    return provX;
}

bool porverka_y(int** pole, int rows, int elements, int dlina_korablya) //проверка заполнения поля по Y
{
    bool provY = true;
    for (size_t i = 0; i < dlina_korablya; i++)
    {
        if (sosed(pole, rows, elements + i) == 0 || elements + i >= SIZE)
        {
            provY = false;
        }
    }
    return provY;
}

bool sosed(int** pole, int rows, int elements) //проверка на наличие соседнего корабля
{
    bool netu = true;
    for (int i = rows - 1; i <= rows + 1 ; i++)
    {
        for (int j = elements - 1; j <= elements + 1; j++)
        {
            if (i >= 0 && i < SIZE && j >= 0 && j < SIZE)
            {
                if (pole[i][j] == 1)
                {
                    netu = false;
                }
            }
        }
    }
    return netu;
}

void fight(int num, int x, int y)
{
    cout << "Your choose:\n"; cin >> x; cin >> y;
    if (matrix[x][y] == '#')
    {
        matrix[x][y] = 'X';
    }
    else
    {
        matrix[x][y] = '0';
    }
}