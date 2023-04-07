//1. Karena Algoritma sangat penting dalam pemecahan suatu masalah dengan efisien, sistematis, terstruktur.

//2. Statis dan dinamis.

//3. Kecepatan mesin, sistem operasi, compiler, bahasa pemrograman, ukuran data yang diinput.

//4. Quick sort, karena pengerjaan lebih sederhana, efisien sehingga tidak membutuhkan waktu banyak, dan data yang diinput ukurannya kecil

//5. Quadratic : bubble sort, insertion sort, merge sort.
//   Loglinear : selection sort, shell sort, quick  sort.

//6. Algoritma selection sort
#include <iostream>
using namespace std;

int wil[34];
int cmp_count = 0;
int mov_count = 0;
int n;

void input() {
	while (true)
	{
		cout << "Masukkan panjang elemen array: ";
		cin >> n;

		if (n <= 34)
			break;
		else
			cout << "Maksimum panjang elemen array adalah 34" << endl;
	}

	cout << "\n======================" << endl;
	cout << "\nMasukkan elemen array" << endl;
	cout << "\n======================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> wil[i];
	}
}

void swap(int x, int y)
{
	int temp;
	temp = wil[x];
	wil[x] = wil[y];
	wil[y] = temp;
}

void selectionsort(int high, int min_index)
{
	int pivot, i, WM;
	if (min_index > high)
		return;

	pivot = wil[high];
	WM = min_index;
	i = high;

	while (WM <= i)
	{
		while ((wil[i] > pivot) && (i >= min_index))
		{
			i--;
			cmp_count++;
		}
		cmp_count++;

		while ((wil[WM] <= pivot) && (WM <= high))
		{
			WM++;
			cmp_count++;
		}
		cmp_count++;

		if (wil[WM] < wil[min_index])
		{
			swap(i, WM);
			mov_count++;
		}
	}
	selectionsort(high, WM + 1);
	selectionsort(n - 1, min_index);
}

void display() {
	cout << "\n====================" << endl;
	cout << "\nArray yang disortir" << endl;
	cout << "\n====================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << wil[i] << " ";
	}
	cout << "\nNomor perbandingan: " << cmp_count << endl;
	cout << "Nomor pergerakan data: " << mov_count << endl;
}

int main()
{
	input();
	selectionsort(0, n - 1);
	display();
	system("pause");

	return 0;
}