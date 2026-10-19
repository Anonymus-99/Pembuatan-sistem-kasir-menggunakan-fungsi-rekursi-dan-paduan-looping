/*
Nama          : Raditya Daffa Alghani
NIM           : 2610511024
Kelas         : A 
Modul         : 2 
Deskripsi     : Program menghitung estimasi biaya perjalanan.
*/
#include <stdio.h>
int main(void)
{
    double jarak_km;
    double konsumsi_km_perLiter;
    double Harga_bahan_bakar_perLiter;
    int Jumlah_penumpang;
    double Kebutuhan_bahan_bakar;
    double Total_biaya;
    double Biaya_perOrang;
    printf("\n=============================================\n");
    printf("\n          ESTIMASI BIAYA PERJALANAN          \n");
    printf("\n=============================================\n");
    printf("Masukkan jarak perjalanan (km)         : ");
    scanf("%lf", &jarak_km);

    printf("Masukkan konsumsi kendaraan (Km/L)     : ");
    scanf("%lf", &konsumsi_km_perLiter);

    printf("Masukkan Harga bahan bakar per Liter   : ");
    scanf("%lf", &Harga_bahan_bakar_perLiter);

    printf("Masukkan Jumlah penumpang              : ");
    scanf("%d", &Jumlah_penumpang);

    Kebutuhan_bahan_bakar = jarak_km / konsumsi_km_perLiter;
    Total_biaya = Kebutuhan_bahan_bakar * Harga_bahan_bakar_perLiter;
    Biaya_perOrang = Total_biaya / Jumlah_penumpang;

    printf("\n===========================================\n");
    printf("\n             HASIL PERHITUNGAN             \n");
    printf("\n===========================================\n");
    printf("Jarak Perjalanan      : %.3f Km\n", jarak_km);
    printf("Kebutuhan Bahan Bakar : %.3f Liter\n", Kebutuhan_bahan_bakar);
    printf("Total Biaya           : %.3f\n", Total_biaya);
    printf("Biaya per Orang       : %.3f\n", Biaya_perOrang);
    printf("\n===========================================\n");

    return 0;
}