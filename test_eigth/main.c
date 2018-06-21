#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	mode_t new_mask,old_mask;//mode_t=>分配檔案權限
	new_mask = 0222;
	old_mask = umask(new_mask);
	printf("file1...\n");
	printf("old_mask is %#o\n", old_mask);//設定文件權限
	printf("new_mask is %#o\n", new_mask);
	system("touch file1");//建立新檔案

	new_mask = 0002;
	old_mask = umask(new_mask);
	printf("file2...\n");
	printf("old_mask is %#o\n", old_mask);
	printf("new_mask is %#o\n", new_mask);
	system("touch file2");

	new_mask = 0022;
	old_mask = umask(new_mask);
	printf("file3...\n");
	printf("old_mask is %#o\n", old_mask);
	printf("new_mask is %#o\n", new_mask);
	system("touch file3");
	return 0;
}