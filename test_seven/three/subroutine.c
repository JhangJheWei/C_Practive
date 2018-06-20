#include <stdio.h>
#include <stdlib.h>
int num(int score[]){
	int number = 0,i;
	for (i = 0; i <= 4; i++)
	{
		number = score[i] + number;
	}
	return number;
}
int average(int *score){
	int number = 0,i;
	for (i = 0; i <= 4 ; i++)
	{
		number = number + *(score+i);
	}
	return number/5;
}