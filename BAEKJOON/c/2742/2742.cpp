#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int range = 0;
	
	scanf("%d", &range);

	for (int i = 1; i <= range; i++)
		printf("%d\n", i);

	return (0);
}