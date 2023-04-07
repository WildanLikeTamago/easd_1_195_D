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
}