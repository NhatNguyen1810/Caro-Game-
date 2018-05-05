#include <stdio.h> 
#include "console.h" 
#include "dichuyen.h" 
#include "danh.h" 
#include "dangnhap.h" 
#include "banco.h" 
#include "dieukien.h"

int main()
{
	int n, ff; 
	char banco[100][100];
	char c[20], d[20]; 
	dangnhap(n); 
	clrscr(); 
	TextColor(10); 
	nhapthongtin(c, d, n ); 
	vebanco(banco,n);
	clrscr();
	gotoXY(0, 0);
	
	for (int i = 0; i < 2 * n + 1; i++)
	{ 
		
		for (int j = 0; j < 4 * n + 1; j++)
			printf("%c", banco[i][j]);
		printf("\n");
	}

	TextColor(9); 
	gotoXY(4 * n + 5, 1); 
	printf("Player 1: ");
	gotoXY(4 * n + 15, 1);
	printf("%s", c); 

	gotoXY(4 * n + 5, 3); 
	printf("Player 2: ");
	gotoXY(4 * n + 15, 3);
	printf("%s", d); 

	dichuyen(n,banco,c,d);
	gotoXY(4 * n + 25, 10); 

	TextColor(13);
	printf("Ban co muon choi lai(1.Co/2.Khong): ");
	scanf("%d", &ff);
	if (ff == 1)
	{
		clrscr();
		return main();
	}
	return 0; 
}