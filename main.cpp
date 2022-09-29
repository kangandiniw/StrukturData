#include <iostream>
#include <conio.h>

using namespace std;

int i =1;

struct paket
{
    string jnsbrg, kota;
    int berat;

};

struct paket kirim[100];

void push(int y)
{
    cout << "Data no - "<< i << endl;
    cout << "Masukkan Jenis Barang : ";
    cin  >> kirim[x].jnsbrg;
    cout << "Masukkan Berat Barang : ";
    cin  >> kirim[x].berat;
    cout << "Masukkan Kota Tujuan  : ";
    cin >> kirim[x].kota;
    i++;

}

void tampil(int y)
{
    for(int i =1; i<x; i++)
    {
        cout << "Data no. " << i << endl;
        cout << "Jenis Barang\t: " << kirim[i].jnsbrg << endl;
        cout << "Berat Barang\t: " << kirim[i].berat << endl;
        cout << "Kota Tujuan\t: " << kirim[i].kota << endl;
        cout << endl;
    }
    cout << "Press Any Key To Continue..." << endl;
    getch(); //dari conio.h
}

void pop(int y)
{
        cout << "Data yang dihapus"<<endl;
        cout << "Data no. " << i << endl;
        cout << "Jenis Barang\t: " << kirim[i].jnsbrg << endl;
        cout << "Berat Barang\t: " << kirim[i].berat << endl;
        cout << "Kota Tujuan\t: " << kirim[i].kota << endl;
        cout << endl;
}

int main()
{
    int pilih;
    int top = 1;
    int maksimum;

    cout << "Masukkan Maksimal Data : ";
    cin >> maksimum;
    do
    {
        cout<< "1. Push Data" << endl;
        cout<< "2. Pop Data" << endl;
        cout<< "3. Tampil Data" << endl;
        cout<< "9. Keluar" << endl;

        cout<< "Pilihan Anda [1-9] : ";
        cin >> pilih;
        if(pilih==1)
            {
                if(top <= maksimum)
                {
                    push(top);
                    top++;
                }
                else
                {
                    cout<<"SORRY STACK IS FULL!!"<<endl;
                    cout<<"MAKSIMUM STACK : "<< maksimum <<endl;
                    getch();
                }

            }
        if(pilih==2)
            {
                if(top != 1)
                {
                    top--;
                    pop(top);
                }
                else
                {
                    cout<<"SORRY STACK IS EMPTY!!"<<endl<<endl;
                }

            }
        if(pilih==3)
            tampil(top);
    }
    while (pilih != 9);

    return 0;
}
