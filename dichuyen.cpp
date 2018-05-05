#include "dichuyen.h" 
#include <stdio.h> 
#include <conio.h> 
#include "console.h" 
#include "danh.h"
#include "banco.h" 
#include "dieukien.h"


char input()
{
	int nhap;
	while (1)
	{
		if (_kbhit())
		{
			nhap = _getch();
			if (nhap == 224)
			{
				nhap = _getch();
				switch (nhap)
				{
				case 72: return 'L'; break;
				case 80: return 'X'; break;
				case 75: return 'T'; break;
				case 77: return 'P'; break;
				}
			}
			if (nhap == 32) return 'D';
			if (nhap == 8) return 'Q';
			if (nhap == 79) return 'T';
		}
	}
}

void sangphai(int i, int &j, int n) 
{
	if (j == 4 * n-2)
		j = 2;
	else j += 4; 
}
void sangtrai(int i, int &j, int n) 
{
	if (j == 2)
		j = 4 * n - 2; 
	else j -= 4; 
}
void dilen(int &i, int j,  int n) 
{
	if (i == 2)
		i = 2 * n - 1; 
	else i -= 2; 
}
void dixuong(int &i, int j, int n) 
{
	if (i == 2 * n - 1) {
		i = 1; 
	}
	else i += 2; 
}

void dichuyen(int n, char banco[100][100], char p1[20], char p2[20]) 
{ 
	int k=0,kt=0;
	int i = 1, j = 2;
	char nhap; 
	gotoXY(j, i);
	while (1)
	{
		inluot(k, p1, p2, n);
		gotoXY(j, i);
		nhap = input();
		switch (nhap) 
		{
			case 'L': dilen(i, j, n); break;
			case 'X':dixuong(i, j, n); break;
			case 'T': sangtrai(i, j, n); break;
			case 'P': sangphai(i, j, n); break;
			case 'D': if (danh(banco, k, i, j, n) == 1) kt = 1; break;
		}
		gotoXY(j, i);
		velai(i, j, n, banco);

		TextColor(7);
		if (kt == 1)
			break;
	}
}

void velai(int x, int y, int n, char a[100][100]) 
{
	gotoXY(0, 0);
	for (int i = 0; i < 2*n + 1 ; i++) 
	{
		for (int j = 0; j < 4 * n + 1; j++)
		{
			if (i % 2 == 0 && i != 0 && i != 2 * n) 
			{
				printf("%c", a[i][j]);
			}
		}
		printf("\n");
	}
	gotoXY(y, x);
}

