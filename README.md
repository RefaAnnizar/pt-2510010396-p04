# P04 Percabangan: if, if-else, switch, dan Operator Logika

Folder kode Pertemuan 4 Pemrograman Terstruktur. Setiap program di sini punya flowchart pasangannya
di modul (Gambar 2 sampai 7); baca gambarnya dulu, baru kodenya.

## Isi

| Berkas | Kegunaan |
|---|---|
| `if_dasar.cpp` | if satu cabang: peringatan bila nilai di bawah 60 |
| `if_else.cpp` | if-else: lulus atau belum lulus |
| `bertingkat.cpp` | if-else bertingkat tiga syarat; coba tukar urutannya |
| `logika.cpp` | `&&`, `||`, `!` dengan bool bernama; syarat ikut UAS |
| `switch_menu.cpp` | switch dengan break dan default; coba hapus break-nya |
| `sinilai_v03_awal.cpp` | Starter SiNilai v0.3: bagian v0.2 sudah jadi, lengkapi huruf mutu, status, keterangan |
| `contoh_masukan.txt` | Masukan uji yang sama dengan pertemuan sebelumnya |
| `.vscode/`, `.gitignore` | Sama dengan pertemuan sebelumnya |

## Kasus uji SiNilai v0.3

| Empat komponen | Nilai akhir | Huruf | Keterangan | Status |
|---|---|---|---|---|
| contoh_masukan.txt | 83.975 | A | Sangat baik | Lulus |
| 80 x4 | 80 | A | Sangat baik | Lulus |
| 79.9 x4 | 79.9 | B+ | Baik | Lulus |
| 60 x4 | 60 | C | Cukup | Lulus |
| 59.9 x4 | 59.9 | D | Kurang | Belum lulus |
| 30 x4 | 30 | E | Sangat kurang | Belum lulus |

## Yang dikumpulkan mahasiswa

Folder `p04` di repository `pt-NPM` berisi `sinilai_v03.cpp` dan  `README.md`. Lihat Modul Pertemuan 4 bagian E.

## Deklarasi AI

Tuliskan AI yang digunakan, prompt, dan umpan balik AI
1. AI yang digunakan

ChatGPT dari OpenAI.

2. Prompt yang digunakan

“Bantu lengkapi kode C++ `sinilai_v03.cpp` sesuai TODO dengan menggunakan `if-else` bertingkat untuk menentukan huruf mutu berdasarkan tabel konversi, variabel `bool lulus` dengan aturan nilai akhir minimal 60, serta `switch` untuk menentukan keterangan berdasarkan huruf pertama huruf mutu. Tampilkan huruf mutu, keterangan, dan status kelulusan pada kartu nilai. Pastikan kode bebas error dan warning serta sesuai dengan ketentuan tugas.”

3. Umpan balik AI

AI memberikan saran perbaikan kode C++ dengan melengkapi penentuan huruf mutu menggunakan `if-else` bertingkat, menentukan status kelulusan menggunakan `bool lulus`, dan menetapkan keterangan melalui `switch`. AI juga mengingatkan agar batas nilai diperiksa dengan teliti, terutama pada nilai 39,9 dan 40; 59,9 dan 60; 64,9 dan 65; 74,9 dan 75; serta 79,9 dan 80.

Selain itu, AI menyarankan kompilasi menggunakan opsi `-Wall -Wextra -pedantic` dan pengujian terhadap tujuh kasus uji untuk memastikan hasil program sesuai dengan tabel yang ditentukan.