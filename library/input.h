#include <iostream>
using namespace std;

class Input {
public:
  void cetak() {	
    cout<<"\n\t===================LAYANAN CLOUD HOSTING=====================" << endl;
    cout<<"\t Layanan yang tersedia : \n";
    cout<<"\t1) Shared Hosting     Rp. 300000"<<endl;
    cout<<"\t2) VPS Server         Rp. 930000"<<endl;
    cout<<"\t3) Cloud Server       Rp. 5000000"<<endl;
    cout<<"\t4) Domain Name        Rp. 280000"<<endl;
    cout<<"\tRegional : 1) Indonesia ; 2) Luar Indonesia";
    cout<< "\n\t 1) Shared Hosting : ";cin>>SH;
    cout<< "\n\t 2) VPS Server     : ";cin>>VPS;
    cout<< "\n\t 3) Cloud Server   : ";cin>>CS;
    cout<< "\n\t 4) Domain Name    : ";cin>>DN;
    cout<<"\n\t Bulan pembelian : 1) Ramadhan ; 2) Luar Ramadhan : ";cin>>bulan;
    cout<< "\n\t Regional       : ";cin>>RG;
  }
  void toFile() {
  //  tulis_data.open("slip_bayar.txt");
    tulis_data<<SH<<endl;
    tulis_data<<VPS<<endl;
    tulis_data<<CS<<endl;
    tulis_data<<DN<<endl;
    tulis_data<<RG<<endl;
    tulis_data.close();
  }
private:
int SH,VPS,CS,DN,bulan,RG; 
};