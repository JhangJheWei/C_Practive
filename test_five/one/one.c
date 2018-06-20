#include <studio.h>
#include <stdlib.h>
void char_function_one();
void char_function_two();
int main(int argc, char const *argv[])
{
	char_function_one();
	char_function_two();
	return 0;
}
void char_function_one(){
	char *first = "123";
	printf("%s\n",first);
}
void char_function_two(){
	char *second = "456";
	printf("%s\n",second);
}
