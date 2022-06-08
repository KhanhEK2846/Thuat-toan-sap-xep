#include "InterChangeSort.h"

void InterchangeSort(int* a, int n)
{
	for (int i = 0; i <= n - 2; ++i)
		for (int j = i + 1; j <= n - 1; ++j)
			if (a[i] > a[j])
				HoanVi(a[i], a[j]);
}
