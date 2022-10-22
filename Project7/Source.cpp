
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <conio.h>
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
//vo3mojno, i vero9tnost velika, 4to kod vam nyjno gl9nyt)))) 
// Da i Name Peremenix skoree vsego otli4aets9 ot normalnoi :0 
// 
// 9 sdelal yso 4to smog :( 
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
using namespace std;

bool Set_Ships(int martrix1, int shipSize, int rows, int elements)
{
	int temp_rows = rows;
	int temp_elements = elements;
	bool SetNormal = 1;

	for (int i = 0; i < shipSize; i++) //  Proverka, nety li pobli3osti drygix korablei
	{
		if (rows < 0 || elements < 0 || rows >= martrix1)
		{
			SetNormal = 0;
			break;
		}


	}
}
void Show_Ship(int rows, int elements, int shipSize)
{


	for (int i = 0; i < shipSize; i++)
	{

		cout << "1";
	}
};


bool ship_border(int rows, int elements, int shipSize) //  Funcia proverki (Ne 3ale3 korabl 3a granicy )
{

}


int main()
{
	const int maxships = 9;
	int rows = 9;
	int elements = 9;
	char martrix1;
	int shipSize = 1;
	int button;

	int temp_rows = rows;
	int temp_elements = elements;


	while (true)
	{

		Show_Ship(rows, elements, shipSize);
		Set_Ships(martrix1, rows, elements, shipSize);
		button = _getch();

		switch (button) // W A S D 
		{
		case 100: // Right
			rows++;
			break;
		case 115: // down 
			elements++;
			break;
		case 97:// Left
			rows--;
			break;
		case 119: // up
			elements--;
			break;
		case 13:  //Enter for Instal Ship in Map;
			if (Set_Ships(martrix1, rows, elements, shipSize))
			{
				rows = 0;
				elements = 0;
			}
		}

		if (!ship_border(rows, elements, shipSize)) // Funcia proverki (Ne 3ale3 korabl 3a granicy )
		{

			int temp_rows = rows;
			int temp_elements = elements;
		}
		system("cls");
	}
}

