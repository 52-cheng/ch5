#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int dise1;
	int dise2;
	int times[12] = { 0 };
	srand(time(NULL));


	for (int i = 0; i < 36000; i++)
	{
		dise1 = 1 + rand() % 6;
		dise2 = 1 + rand() % 6;
		int sum = dise1 + dise2;

		if (sum == 2)
		{
			times[0]++;
		}
		if (sum == 3)
		{
			times[1]++;
		}
		if (sum == 4)
		{
			times[2]++;
		}
		if (sum == 5)
		{
			times[3]++;
		}
		if (sum == 6)
		{
			times[4]++;
		}
		if (sum == 7)
		{
			times[5]++;
		}
		if (sum == 8)
		{
			times[6]++;
		}
		if (sum == 9)
		{
			times[7]++;
		}
		if (sum == 10)
		{
			times[8]++;
		}
		if (sum == 11)
		{
			times[9]++;
		}
		if (sum == 12)
		{
			times[10]++;
		}
	}
	for (int j = 2; j <= 12; j++)
	{
		printf("The sum of two dice is %d total of %d times\n\n", j, times[j - 2]);
	}
}