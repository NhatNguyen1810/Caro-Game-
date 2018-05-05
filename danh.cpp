#include "danh.h" 
#include "dichuyen.h" 
#include "dangnhap.h"
#include "console.h"
#include "banco.h" 
#include "dieukien.h"

int danh(char a[100][100], int &k, int i, int j, int n)
{
	int ff;
	if (k % 2 == 0)
	{
		if (a[i][j] != 'O' && a[i][j] != 'X')
		{
			a[i][j] = 'X';
			TextColor(11);
			printf("%c", a[i][j]);
			k++;
		}
	}
	else if (k % 2 != 0)
	{
		if (a[i][j] != 'O' && a[i][j] != 'X')
		{
			a[i][j] = 'O';
			TextColor(13);
			printf("%c", a[i][j]);
			k++;
		}
	}
	//Thuc thi dieu kien thang
	TextColor(12);
	if ((DK_O_ChienThang(a, i, j) == 1))
	{
		gotoXY(4 * n + 25, 15);
		TextColor(11); 
		printf("O chien thang\n"); 
		return 1;
	}
	else
		if ((DK_X_ChienThang(a, i, j) == 1))
		{
			gotoXY(4 * n + 25, 15);
			TextColor(12); 
			printf("X Chien Thang\n"); 
			return 1;	
		}
		else if (k == n*n)
		{
			TextColor(12);
			gotoXY(4 * n + 30, 15);
			printf("Hoa");
			return 1;
		}
	TextColor(7);
	return 0;
}
void inluot(int k, char p1[20], char p2[20], int n)
{
	gotoXY(4 * n + 5, 5);
	TextColor(10);
	if (k % 2 == 0) 
		printf("Luot di cua: %s", p1);
	else 
		printf("Luot di cua: %s", p2);
	printf("\t\t\t\t\tLuot thu: %d", k);
	
}

