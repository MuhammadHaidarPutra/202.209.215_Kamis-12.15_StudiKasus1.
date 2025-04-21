#include <iostream>
#include <string>
using namespace std;

class KTP {
    friend ostream& operator<<(ostream& out, const KTP& k);
    friend istream& operator>>(istream& in, KTP& k);

private:
    string nik, prov, kab, nama, tgl, jenis, alamat, kel, kec, agama, status, pekerjaan, kewarganegaraan;
    char gol;
    int rt, rw;

public:
    void tulisKTP() {
        cout<<"Masukan NIK anda \t\t : ";
        cin>>nik;
        cin.ignore();  
        cout<<"Masukan Provinsi Anda \t\t : ";
        getline(cin, prov);
        cout<<"Masukan Kabupaten/Kecamatan Anda : ";
        getline(cin, kab);
        cout<<"Masukan Nama Anda \t\t : ";
        getline(cin, nama);
        cout<<"Masukan Tempat/Tgl Lahir Anda \t : ";
        getline(cin, tgl);
        cout<<"Masukan Jenis Kelamin Anda \t : ";
        getline(cin, jenis);
        cout<<"Masukan Golongan Darah Anda \t : ";
        cin>>gol;
        cout<<"Masukan Alamat Anda \t\t : ";
        cin.ignore();  
        getline(cin, alamat);
        cout<<"Masukan RT Anda \t\t : ";
        cin>>rt;
        cout<< "Masukan RW Anda \t\t : ";
        cin>> rw;
        cin.ignore();  
        cout<< "Masukan Kelurahan/Desa Anda \t : ";
        getline(cin, kel);
        cout<< "Masukan Kecamatan Anda \t\t : ";
        getline(cin, kec);
        cout<< "Masukan Agama Anda \t\t : ";
        getline(cin, agama);
        cout<< "Masukan Status Perkawinan Anda\t : ";
        getline(cin, status);
        cout<< "Masukan Pekerjaan Anda \t\t : ";
        getline(cin, pekerjaan);
        cout << "Masukan Kewarganegaraan Anda\t : ";
        getline(cin, kewarganegaraan);
        cout << endl << endl;
    }

    void tampilkanHasil() const {
        cout<<"+=======================================================+\n";
        cout<<"\t\t  PROVINSI " <<prov << " \t\t\t" << endl;
        cout<<"\t\t  KABUPATEN " <<kab<< " \t\t\t" << endl;
        cout<<"+=======================================================+\n";
        cout<<"NIK\t\t\t: " <<nik<<endl;
        cout<<"Nama\t\t\t: " <<nama<<endl;
        cout<<"Tempat/Tgl Lahir\t: " <<tgl<<endl;
        cout<<"Jenis Kelamin\t\t: " <<jenis<< "\t Gol. Darah: " <<gol<<endl;
        cout<<"Alamat\t\t\t: " <<alamat<<endl;
        cout<<"\t RT/RW \t\t: " <<rt<< "/" <<rw<<endl;
        cout<<"\t Kel/Desa \t: " <<kel<<endl;
        cout<<"\t Kecamatan \t: " <<kec<<endl;
        cout<<"Agama\t\t\t: " <<agama<<endl;
        cout<<"Status Perkawinan\t: " <<status<<endl;
        cout<<"Pekerjaan\t\t: " <<pekerjaan<<endl;
        cout<<"Kewarganegaraan\t\t: " <<kewarganegaraan<<endl;
        cout<<"Berlaku Hingga\t\t: SEUMUR HIDUP" << endl;
        cout<< "+=======================================================+\n";
    }
};


istream& operator>>(istream& in, KTP& k) {
    cout<<"Masukan NIK anda \t\t : ";
    in>>k.nik;
    in.ignore();  
    cout<<"Masukan Provinsi Anda \t\t : ";
    getline(in, k.prov);
    cout<<"Masukan Kabupaten/Kecamatan Anda : ";
    getline(in, k.kab);
    cout<< "Masukan Nama Anda \t\t : ";
    getline(in, k.nama);
    cout<<"Masukan Tempat/Tgl Lahir Anda \t : ";
    getline(in, k.tgl);
    cout<<"Masukan Jenis Kelamin Anda \t : ";
    getline(in, k.jenis);
    cout<<"Masukan Golongan Darah Anda \t : ";
    in>>k.gol;
    in.ignore();  
    cout<<"Masukan Alamat Anda \t\t : ";
    getline(in, k.alamat);
    cout<<"Masukan RT Anda \t\t : ";
    in>>k.rt;
    cout<<"Masukan RW Anda \t\t : ";
    in>>k.rw;
    in.ignore();  
    cout<<"Masukan Kelurahan/Desa Anda \t : ";
    getline(in, k.kel);
    cout<<"Masukan Kecamatan Anda \t\t : ";
    getline(in, k.kec);
    cout<<"Masukan Agama Anda \t\t : ";
    getline(in, k.agama);
    cout<<"Masukan Status Perkawinan Anda\t : ";
    getline(in, k.status);
    cout<<"Masukan Pekerjaan Anda \t\t : ";
    getline(in, k.pekerjaan);
    cout<<"Masukan Kewarganegaraan Anda\t : ";
    getline(in, k.kewarganegaraan);
    cout<<endl<<endl;
    return in;
}

ostream& operator<<(ostream& out, const KTP& k) {
    out<<"+=======================================================+\n";
    out<<"\t\t  PROVINSI " <<k.prov<<" \t\t\t" <<endl;
    out<<"\t\t  KABUPATEN " <<k.kab<< " \t\t\t" <<endl;
    out<<"+=======================================================+\n";
    out<<"NIK\t\t\t: " <<k.nik<<endl;
    out<<"Nama\t\t\t: " <<k.nama<<endl;
    out<<"Tempat/Tgl Lahir\t: " <<k.tgl<<endl;
    out<<"Jenis Kelamin\t\t: " <<k.jenis<< "\t Gol. Darah: " <<k.gol<<endl;
    out<<"Alamat\t\t\t: " <<k.alamat<<endl;
    out<<"\t RT/RW \t\t: " <<k.rt<< "/" <<k.rw<<endl;
    out<<"\t Kel/Desa \t: " <<k.kel<<endl;
    out<<"\t Kecamatan \t: " <<k.kec<<endl;
    out<<"Agama\t\t\t: " <<k.agama<<endl;
    out<<"Status Perkawinan\t: " <<k.status<<endl;
    out<<"Pekerjaan\t\t: " <<k.pekerjaan<<endl;
    out<<"Kewarganegaraan\t\t: " <<k.kewarganegaraan<<endl;
    out<<"Berlaku Hingga\t\t: SEUMUR HIDUP" <<endl;
    out<< "+=======================================================+\n";
    return out;
}

int main() {
    KTP data;
    data.tulisKTP();
    data.tampilkanHasil();
    return 0;
}

