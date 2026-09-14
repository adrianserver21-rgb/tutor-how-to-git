#include <iostream>
using namespace std;

int main(){
    int kodeMinum, tagihan, uang, mineral = 4000, tehBotol = 6000, kopiSusu = 10000;
    
    cout<<"--- Vending Machine Kang Gatot ---"<<endl<<"Pilihan Minuman:\n";
    cout<<"1. Air Mineral (Rp 4000)\n2. Teh Botol (Rp 6000)\n3. Kopi Susu (Rp 10000)"<<endl;
    cout<<"Masukkan kode minuman (1-3)\t: "; cin>>kodeMinum;
    switch (kodeMinum){
        case 1:
            tagihan = mineral;
            break;
        case 2:
            tagihan = tehBotol;
            break;
        case 3:
            tagihan = kopiSusu;
            break;
        default:
            cout<<"Error: masukkan nilai 1-3!";
            return 0;
            break;
    }
    cout<<"Masukkan uang Anda\t: ";cin>>uang;cout<<endl<<"--- Detail Transaksi ---\n";
    
    if (uang < tagihan){
        cout<<"Transaksi Anda Gagal: Uangnya kurang kocak!";
    }else{
        int kembalian = uang-tagihan;
        cout<<"Total\t\t: "<<tagihan<<endl;
        cout<<"Uang Anda \t: "<<uang<<endl;
        cout<<"Kembalian\t: "<<kembalian<<endl;
        cout<<"Lembaran\t: "<<kembalian/5000<<" lembaran Rp 5000, "<<(kembalian - (5000*(kembalian/5000)))/1000<<" lembaran Rp 1000.";
    }
}