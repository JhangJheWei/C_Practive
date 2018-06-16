#include <stdio.h>
#include <stdlib.h>
int num(int score[]);
int average(int score[]);

int main(int argc, char const *argv[])
{
	int score[5],i,num_value,average_value;
	printf("請輸入5個成績：\n");
	for (i = 0; i <= 4; i++)
	{
		scanf("%d",&score[i]);
	}
	num_value = num(score);
	printf("%d\n", num_value);
	average_value = average(score);
	printf("%d\n", average_value);
	return 0;
}
int num(int score[]){
	int number;
	number = score[0] + score[1] + score[2] + score[3] + score[4];
	return number;
}
int average(int score[]){
	int number;
	number = (score[0] + score[1] + score[2] + score[3] + score[4]) / 5;
	return number;
}