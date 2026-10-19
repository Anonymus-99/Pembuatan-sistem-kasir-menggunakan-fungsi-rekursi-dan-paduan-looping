/*
Nama      : Raditya Daffa Alghani
NIM       : 2610511024
Kelas     : A
Modul     : 3
Deskripsi : Program menghitung ringkasan aktivitas belajar.
*/
#include <stdio.h>
int main(void)
{
    const int NILAI_TIAP_JAM = 60;
    int Total_durasi_belajar = 425;
    int halaman_dibaca = 120;
    int Latihan_diselesaikan = 18;
    int Jumlah_sesi_belajar = 5;
    int Target_latihan_mingguan = 20;
    double Rata_rata_perSesi;
    int Total_waktu_belajar;
    double persentase_penyelesaian;
    int sisa_waktu_belajar;

    Total_waktu_belajar = Total_durasi_belajar / NILAI_TIAP_JAM;
    sisa_waktu_belajar = Total_durasi_belajar % NILAI_TIAP_JAM;
    Rata_rata_perSesi =  Total_durasi_belajar / Jumlah_sesi_belajar;
    Rata_rata_perSesi /= Jumlah_sesi_belajar;
    persentase_penyelesaian = (double) Latihan_diselesaikan / Target_latihan_mingguan * 100;

    printf("\n================================================\n");
    printf("\n           RINGKASAN AKTIVITAS BELAJAR          \n");
    printf("\n================================================\n");
    printf("Jumlah sesi             : %d\n", Jumlah_sesi_belajar);
    printf("Total waktu Belajar     : %d jam %d menit\n", Total_waktu_belajar, sisa_waktu_belajar);
    printf("Halaman Dibaca          : %d\n", halaman_dibaca);
    printf("Rata rata per sesi      : %.2f\n", Rata_rata_perSesi);
    printf("Latihan diselesaikan    : %d dari 20\n", Latihan_diselesaikan);
    printf("Persentase penyelesaian : %.2f%%\n", persentase_penyelesaian);


     return 0;
}