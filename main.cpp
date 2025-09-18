#include <iostream>
#include <chrono> // untuk memunculkan tanggal sekarang
using namespace std;

void log(int hasil) {
    cout <<"usia kamu adalah :"<<hasil<<endl; //hasil inputan
}

int main(){
    int tahun_lahir{};
    auto date = (chrono::system_clock::now());
    string year =format("{:%Y}",date);
    int tahun_sekarang = stoi(year);
    //format mengambil tahun sekarang
    cout <<"masukan tanggal lahiir anda:";
    cin >>tahun_lahir;
    //input tanggal lahir 
    int usia = tahun_sekarang- tahun_lahir;
    //rumus usia
    log(usia);
    //pengambilan lon
    
    //validasi usia atau if jika else tidak 
   if(usia <= 15) {
        cout << "anda masih anak anak"<<endl;
    }
    else if(usia > 15 && usia<= 30){
        cout << "anda sudah remaja"<<endl; 
        
    }
    else if(usia > 30 && usia<= 50) {
        cout << "anda sudah dewasa"<<endl;
    }
    else if(usia > 50){
        cout <<"anda sudah tua"<<endl;
    }
    else {
        cout<<"tidak diketahui"<<endl;
    }
    
    
}
