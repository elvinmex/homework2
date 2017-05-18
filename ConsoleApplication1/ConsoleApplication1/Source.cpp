#include <iostream>
#include <conio.h>
#include <time.h>
using namespace std;

int k, u;

void naxojdeniye_nulya(int arr[4][4]);
void main()
{
	const int z = 4, y = 4;
	int cet;
	srand(time(0));
	int arr_norm[z][y] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,0 };
	int arr[z][y] = { 17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17 };
	for (int a = 0; a < z; a++)
	{
		for (int b = 0; b < y; b++)
		{
			while (true)
			{
				arr[a][b] = rand() % 17;
				cet = 0;
				for (int i = 0; i < z; i++)
				{
					for (int j = 0; j < y; j++)
					{
						if (arr[a][b] == arr[i][j] && a != i && b != j)
						{
							cet++;
						}
					}
				}
				if (cet == 0)
				{
					break;
				}
			}
			cout << arr[a][b] << " ";
		}
	}
	return;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << "\n\n\n" << endl;
	}
	naxojdeniye_nulya(arr);
	while (true)
	{
		int key = getch();

		//Initializaciya klavish

		//NALEVO
		if (key == 75 && arr[k][u] != (arr[0][0] && arr[1][0] && arr[2][0] && arr[3][0]))
		{
			arr[k][u] = arr[k][u - 1];
			arr[k][u - 1] = 0;
			u--;
		}
		//NAPRAVO
		else if (key == 77 && arr[k][u] != (arr[0][3] && arr[1][3] && arr[2][3] && arr[3][3]))
		{
			arr[k][u] = arr[k][u + 1];
			arr[k][u + 1] = 0;
			u++;

		}
		//VVERX
		else if (key == 72 && arr[k][u] != (arr[0][0] && arr[0][1] && arr[0][2] && arr[0][3]))
		{
			arr[k][u] = arr[k - 1][u];
			arr[k - 1][u] = 0;
			k--;
		}
		//VNIZ
		else if (key == 80 && arr[k][u] != (arr[3][0] && arr[3][1] && arr[3][2] && arr[3][3]))
		{
			arr[k][u] = arr[k + 1][u];
			arr[k + 1][u] = 0;
			k++;
		}
		////////////////////
		////////////////////

		system("cls");

		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				cout << arr[i][j] << "\t";
			}
			cout << "\n\n\n" << endl;
		}
	}

}


void naxojdeniye_nulya(int arr[4][4])
{
	//Naxojdeniye nulya
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] == 0)
			{
				k = i;
				u = j;
			}
		}
	}
	///////////////////
	///////////////////
}


