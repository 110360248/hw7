#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main() {
	FILE* fptr = {};
	char str[80],ch;
	int i = 0;
	fopen_s(&fptr, "D:/課程/程式語言/HW/ch7/p16//output.txt", "a");
	printf("輸入字串，按enter結束：\n");
	while ((ch = getche()) != 13 && i < 80) str[i++] = ch;
	putc('\n', fptr);
	fwrite(str, sizeof(char), i, fptr);
	fclose(fptr);
	printf("\n檔案附加完成");
	
}