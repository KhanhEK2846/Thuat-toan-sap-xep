#include "HeapSort.h"

void Heapify(int* A, int n, int vt)
{
	while (vt < n / 2)
	{
		int lc = 2 * vt + 1;
		if (lc + 1 < n && A[lc] < A[lc + 1])
			lc++;
		if (A[vt] < A[lc])
		{
			HoanVi(A[vt], A[lc]);
		}
		vt = lc;
	}
}

void BuildHeap(int* A, int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
		Heapify(A, n, i);
}

void HeapSort(int* A, int n)
{
	BuildHeap(A, n);
	int lenght = n;
	while (lenght > 1)
	{
		HoanVi(A[0], A[lenght - 1]);
		lenght--;
		Heapify(A, lenght, 0);
	}
}
