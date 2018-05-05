#include "banco.h" 
#include "console.h" 
#include "dangnhap.h" 
#include "danh.h" 
#include "dichuyen.h" 

void vebanco(char a[][100], int n)
{
	int i, j;
	for (i = 0; i < 2 * n + 1; i++)
	{
		for (j = 0; j < 4 * n + 1; j++)
		{
			if (i % 2 == 0)
			{
				if (j % 4 != 0) a[i][j] = 196;
				else if (j % 4 == 0) a[i][j] = 194;
			}
			else if (i % 2 != 0)
			{
				if (j % 4 == 0) a[i][j] = 179;
				else if (j % 4 != 0) a[i][j] = 0;
			}
		}
	}

	for (i = 0; i < 2 * n + 1; i++) 
	{
		for ( j = 0; j < 4 * n + 1; j++) 
		{
			if (i % 2 == 0)
			{
				if (j % 4 == 0 && j != 0 && j != 4 * n)
					a[i][j] = 197;
				else if (j == 0)
					a[i][j] = 195;
				else if (j == 4 * n) a[i][j] = 180;
			}
			if (i == 2 * n) 
			{
				if (j % 4 == 0 && j != 0 && j != 4 * n) 
				{
					a[i][j] = 193;
				}
				if (j % 4 != 0) 
				{
					a[i][j] = 196;
				}
			}
			if (i == 0) 
			{
				if (j != 0 && j != 4 * n && j % 4 == 0) 
				{
					a[i][j] = 194;
				}
			}
		}
	}
	a[0][0] = 218; a[0][4 * n] = 191;
	a[2 * n][0] = 192; a[2 * n][4 * n] = 217;
}