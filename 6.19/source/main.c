#include<stdio.h>
#include<stdlib.h>
#include <time.h>

#define size 11

int main(void)
{
	int face_1,face_2;
	int total;
	float x=0;
	unsigned int roll;
	unsigned int freq[size] = { 0 };

	srand(time(NULL));

	for (roll = 1; roll <= 36000; roll++){
		face_1 = rand() % 6 + 1;
		face_2 = rand() % 6 + 1;
		total = face_1 + face_2;
		++freq[total-2];
	}

	printf("%s%17s\n", "  Sum", "Frequency");


	for (int i = 2; i <= 12;i++)
	{
		printf("%4d%17d\n", i, freq[i-2]);
	}

	x = 360000 / (float)freq[5];
	printf("總合為7的機率為 : %.2f %c\n", x,'%');

	system("pause");
	return 0;
}
