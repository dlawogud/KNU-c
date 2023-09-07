#include <stdio.h>
int main(void)
{
	int a;
	int b;
	int c;
	int n;

	scanf_s("%d", &n);


	
	for (a = 0; a < n; a++)
	{
		for (b = a; b <= n - 1; b++) {
			printf(" ");
		}
		for (c = 0; c <= (a * 2); c++) {
			printf("*");
		}
		printf("\n");

	}

	return 0;
}