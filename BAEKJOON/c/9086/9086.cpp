#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void strCalc(char* str, int sps)
{
	char first = str[0];
	char last = str[strlen(str)-1];
	str[0] = first;
	str[1] = last;
	str[2] = '\0';
}

int main(void)
{
	char str[1000][1000] = { "", };
	int num = 0;

	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf("%s", str[i]);
		strCalc(str[i], i);
	}
	for (int i = 0; i < num; i++)
		printf("%s\n", str[i]);

	return (0);
}