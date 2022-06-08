#include "BubbleSort.h"

void BubbleSort(int* a, int n)
{
	for (int i = 0; i <= n - 2;)
	{
		int vt = n - 1;
		for (int j = n - 1; j >= i + 1; j--)
			if (a[j] < a[j - 1])
			{
				HoanVi(a[j], a[j - 1]);
				vt = j;
			}
		i = vt;
	}
}
