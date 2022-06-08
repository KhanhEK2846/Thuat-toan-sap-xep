#include "QuickSort.h"

void Partition(int* a, int Left, int Right, int& m1, int& m2)
{
	int pivot = a[(Left + Right) / 2];
	int low = Left;
	int high = Right;
	while (low < high)
		{
		while (a[low] < pivot)
			low++;
		while (a[high] > pivot)
			high--;
		if (low <= high)
			{
			HoanVi(a[low], a[high]);
			low++;
			high--;
			}
		}
	m1 = high;
	m2 = low;
}

void QuickSort(int a[], int Left, int Right)
{
	if (Left < Right)
	{
		int m1, m2;
		Partition(a, Left,
		Right, m1, m2);
		QuickSort(a, Left, m1);
		QuickSort(a, m2, Right);
	}
}
