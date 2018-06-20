#include <stdio.h>
#include <stdlib.h>
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