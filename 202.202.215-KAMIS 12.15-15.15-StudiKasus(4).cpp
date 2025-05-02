#include <iostream>
using namespace std;

class hitungTabungan {
private:
    int uangSaku;
    int totalPengeluaran;
    int totalTabungan;
    int pengeluaranBulanan[100]; 
    int jumlahBulan;

public:
    hitungTabungan(int sakuAndi) {
        uangSaku = sakuAndi;
        totalPengeluaran = 0;
        totalTabungan = 0;
        jumlahBulan = 0;
    }

    void masukanPengeluaran(int jmlBulan) {
        jumlahBulan = jmlBulan;
        for (int i = 0; i < jumlahBulan; i++) {
            int pengeluaranPerBulan;
            cout << "Masukkan pengeluaran bulan ke - " << (i + 1) << ": ";
            cin >> pengeluaranPerBulan;
            pengeluaranBulanan[i] = pengeluaranPerBulan;
            totalPengeluaran += pengeluaranPerBulan;
            totalTabungan += (uangSaku - pengeluaranPerBulan);
            cout << "Tabungan bulan ke - " << (i + 1) << ": " << (uangSaku - pengeluaranPerBulan) << endl;
        }
    }

    int hitungTotalPengeluaran(int i) {
        if (i < 0) return 0;
        return pengeluaranBulanan[i] + hitungTotalPengeluaran(i - 1);
    }

    void tampilkanTotal() {
	int totalPengeluaran = hitungTotalPengeluaran(0);
	int totalTabungan = (uangSaku * jumlahBulan) - totalPengeluaran;
    cout << "Total pengeluaran : " << totalPengeluaran << endl;
    cout << "Total Tabungan : " << totalTabungan << endl;
	}
};

int main() {
    int uangSaku, jumlahBulan;
    cout << "Masukkan jumlah uang saku per bulan: ";
    cin >> uangSaku;
    cout << "Masukkan jumlah bulan: ";
    cin >> jumlahBulan;

    hitungTabungan ta(uangSaku);
    ta.masukanPengeluaran(jumlahBulan);

    cout << "Total Pengeluaran dan Tabungan Andi:" << endl;
    ta.tampilkanTotal();

    return 0;
}

