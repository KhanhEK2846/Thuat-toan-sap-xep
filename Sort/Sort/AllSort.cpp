#include "AllSort.h"

void Input(int*& a, int& n)
{
	srand((int)time(0));
	n = rand() % 20 + 5;
	a = new int[n];
	for (int i = 0; i < n; ++i)
	{
		int r = rand() % 999 + 1;
		a[i] = r;
	}
}

void Output(int* a, int n)
{
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}

void AllSort()
{
	clock_t start, end;
	double time_use;
	int* a;
	int n;
	Input(a, n);
	int tmp;
	cout << "(1)_InterchangeSort,(2)_BubbleSort,(3)_SelectionSort,(4)_HeapSort" << endl;
	cout << "(5)_MergeSort,(6)_QuickSort,(7)_InsertionSort,(8)_Exit" << endl;
	cout << "Cho biet loai thuat toan sap xep: ";
	cin >> tmp;
	start = clock();
	switch (tmp)
	{
	case 1:
		InterchangeSort(a, n);
		break;
	case 2:
		BubbleSort(a, n);
		break;
	case 3:
		SelectionSort(a, n);
		break;
	case 4:
		HeapSort(a, n);
		break;
	case 5:
		MergeSort(a, 0, n - 1);
		break;
	case 6:
		QuickSort(a, 0, n - 1);
		break;
	case 7:
		InsertionSort(a, n);
		break;
	case 8:
		end = clock();
		delete[]a;
		return;
	default:
		cout << "Khong ton tai thuat toan thoa yeu cau." << endl;
		cout << "Moi nhap lai" << endl;
		end = clock();
		delete[]a;
		AllSort();
		return;
		break;
	}
	end = clock();
	Output(a, n);
	time_use = (double)(end - start) / CLOCKS_PER_SEC;
	cout << "Thoi gian thuc thi: " << time_use << endl;
	delete[]a;
}

void HoanVi(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
