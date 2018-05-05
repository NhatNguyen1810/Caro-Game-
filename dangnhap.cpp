#include "dangnhap.h" 
#include <stdio.h> 
#include "console.h"
#include "banco.h" 

int dangnhap(int &n) 
{
	printf("\n\n\t\t\t\t\t\t CARO GAME\n ");
	printf("\t\t\t\t     ---- Input The Size Of The Board ---- \n");
	scanf("%d", &n); 
	if (n < 5 || n > 25)
	{
		TextColor(7);
		printf("\n\n\n\t\t\t Hien tai chua ho tro caro co nho hon 5x5 va lon hon 25x25");
		Sleep(2000);
		clrscr();
		return dangnhap(n);
	}
	return 0;
}

void nhapthongtin(char a[20], char b[20], int n ) 
{
	printf("\t\t\t\t\t\t\t\t\t Name of player 1 \n"); 
	gotoXY(4 * n + 1, 1);
	gets_s(a,20); 	
	gets_s(a, 20); 
	printf("\t\t\t\t\t\t\t\t\t Name of player 2\n"); 
	gotoXY(4 * n + 1, 3);
	gets_s(b,20); 

}

