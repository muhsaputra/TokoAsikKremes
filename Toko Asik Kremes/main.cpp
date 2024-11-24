#include <iostream>
using namespace std;

int main() {
//    Muhamad Tri Saputra
    int total = 0, pilihan;
    char ulang;

    do {
        cout << "======= Toko Asik Kremes =======" << endl;
        cout << "===== Menu Makan Dan Minuman =====" << endl;
        cout << "1. Nasi Goreng - Rp. 18.000" << endl;
        cout << "2. Mie Goreng - Rp. 15.000" << endl;
        cout << "3. Ayam Bakar - Rp. 20.000" << endl;
        cout << "4. Sate Ayam - Rp. 22.000" << endl;
        cout << "5. Es Teh - Rp. 5.000" << endl;

        cout << "Mau Makan & Minum Apa? (Pilih 1-5): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Anda Memilih: Nasi Goreng Seharga Rp. 18.000" << endl;
                total += 18000;
                break;
            case 2:
                cout << "Anda Memilih: Mie Goreng Seharga Rp. 15.000" << endl;
                total += 15000;
                break;
            case 3:
                cout << "Anda Memilih: Ayam Bakar Seharga Rp. 20.000" << endl;
                total += 20000;
                break;
            case 4:
                cout << "Anda Memilih: Sate Ayam Seharga Rp. 22.000" << endl;
                total += 22000;
                break;
            case 5:
                cout << "Anda Memilih: Es Teh Seharga Rp. 5.000" << endl;
                total += 5000;
                break;
            default:
                cout << "Menu yang Anda pilih tidak tersedia." << endl;
                break;
        }

        cout << "Ingin Memilih Menu Lain? (y/t): ";
        cin >> ulang;

    } while (ulang != 't');

    cout << "======================"<<endl;
    cout << "Total Harga Pesanan Anda: Rp. " << total << endl;
    cout << "Terima kasih telah berbelanja di Toko Asik Kremes!" << endl;

    return 0;
}
