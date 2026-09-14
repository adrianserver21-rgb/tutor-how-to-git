#include <iostream>
using namespace std;

int main(){
    int totalBelanja, diskon;
    cout<<"--- Kasir Toko Emas Batangan ---\n";
    cout<<"Masukkan total belanja\t: ";cin>>totalBelanja;
    cout<<"\n--- Total Pembayaran ---"<<endl;
    if (totalBelanja >= 300000){
        diskon = totalBelanja * 0.2;
        cout<<"Diskon (20%)\t: Rp "<<diskon<<endl;
    }else if (totalBelanja >= 100000 && totalBelanja < 300000){
        diskon = totalBelanja * 0.1;
        cout<<"Diskon (10%)\t: Rp "<<diskon<<endl;
    }else{
        diskon = totalBelanja * 0;
        cout<<"Diskon (0%)\t: Rp "<<diskon<<endl;
    }
    cout<<"Total Belanja\t: Rp"<<totalBelanja-diskon;
    
}