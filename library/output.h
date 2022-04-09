using namespace std;

class Output {
public:
  void cetak() {
    cout << "SLIP PEMBAYARAN \n";
    cout << " Shared Hosting  : " << data_file[1] << endl;
    cout << " VPS Server      : " << data_file[2] << endl;
    cout << " Cloud Server    : " << data_file[3] << endl;
    cout << " Domain Name     :" << data_file[4] << endl;
    cout << " Bulan           : " << data_file[5] << endl;
    cout << " Regional        : " << data_file[6] << endl;
    cout << "Harga total Rp. "  <<data_file[0] << "000" << endl;
  }
  void getData() {
    ambil_data.open("slip_bayar.txt");
    while (!ambil_data.eof()) {
      ambil_data>>data_file[index];
      index+=1;
    }
    ambil_data.close();
  }

  void toFile() {
    tulis_data.open("slip_bayar.txt");
    tulis_data << "SLIP PEMBAYARAN \n";
    tulis_data << "  Shared Hosting   : " << data_file[1] << endl;
    tulis_data << "  VPS Server       : " << data_file[2] << endl;
    tulis_data << "  Cloud Server     : " << data_file[3] << endl;
    tulis_data << "  Domain Name      : " << data_file[4] << endl;
    tulis_data << "  Bulan            : " << data_file[5] << endl;
    tulis_data << "  Regional         : " << data_file[6] << endl;
    tulis_data << "Harga total Rp. " << data_file[0] << endl;
    tulis_data.close();
  }

private:
  ifstream ambil_data;
  ofstream tulis_data;
  float data_file[30];
  int index = 0;
};
