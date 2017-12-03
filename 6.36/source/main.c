#include<stdio.h>
#include<stdlib.h>

void stringReverse(int x);

char data[] = { "Hellow World" };
int size = 0;

int main(void)
{
	size = sizeof(data)-1;  /* 計算陣列的長度 */

	printf("Origin : \n");
	for (int i = 0; i < size; i++){
		printf("%c", data[i]);
	}
	printf("\n\n");

	printf("Reverse : \n");
	stringReverse(0);
	printf("\n\n");

	system("pause");
	return 0;
}

void stringReverse(int x)
{
	if (x < size)
	{
		stringReverse(x + 1);
		printf("%c", data[x]);
	}
}
