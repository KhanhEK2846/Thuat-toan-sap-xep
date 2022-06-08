#include "MergeSort.h"

void Merge(int* a, int Left, int Mid, int Right)
{
	int* temp = new int[Right - Left + 1];
	int n;
	int i = Left;//Left…Mid
	int j = Mid + 1;//Mid+1…Right
	n = 0;
	while (!(i > Mid && j > Right))
	{
		if ((i <= Mid && j <= Right && a[i] < a[j]) || (j > Right))
			temp[n++] = a[i++];
		else
			temp[n++] = a[j++];
	}
	for (i = 0; i < n; i++)
		a[Left + i] = temp[i];
	delete[]temp;
}

void MergeSort(int* a, int Left, int Right)
{
	if (Left < Right)//Mảng có nhiều hơn 1 phần tử
	{
		int Mid = (Left + Right) / 2;
		MergeSort(a, Left, Mid);// Sắp xếp mảng bên trái
		MergeSort(a, Mid + 1, Right);// Sắp xếp mảng bên phải
		Merge(a, Left, Mid, Right);// Trộn 2 mảng lại với nhau
	}
}
