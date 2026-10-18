// SiNilai v0.3: nilai akhir dihitung dan huruf mutu ditentukan berdasarkan tabel konversi.
// Tabel konversi:
// 80-100 A | 75-79,9 B | 65-74,9 C | 60-64,9 C+ | 40-59,9 D | 0-39,9 E

#include <iostream>
#include <string>

using namespace std;

int main() {
    const double BOBOT_KEHADIRAN = 0.10;
    const double BOBOT_MINGGUAN = 0.45;
    const double BOBOT_UTS = 0.25;
    const double BOBOT_UAS = 0.20;

    string nama;
    string npm;
    double kehadiran = 0.0;
    double mingguan = 0.0;
    double uts = 0.0;
    double uas = 0.0;

    cout << "=== SiNilai v0.3 ===\n";
    cout << "Nama        : ";
    getline(cin, nama);
    cout << "NPM         : ";
    getline(cin, npm);
    cout << "Kehadiran   : ";
    cin >> kehadiran;
    cout << "Mingguan    : ";
    cin >> mingguan;
    cout << "UTS         : ";
    cin >> uts;
    cout << "UAS         : ";
    cin >> uas;

    double nilai_akhir = kehadiran * BOBOT_KEHADIRAN
                       + mingguan * BOBOT_MINGGUAN
                       + uts * BOBOT_UTS
                       + uas * BOBOT_UAS;

    // TODO 1: Tentukan huruf mutu dari batas tertinggi ke terendah.
    string huruf_mutu;
    if (nilai_akhir >= 80.0) {
        huruf_mutu = "A";
    } else if (nilai_akhir >= 75.0) {
        huruf_mutu = "B";
    } else if (nilai_akhir >= 65.0) {
        huruf_mutu = "C";
    } else if (nilai_akhir >= 60.0) {
        huruf_mutu = "C+";
    } else if (nilai_akhir >= 40.0) {
        huruf_mutu = "D";
    } else {
        huruf_mutu = "E";
    }

    // TODO 2: Lulus jika nilai akhir minimal 60.
    bool lulus = (nilai_akhir >= 60.0);

    // TODO 3: Tentukan keterangan menggunakan huruf pertama huruf_mutu.
    string keterangan;
    switch (huruf_mutu[0]) {
        case 'A':
            keterangan = "Sangat baik";
            break;
        case 'B':
            keterangan = "Baik";
            break;
        case 'C':
            keterangan = "Cukup";
            break;
        case 'D':
            keterangan = "Kurang";
            break;
        case 'E':
            keterangan = "Sangat kurang";
            break;
        default:
            keterangan = "Tidak diketahui";
            break;
    }

    cout << "\n--- Kartu Nilai Mahasiswa ---\n";
    cout << "Nama        : " << nama << "\n";
    cout << "NPM         : " << npm << "\n";
    cout << "Nilai akhir : " << nilai_akhir << "\n";
    cout << "Huruf mutu  : " << huruf_mutu << "\n";
    cout << "Keterangan  : " << keterangan << "\n";
    cout << "Status      : " << (lulus ? "Lulus" : "Belum lulus") << "\n";

    return 0;
}
