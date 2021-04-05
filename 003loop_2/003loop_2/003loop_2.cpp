#include <stdio.h>

int main(void)
{
	/*
		while문을 이용한 출력
		2-1

		*
		***
		*****
		*******

		*/
	printf("\n[문제2-1]\n");

	int starloop1 = 0;

	while (starloop1 < 7)
	{
		int b = 0;
		while (b <= starloop1)
		{
			printf("*");
			b++;
		}
		printf("\n");
		starloop1 += 2;
	}

	return 0;
	fgetc(stdin);
}