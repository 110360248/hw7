#include<stdio.h>
#include<stdlib.h>

int main() {
	FILE* fptr;
	char a;
	int c=0;
	fopen_s(&fptr,"D://課程//程式語言//HW//ch7//p14//welcome.txt", "r");
	if (fptr != NULL) {
		while ((a = getc(fptr)) != EOF)
		{
			printf("%c", a);
			c++;
		}
		fclose(fptr);
		printf("\n總共有%d個字元\n", c);
	}
	else printf("檔案開啟失敗!\n");
	
	return 0;
}