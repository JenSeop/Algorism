#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str[100] = "";
	int len = 0;

	scanf("%s", str);
	while (str[len])
		len++;
	printf("%d", len);

	return (0);
}