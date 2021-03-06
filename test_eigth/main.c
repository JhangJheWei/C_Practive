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
	printf("old_mask is %#o\n", old_mask);//設定文件權限，系統建立新檔案之預設權限0666=>再減掉系統預設權限遮罩為0222=>等於新增檔案的存取權限
	printf("new_mask is %#o\n", new_mask);
	system("touch file1");//建立新檔案，若有檔案則更改檔案時間

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