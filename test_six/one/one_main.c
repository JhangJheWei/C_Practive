#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Declare_program.h"
int main(int argc, char const *argv[])
{
	int number_value,a;
	srand(time(NULL));

	printf("請輸入一個整數\n");
	scanf("%d",&number_value);
	printf("square_value:%d\n",square_value(number_value));
	a = randon();
	printf("randon:%d\n",a);
	return 0;
}