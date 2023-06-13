#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int count = 0;
	int score[1000] = { 0, };
	float avg = 0;

	while (1)
	{
		scanf("%d", &count);
		if (count > 0 && count <= 1000)
			break;
	}
	for (int i = 0; i < count; i++)
		scanf("%d", &score[i]);

	int i = -1;
	while (score[++i])
		avg += score[i];
	printf("%d\n", avg);

	printf("%f\n", (float)(avg / (i+1)));


	return (0);
}