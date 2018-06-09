#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int square_value(int number){
	number = number * number;
	return number;
}
int randon(){
	int num;
	num = (rand()%6)+1;
	return num;
}