#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE *fp;
	char ch;
	//判断文件是否能打开
	if ((fp = fopen("D:\\demo.txt", "wt+" )) == NULL)
	{
		printf("can not open the file or the file is not exit \n");
		getchar();
		exit(1);
	}
	printf("please enter a string :\n");
	while ((ch = getchar()) != '\n')
	{
		fputc(ch,fp);
	}
	fclose(fp);
	system("pause");
	return 0;

}