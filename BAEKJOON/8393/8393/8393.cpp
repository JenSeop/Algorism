#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int range = 0;
	int summary = 0;
	int index = -1;

	scanf("%d", &range);
	while (index != range)
		summary = summary + (++index);
	printf("%d", summary);

	return (0);
}