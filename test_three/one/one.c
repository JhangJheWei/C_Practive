#include <stdlib.h>
#include <stdio.h>
int min(int number1,int number2);
int main(int argc, char const *argv[])
{
	int number1,number2,number3;
	printf("請輸入第1個整數：\n");
	scanf("%d",&number1);
	printf("請輸入第2個整數：\n");
	scanf("%d",&number2);
	number3 = min(number1,number2);
	printf("最小值：%d\n",number3);
	return 0;
}
int min(int number1,int number2){
	if(number1 > number2){
		return number2;
	}else{
		return number1;
	}
}