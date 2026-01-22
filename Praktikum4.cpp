#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

// Fungsi untuk mencetak isi vector dengan format yang sesuai
void printVector(const std::string& label, const std::vector<int>& vec) {
    std::cout << label << std::endl;
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << (i == vec.size() - 1 ? "" : " | ");
    }
    std::cout << std::endl;
    std::cout << "===============================================" << std::endl;
}

int main() {
    // Array satu dimensi int data[11]
    int data[11] = { 12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19 };

    // Mengkonversi array tersebut menjadi tipe data vector
    std::vector<int> vec(data, data + sizeof(data) / sizeof(data[0]));

    // Cetak isi vector awal
    printVector("Isi vector awal:", vec);

    // Sorting secara ASC
    std::sort(vec.begin(), vec.end());

    // Cetak isi vector setelah di sorting ASC
    printVector("Isi vector setelah di sorting:", vec);

    // Sorting dengan DESC
    std::sort(vec.begin(), vec.end(), std::greater<int>());

    // Cetak isi vector setelah di sorting DESC
    printVector("Isi vector setelah di di DESC Order:", vec);

    return 0;
}
