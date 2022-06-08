#include "SelectionSort.h"

void SelectionSort(int* a, int n)
{
	for (int i = n - 1; i >= 1; i--)
	{
		int lc = i; //lc = 0;
		for (int j = i; j >= 0; j--)
			if (a[j] > a[lc])
				lc = j;
		HoanVi(a[i], a[lc]);
	}
}
