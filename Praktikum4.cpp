#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// ============================================
// SOAL 10.4 - Latihan 1
// ============================================
void soal_10_4() {
    cout << "\n=== SOAL 10.4 - LATIHAN 1 ===" << endl;

    // Array yang diberikan
    vector<int> arr = { 12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19 };

    cout << "Array awal: ";
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    // Input dari user
    int input;
    cout << "\nMasukkan bilangan integer: ";
    cin >> input;

    // Cari nilai yang sama dengan input
    vector<int> hasil;
    for (int val : arr) {
        if (val == input) {
            hasil.push_back(val);
        }
    }

    // Tampilkan hasil
    if (hasil.size() > 0) {
        cout << "\nTerdapat [" << hasil.size() << "] beberapa nilai yang sama dengan [" << input << "]" << endl;
    }
    else {
        cout << "\nTIDAK ADA" << endl;
    }
}

// ============================================
// SOAL 10.5 - Latihan 2
// ============================================
void soal_10_5() {
    cout << "\n\n=== SOAL 10.5 - LATIHAN 2 ===" << endl;

    // Array yang diberikan
    vector<int> arr = { 12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19 };

    cout << "Array awal: ";
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    // 1. Sorting ASC (Ascending)
    vector<int> arr_asc = arr;
    sort(arr_asc.begin(), arr_asc.end());

    cout << "\nIsi vector setelah di sorting:" << endl;
    cout << "ASC: ";
    for (int val : arr_asc) {
        cout << val << " | ";
    }
    cout << endl;

    // 2. Sorting DESC (Descending)
    vector<int> arr_desc = arr;
    sort(arr_desc.begin(), arr_desc.end(), greater<int>());

    cout << "\nIsi vector setelah di di DESC Order:" << endl;
    cout << "DESC: ";
    for (int val : arr_desc) {
        cout << val << " | ";
    }
    cout << endl;
}

// ============================================
// MAIN PROGRAM
// ============================================
int main() {
    int pilihan;

    cout << "Pilih soal yang ingin dijalankan:" << endl;
    cout << "1. Soal 10.4 - Latihan 1 (Mencari nilai sama)" << endl;
    cout << "2. Soal 10.5 - Latihan 2 (Sorting ASC & DESC)" << endl;
    cout << "3. Jalankan kedua soal" << endl;
    cout << "Pilihan: ";
    cin >> pilihan;

    switch (pilihan) {
    case 1:
        soal_10_4();
        break;
    case 2:
        soal_10_5();
        break;
    case 3:
        soal_10_4();
        soal_10_5();
        break;
    default:
        cout << "Pilihan tidak valid!" << endl;
    }

    return 0;
}