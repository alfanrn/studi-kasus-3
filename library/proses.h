using namespace std;
class Proses {
	public :
		void getData(){
			ambil_data.open("slip_bayar.txt");
			bool shared_hosting = true;
			while(!ambil_data.eof()){
				if (shared_hosting){
					ambil_data>>banyak_SH;
					shared_hosting=false;
				} else{
					ambil_data>>banyak_VPS;
          			ambil_data>>banyak_CS;
         			ambil_data>>banyak_DN;
         			ambil_data>>bulan;
          			ambil_data>>RG;
				}
			}
			ambil_data.close();
		}

		void toFile(){
			int total=(hrg_SH*banyak_SH)+(hrg_VPS*banyak_VPS)+(hrg_CS*banyak_CS)+(hrg_DN*hrg_DN);

      if (bulan==1){
        diskon_bulan=total*0.03;
        total=total+diskon_bulan;
      } else{
      }

      if (RG==1){
        diskon_rg=total*0.03;
        total=total+diskon_rg;
      } else{
	  }
			tulis_data.open("slip_bayar.txt");
			tulis_data << total << endl;
			tulis_data << banyak_SH << endl;
			tulis_data << banyak_VPS << endl;
      		tulis_data << banyak_VPS << endl;
      		tulis_data << banyak_DN << endl;
      		tulis_data << bulan << endl;
      		tulis_data << RG << endl;
			tulis_data.close();
		}
	private :
	ifstream ambil_data;
	ofstream tulis_data;
	float diskon_bulan;
	float diskon_rg;
    int banyak_SH;
    int banyak_VPS;
    int banyak_CS;
    int banyak_DN;
	int hrg_SH = 300;
	int hrg_VPS = 930;
    int hrg_CS = 5000;
    int hrg_DN = 280;
    int RG,bulan;
}; 
