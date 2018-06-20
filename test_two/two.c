#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int grade;
	printf("請輸入成績：\n");
	scanf("%d",&grade);
	if (grade >= 90){
		printf("甲\n");
	}else if (grade >= 80){
		printf("乙\n");
	}else if (grade >= 70){
		printf("丙\n");
	}else if (grade >= 60){
		printf("丁\n");
	}else{
		printf("不及格\n");
	}
	return 0;
}