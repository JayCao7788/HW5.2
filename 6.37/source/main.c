#include<stdio.h>
#include<stdlib.h>

int recursiveMaximum(int Array[],int x);

int main(void)
{
	int data[1000] = { 0 };
	int numofarray;
	int a;

	printf("How many number of value in the array : ");
	scanf("%d", &numofarray);
	printf("Please enter the vaule of array : ");

	
	for (int i = 0; i < numofarray; i++){
		scanf("%d", &data[i]);
	}

/*	for (int i = 0; i < numofarray; i++){
		printf("%d\n", data[i]);
	}
	*/
	recursiveMaximum(data, numofarray);

	printf("\nThe largest number is : %d\n", recursiveMaximum(data, numofarray));
	

	system("pause");
	return 0;
}

int recursiveMaximum(int Array[], int x){

	int maximum;

	/*
	��for�j�鰵
	maximum = Array[0];

	if (x == 1) { return Array[0]; }
	else{
	for (int i = 0; i < x; i++){
	if (Array[i]>maximum){ maximum = Array[i]; }
	}
	return maximum;
	}
	*/

	/*
	���j : 

	ex : Array[5]={2, 5, 7, 3, 4}
		
		 maximum = recursiveMaximum(Array, x - 1);
		 �]�����_�I�s recursiveMaximum �ҥH maximum �N�|�O�̸̭����� 
		 �]�N�O 2

			2	5	7	3	4 	
		maximum					<- x-1 �q�̥~��������
		
		maximum = 2		<	x - 1 = 4   =>  return x - 1 = 4    (maximum = 4)
		maximum = 4		<	x - 1 = 3   =>  return maximum = 4  (maximum = 4)
		maximum = 4		<	x - 1 = 7   =>  return x - 1 = 7	(maximum = 7)
		maximum = 7		<	x - 1 = 5   =>  return maximum = 7	(maximum = 7)
		maximum = 7		<	x - 1 = 2   =>  return maximum = 7	(maximum = 7)
	
		return 7
	*/
	if (x == 1) { return Array[0]; }
	else{
		maximum = recursiveMaximum(Array, x - 1);
		if (Array[x - 1] > maximum){
			return Array[x - 1];
		}
		else{
			return maximum;
		}
	}
}