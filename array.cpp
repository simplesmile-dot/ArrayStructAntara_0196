#include <iostream>
using namespace std;

int main() 
{
    //Dekalrasi array disertai inisialisasi
    int dataku[5] = {10, 20, 30, 40, 50};
    //Deklarasi array tanpa inisialisasi
    int datamu[5];

    //Cara akses (membaca atau mengambil isi array)
    cout << "Isi data kedua : " << dataku[1] << endl;
    //Mengisi array
    dataku[1] = 200;
    cout << "Isi data kedua setelah diubah : " << dataku[1] << endl;

    //Mengisi data dengan perintah satu per satu
    cout << "Isikan data pertama : ";
    cin >> datamu[0];
    cout << "Isi data kedua : ";
    cin >> datamu[1];
    cout << "Isi data ketiga : ";
    cin >> datamu[2];
    cout << "Isi data keempat : ";
    cin >> datamu[3];
    cout << "Isi data kelima : ";
    cin >> datamu[4];
    cout << endl;

    cout << "Input Array Menggunakan For" << endl;
    //Mengisi data melalui perulangan
    for (int i = 0; i <= 4; i++) 
    {
        cout << "Isi data ke-" << (i + 1) << " : ";
        cin >> datamu[i];
    }
    cout << endl;

    cout << "Tampil Data Array Menggunakan For" << endl;
    //Menampilkan data dengan perulangan
    for (int i = 0; i <= 4; i++) 
    {
        cout << "Data ke-" << (i + 1) << " : " << datamu[i] << endl;
    }
}
// 7
