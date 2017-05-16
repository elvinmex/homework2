#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
	int i = 2, j = 2;
	int arr[4][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,0 };
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << "\n\n\n" << endl;
	}
	int key = getch();
	if (key == 224)
		{
			arr[i][j] = arr[i][j - 1];
			arr[i][j - 1] = 0;
		}
		if (key == 77)
		{
			arr[i][j] = arr[i + 1][j];
			arr[i + 1][j] = 0;
		}
		if (key == 72)
			{
				arr[i][j] = arr[i - 1][j];
				arr[i - 1][j] = 0;
			}
		if (key == 80)
			{
				arr[i][j] = arr[i][j + 1];
				arr[i][j + 1] = 0;
			}
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				cout << arr[i][j] << "\t";
			}
			cout << "\n\n\n" << endl;
		}
	//while (true)
	//{
	//	//risovaniye polya

	//	system("cls");

	//	if (key == 224)
	//		{
	//			arr[i][j] = arr[i][j - 1];
	//			arr[i][j - 1] = 0;
	//		}
	//		if (key == 77)
	//		{
	//			arr[i][j] = arr[i + 1][j];
	//			arr[i + 1][j] = 0;
	//		}
	//		if (key == 72)
	//			{
	//				arr[i][j] = arr[i - 1][j];
	//				arr[i - 1][j] = 0;
	//			}
	//		if (key == 80)
	//			{
	//				arr[i][j] = arr[i][j + 1];
	//				arr[i][j + 1] = 0;
	//			}

	//	system("cls");
	//}
	//if (key == 224)
	//{
	//	arr[i][j] = arr[i][j - 1];
	//	arr[i][j - 1] = 0;
	//}
	//if (key == 77)
	//{
	//	arr[i][j] = arr[i+1][j];
	//	arr[i+1][j] = 0;
	//}
	//if (key == 72)
	//{
	//	arr[i][j] = arr[i-1][j];
	//	arr[i-1][j] = 0;
	//}
	//if (key == 80)
	//{
	//	arr[i][j] = arr[i][j + 1];
	//	arr[i][j + 1] = 0;
	//}
	//224 verx
	//77 napravo
	//72 nalevo
	//80 vniz
	
}


