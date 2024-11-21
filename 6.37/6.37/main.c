#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int recursiveMaximum(int b[], int size);

int a[SIZE];
int main()
{
	int size;
	printf("Enter array size:");
	scanf_s("%d", &size);

	printf("The array value is:");
	for (int i = 0; i < size; i++)
	{
		scanf_s("%d", &a[i]);
	}

	int max = recursiveMaximum(a, size);
	printf("The maximum is :%d", max);
}
int recursiveMaximum(int b[], int size)
{
	{
		if (size == 1) {
			return b[0];
		}
		int maximum = recursiveMaximum(b, size - 1);
		return (b[size - 1] > maximum) ? b[size - 1] : maximum;
	}
}