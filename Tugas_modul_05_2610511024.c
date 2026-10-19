/*
Nama : Raditya Daffa Alghani
NIM : 2610511024
Kelas : A
Modul : 5
Deskripsi : Program menerima dan mengolah nilai mahasiswa
            menggunakan struktur pengulangan.
*/
#include <stdio.h>
int main()
{
    double nilai_mahasiswa;
    int m;
    int jumlah_mahasiswa;
    double total_nilai = 0;
    double rata_rata;
    double nilai_tertinggi = 0.0;
    double nilai_terendah = 0.0;
    int jumlah_lulus = 0;
    int jumlah_tidak_lulus = 0;
    double persentase_lulus;
 
    printf("================================================\n");
    printf("               PROGRAM REKAP NILAI              \n");
    printf("================================================\n");

    do
    {
        printf("Masukkan jumlah mahasiswa 1 - 100 : ");
        scanf("%d", &jumlah_mahasiswa);

        if ((jumlah_mahasiswa < 1) || (jumlah_mahasiswa > 100))
        {
        printf("Nilai tidak valid, silahkan ulangi tahapnya.\n");
        }
    }
    while ((jumlah_mahasiswa < 1)||(jumlah_mahasiswa > 100));

    for (m = 1; m <= jumlah_mahasiswa; m++)
    {
        do
        {
            printf ("Nilai mahasiswa ke - %d : ", m);
            scanf("%lf", &nilai_mahasiswa);

            if ((nilai_mahasiswa < 0.0)||(nilai_mahasiswa > 100.0))
            {
                printf("Nilai tidak valid, silahkan ulangi dari tahap sebelumnya.\n");
            }
        }
        while ((nilai_mahasiswa < 0.0)||(nilai_mahasiswa > 100.0));

        total_nilai += nilai_mahasiswa;

        if (m == 1)
        {
            nilai_tertinggi = nilai_mahasiswa;
            nilai_terendah = nilai_mahasiswa;
        }
        else
        {
            if (nilai_mahasiswa > nilai_tertinggi)
            {
                nilai_tertinggi = nilai_mahasiswa;
            }
            if (nilai_mahasiswa < nilai_terendah)
            {
                nilai_terendah = nilai_mahasiswa;
            }
        }
 

        if (nilai_mahasiswa >= 60.0)
        {
            jumlah_lulus++;
        }
        else
        {
            jumlah_tidak_lulus++;
        }
    }
 
    rata_rata = total_nilai / jumlah_mahasiswa;
    persentase_lulus = jumlah_lulus / (double) jumlah_mahasiswa * 100.0;
 
    printf("\n");
    printf("                  HASIL REKAP\n");
    printf("------------------------------------------------\n");
    printf("Jumlah mahasiswa      : %d\n", jumlah_mahasiswa);
    printf("Total nilai           : %.2f\n", total_nilai);
    printf("Rata-rata             : %.2f\n", rata_rata);
    printf("Nilai tertinggi       : %.2f\n", nilai_tertinggi);
    printf("Nilai terendah        : %.2f\n", nilai_terendah);
    printf("Jumlah lulus          : %d\n", jumlah_lulus);
    printf("Jumlah tidak lulus    : %d\n", jumlah_tidak_lulus);
    printf("Persentase kelulusan  : %.2f%%\n", persentase_lulus);
    printf("================================================\n");
 
    return 0;
}