#include <iostream>
#include <stdlib.h>

#include "include/PersegiPanjang.hpp"

using namespace std;

// Nama     : Muhammad Hikmal Akbar //
// NRP      : 5024211062 //
// Dept     : Teknik Komputer //
// kelas    : Pemrograman Lanjutan (B) //

int main () {
    PersegiPanjang PP3(0,0,0,0);
    PersegiPanjang PP4(0,0,0,0);
    PersegiPanjang PP5(0,0,0,0);
    PersegiPanjang PP6(0,0,0,0);
    int choice1, choice2;
    float xmid, ymid, xlen, ylen;

    cout << "SELAMAT DATANG DI PROGRAM OPERATOR OVERLOADING PERSEGI PANJANG" << endl;
    cout << "Masukkan data Persegi Panjang yang di inginkan" << endl;
    cout << "Persegi Panjang Pertama" << endl;
    cout << "Titik Tengah x : ";
    cin >> xmid;
    cout << "Titik Tengah y : ";
    cin >> ymid;
    cout << "Panjang Persegi Panjang : ";
    cin >> xlen;
    cout << "Lebar Persegi Panjang : ";
    cin >> ylen;
    PersegiPanjang PP1 (xmid, ymid, xlen, ylen);
    system ("cls || clear");

    cout << "Persegi Panjang Kedua" << endl;
    cout << "Titik Tengah x : ";
    cin >> xmid;
    cout << "Titik Tengah y : ";
    cin >> ymid;
    cout << "Panjang Persegi Panjang : ";
    cin >> xlen;
    cout << "Lebar Persegi Panjang : ";
    cin >> ylen;
    PersegiPanjang PP2 (xmid, ymid, xlen, ylen);
    system ("cls || clear");

    cout << "DATA PERSEGI PANJANG SEMENTARA" << endl;
    cout << endl;
    cout << "Persegi Panjang 1 " << endl;
    PP1.printhasil ();
    cout << endl;
    cout << "Persegi Panjang 2 " << endl;
    PP2.printhasil ();
    cout << "Tekan Enter untuk lanjut" << endl;
    cin.ignore ();
    cin.ignore ();
    system ("cls || clear");

    while (1) {
    system ("cls || clear");
    cout << "Pilih Operator yang ingin diterapkan kepada Persegi Panjang yang dimasukkan" << endl;
    cout << "1. Operator +" << endl;
    cout << "2. Operator -" << endl;
    cout << "3. Operator ++" << endl;
    cout << "4. Operator --" << endl;
    cout << "5. Operator []" << endl;
    cout << "6. Operator ==" << endl;
    cout << "0. Keluar Program " << endl;
    cout << "Pilih Salah satu" << endl;
    cin >> choice1;
    PP5 = PP1 + PP2;
    PP6 = PP1 - PP2;
    system ("cls || clear");

   
    switch (choice1)
    {
    case 1:
        system ("cls || clear");
        if (PP1 == PP2){
            PP3 = PP1 + PP2;
            cout << "Data persegi panjang yang baru dihasilkan : " << endl;
            PP3.printhasil ();
            cout << endl;
            cout << "tekan enter untuk kembali ke menu utama"<< endl;
            cin.ignore () ;
            cin.ignore () ;
        }
        else {
            cout << "Tidak Beririsan sehingga tidak menjadi persegi panjang baru" << endl;
            cout << "tekan enter untuk kembali ke menu utama"<< endl;
            cin.ignore () ;
            cin.ignore () ;
        }
    break;

    case 2:
        system ("cls || clear");
        if (PP1 == PP2) {
        PP4 = PP1 - PP2;
        cout << "Data persegi panjang yang baru dihasilkan : " << endl;
        PP4.printhasil ();
        cout << endl;
        cout << "tekan enter untuk kembali ke menu utama"<< endl;
        cin.ignore () ;
        cin.ignore () ;
        }
        else {
            cout << "Tidak Beririsan sehingga tidak menjadi persegi panjang baru" << endl;
            cout << "tekan enter untuk kembali ke menu utama"<< endl;
            cin.ignore () ;
            cin.ignore () ;
        }
    break;
    case 3:
        system ("cls || clear");
        cout << "Persegi Panjang 1 menjadi : " << endl;         
        ++PP1;
        PP1.printhasil ();
        cout << endl;
        cout << endl;
        cout << "Persegi Panjang 2 menjadi : " << endl;
        ++PP2 ;
        PP2.printhasil ();
        --PP2;
        --PP1;
        cin.ignore () ;
        cin.ignore () ;
    break;
    case 4:
        system ("cls || clear");
        cout << "Persegi Panjang 1 menjadi : " << endl;         
        --PP1;
        PP1.printhasil ();
        cout << endl;
        cout << endl;
        cout << "Persegi Panjang 2 menjadi : " << endl;
        --PP2 ;
        PP2.printhasil ();
        ++PP2;
        ++PP1;
        cin.ignore () ;
        cin.ignore () ;
    break;
    case 5:
        cout << "Pilih data dari Persegi Panjang yang ingin ditampilkan : " << endl;
        cout << "1. Nilai X minimal " << endl;
        cout << "2. Nilai X maksimal " << endl;
        cout << "3. Nilai Y minimal " << endl;
        cout << "4. Nilai Y maksimal " << endl;
        cout << "0. Kembali ke menu utama" << endl;
        cout << "Pilih salah satu : " << endl;
        cin >> choice2;
        system ("cls || clear");
        switch (choice2)
        {
        case 1 :
            cout << "Nilai X minimal Persegi Panjang 1 = " << PP1[2] << endl;
            cout << "Nilai X minimal Persegi Panjang 2 = " << PP2[2] << endl;
            cout << "Tekan enter untuk kembali" << endl;
            cin.ignore ();
            cin.ignore ();
            system ("cls || clear"); 

        break;
        case 2 :
            cout << "Nilai X maksimal Persegi Panjang 1 = " << PP1[1] << endl;
            cout << "Nilai X maksimal Persegi Panjang 2 = " << PP2[1] << endl;
            cout << "Tekan enter untuk kembali" << endl;
            cin.ignore ();
            cin.ignore ();
            system ("cls || clear"); 
        break;
        case 3 :
            cout << "Nilai Y minimal Persegi Panjang 1 = " << PP1[4] << endl;
            cout << "Nilai Y minimal Persegi Panjang 2 = " << PP2[4] << endl;
            cout << "Tekan enter untuk kembali" << endl;
            cin.ignore ();
            cin.ignore ();
            system ("cls || clear"); 
        break;
        case 4 :
            cout << "Nilai Y maksimal Persegi Panjang 1 = " << PP1[3] << endl;
            cout << "Nilai Y maksimal Persegi Panjang 2 = " << PP2[3] << endl;

            cout << "Tekan enter untuk kembali" << endl;
            cin.ignore ();
            cin.ignore ();
            system ("cls || clear"); 
        break;
        
        default:
            
        break;
        }   
    break;
    case 6 :
        if (PP1 == PP2) {
            cout << "Persegi Panjang saling beririsan" << endl;
        }
        else {
            cout << "Persegi Panjang tidak beririsan" << endl;
        }
        cout << "Tekan enter untuk kembali" << endl;
        cin.ignore ();
        cin.ignore ();
        system ("cls || clear");
    break;
    case 0: 
        return 0;    
    break;
    default:
    break;
    }
    }
    

    return 0;
}