#include "dieukien.h"
#include "console.h"
//mang hai chieu
int DK_O_ChienThang(char a[100][100], int m, int n)
{
	int m1 = m; 
	int n1 = n;
	//dat them mot bien chay de no chay va giu nguyen bien ban dau de xet theo hang dong cot
	//xet tai vi tri dau tien neu bang O thi xet them phia sau no co phai co them 4 O nua va co bi chan hay khong
	//va xet them phia truoc co 4 O nua hay khong
	//neu co thi ket luan O thang va ket thuc tro choi
	//Theo hang doc
	if ((a[m1][n] == 'O') && (a[m1 + 2][n] == 'O') && (a[m1 + 4][n] == 'O') && (a[m1 + 6][n] == 'O') && (a[m1 + 8][n] == 'O') && ((a[m1 + 10][n] != 'X') || (a[m1 - 2][n] != 'X'))) 
		return 1; 
	else if ((a[m1][n] == 'O') && (a[m1 - 2][n] == 'O') && (a[m1 - 4][n] == 'O') && (a[m1 - 6][n] == 'O') && (a[m1 - 8][n] == 'O') && ((a[m1 - 10][n] != 'X') || (a[m1 + 2][n] != 'X'))) 
		return 1;
	

	//Theo ngang
	if ((a[m1][n1] == 'O') && (a[m1][n1 + 4] == 'O') && (a[m1][n1 + 8] == 'O') && (a[m1][n1 + 12] == 'O') && (a[m1][n1 + 16] == 'O') && ((a[m1][n1 + 20] != 'X') || (a[m1][n1 - 4] != 'X'))) 
		return 1; else
	if ((a[m1][n1] == 'O') && (a[m1][n1 - 4] == 'O') && (a[m1][n1 - 8] == 'O') && (a[m1][n1 - 12] == 'O') && (a[m1][n1 - 16] == 'O') && ((a[m1][n1 - 20] != 'X') || (a[m1][n1 + 4] != 'X')))
		return 1;

	//Theo duong cheo phu (do cai nay la ma tran vuong)
	if ((a[m1][n1] == 'O') && (a[m1 + 2][n1 + 4] == 'O') && (a[m1 + 4][n1 + 8] == 'O') && (a[m1 + 6][n1 + 12] == 'O') && (a[m1 + 8][n1 + 16] == 'O') && ((a[m1 + 10][n1 + 20] != 'X') || (a[m1 - 2][n1 - 4] != 'X'))) 
		return 1; 
	else if ((a[m1][n1] == 'O') && (a[m1 - 2][n1 - 4] == 'O') && (a[m1 - 4][n1 - 8] == 'O') && (a[m1 - 6][n1 - 12] == 'O') && (a[m1 - 8][n1 - 16] == 'O') && ((a[m1 - 10][n1 - 20] != 'X') || (a[m1 + 2][n1 + 4] != 'X'))) 
		return 1;

	if ((a[m1][n1]) == 'O' && (a[m1 + 2][n1 - 4]) == 'O' && (a[m1 + 4][n1 - 8]) == 'O' && (a[m1 + 6][n1 -12]) == 'O' && (a[m1 + 8][n1 - 16] == 'O') && ((a[m1 + 10][n1 - 20] != 'X') || (a[m1 - 2][n1 + 4] != 'X'))) 
		return 1; 
	else if ((a[m1][n1]) == 'O' && (a[m1 - 2][n1 + 4]) == 'O' && (a[m1 - 4][n1 + 8]) == 'O' && (a[m1 - 6][n1 + 12]) == 'O' && (a[m1 - 8][n1 + 16] == 'O') && ((a[m1 - 10][n1 + 20] != 'X') || (a[m1 + 2][n1 - 4] != 'X'))) 
		return 1;
	return 0;
}

int DK_X_ChienThang(char a[100][100], int m, int n)
{  
	//Theo hang ngang
	int m1 = m; 
	int n1 = n;

	if ((a[m1][n] == 'X') && (a[m1 + 2][n] == 'X') && (a[m1 + 4][n] == 'X') && (a[m1 + 6][n] == 'X') && (a[m1 + 8][n] == 'X') && ((a[m1 + 10][n] != 'O') || (a[m1 - 2][n] != 'O'))) 
		return 1; 
	else if ((a[m1][n] == 'X') && (a[m1 - 2][n] == 'X') && (a[m1 - 4][n] == 'X') && (a[m1 - 6][n] == 'X') && (a[m1 - 8][n] == 'X') && ((a[m1 - 10][n] != 'O') || (a[m1 + 2][n] != 'O'))) 
		return 1;

	//Theo hang doc
	if ((a[m][n1] == 'X') && (a[m][n1 + 4] == 'X') && (a[m][n1 + 8] == 'X') && (a[m][n1 + 12] == 'X') && (a[m][n1 + 16] == 'X') && ((a[m][n1 + 20] != 'O') || (a[m][n1 - 4] != 'O'))) 
		return 1; 
	else if ((a[m][n1] == 'X') && (a[m][n1 - 4] == 'X') && (a[m][n1 - 8] == 'X') && (a[m][n1 - 12] == 'X') && (a[m][n1 - 16] == 'X') && ((a[m][n1 - 20] != 'O') || (a[m][n1 + 4] != 'O'))) 
		return 1;
	//Theo duong cheo chinh
	
	if ((a[m1][n1] == 'X') && (a[m1 + 2][n1 + 4] == 'X') && (a[m1 + 4][n1 + 8] == 'X') && (a[m1 + 6][n1 + 12] == 'X') && (a[m1 + 8][n1 + 16] == 'X') && ((a[m1 + 10][n1 + 20] != 'O') || (a[m1 - 2][n1 - 4] != 'O'))) 
		return 1; 
	else if ((a[m1][n1] == 'X') && (a[m1 - 2][n1 - 4] == 'X') && (a[m1 - 4][n1 - 8] == 'X') && (a[m1 - 6][n1 - 12] == 'X') && (a[m1 - 8][n1 - 16] == 'X') && ((a[m1 - 10][n1 - 20] != 'O') || (a[n1 + 2][m1 + 4] != 'O'))) 
		return 1;
	
	//Theo duong cheo phu
	if ((a[m1][n1]) == 'X' && (a[m1 + 2][n1 - 4]) == 'X' && (a[m1 + 4][n1 - 8]) == 'X' && (a[m1 + 6][n1 - 12]) == 'X' && (a[m1 + 8][n1 - 16] == 'X') && ((a[m1 + 10][n1 - 20] != 'O') || (a[m1 + 2][n1 + 4] != 'O'))) 
		return 1; 
	else if ((a[m1][n1]) == 'X' && (a[m1 - 2][n1 + 4]) == 'X' && (a[m1 - 4][n1 + 8]) == 'X' && (a[m1 - 6][n1 + 12]) == 'X' && (a[m1 - 8][n1 + 16] == 'X') && ((a[m1 - 10][n1 + 20] != 'O') || (a[m1 - 2][n1 - 4] != 'O'))) 
		return 1;
	return 0;
}