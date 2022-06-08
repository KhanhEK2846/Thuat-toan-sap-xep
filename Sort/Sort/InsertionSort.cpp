#include "InsertionSort.h"

void InsertionSort(int* a, int n)
{
	int j;
	for (int i = 1; i <= n - 1; ++i)
	{
		int x = a[i];
		for (j = i - 1; j >= 0 && a[j] > x; j--)
			a[j + 1] = a[j];
		a[j + 1] = x;
	}
}
