#include<stdio.h>
#include<stdlib.h>
#define max 80;
int main() {
	FILE* fptr;
	char str[80] = "";
	int b;
	fopen_s(&fptr, "D:/課程/程式語言/HW/ch7/p17//welcome.txt", "r");
	while (!feof(fptr))
	{
		b = fread(str, sizeof(char), 79, fptr);
		str[b] = '\0';
		printf("%s\n", str);
	}
	fclose(fptr);
}