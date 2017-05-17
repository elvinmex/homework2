//#include <iostream>
//#include <conio.h>
//using namespace std;
//int k, u;
//
//void naxojdeniye_nulya(int arr[4][4]);
//void main()
//{
//	const int z = 4, y = 4;
//	int arr[z][y] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,0 };
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout << arr[i][j] << "\t";
//		}
//		cout << "\n\n\n" << endl;
//	}
//	naxojdeniye_nulya(arr);
//	while (true)
//	{
//		int key = getch();
//
//		//Initializaciya klavish
//		if (key == 75)
//		{
//			arr[k][u] = arr[k][u - 1];
//			arr[k][u - 1] = 0;
//			u--;
//		}
//		else if (key == 77)
//		{
//			arr[k][u] = arr[k][u + 1];
//			arr[k][u + 1] = 0;
//			u++;
//
//		}
//		else if (key == 72)
//		{
//			arr[k][u] = arr[k - 1][u];
//			arr[k - 1][u] = 0;
//			k--;
//		}
//		else if (key == 80)
//		{
//			arr[k][u] = arr[k + 1][u];
//			arr[k + 1][u] = 0;
//			k++;
//		}
//		////////////////////
//		////////////////////
//
//		system("cls");
//
//		for (int i = 0; i < 4; i++)
//		{
//			for (int j = 0; j < 4; j++)
//			{
//				cout << arr[i][j] << "\t";
//			}
//			cout << "\n\n\n" << endl;
//		}
//	}
//
//}
//
//
//void naxojdeniye_nulya(int arr[4][4])
//{
//	//Naxojdeniye nulya
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			if (arr[i][j] == 0)
//			{
//				k = i;
//				u = j;
//			}
//		}
//	}
//	///////////////////
//	///////////////////
//}
//
//
//

#include <string>
#include <iostream>
#include <conio.h>
using namespace std;
void morze()
{
	int cet = 0;
	int key = getch();
	const int size = 28;
	string arr_morze[size] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." };
	int arr_norm[size] = {};
	for (int i = 0; i < size; i++)
	{
		arr_norm[i] = cet;
		cet++;
	}
	while (true)
	{
		for (int i = 0; i < size; i++)
		{
			if (key == arr_norm[i])
			{
				cout << arr_morze[i] << endl;
			}
		}
	}
}

void main()
{
	void morze();
}