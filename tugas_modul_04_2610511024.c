/*
Nama       : Raditya Daffa Alghani
NIM        : 2610511024
Kelas      : A
Modul      : 4
Deskripsi  : Program menghitung tarif parkir berdasarkan 
             jenis kendaraan, durasi, dan sattus member.
*/

#include <stdio.h>
#define DISKON_MEMBER 0.10
    enum JenisKendaraan{
        Motor,
        Mobil,
        Bis,
        Truck,
     };
int main(void){
    int Jenis_kendaraan;
    int Durasi_parkir;
    int Status;
    double tarif_jam_pertama;
    double tarif_jam_berikutnya;
    double tarif_maksimal;
    double tarif_awal;
    double diskon;
    double total_bayar;

    printf("================================================\n");
    printf("              PROGRAM TARIF PARKIR              \n");
    printf("================================================\n");
    printf("Masukkan durasi parkir : ");
    scanf("%d", &Durasi_parkir);

    printf("Status member :\n");
    printf("1. Bukan Member\n");
    printf("2. Member\n");
    printf("Masukkan status : ");
    scanf("%d", &Status);

    if (Durasi_parkir < 1){
        printf("Durasi tidak valid.\n");
        return 1;
      }

    if ((Status != 1 ) && (Status != 2)){
        printf("Durasi tidak valid.\n");
        return 1;
     }

    enum JenisKendaraan jenis = Truck;
     switch (jenis){
        case Motor :
          tarif_jam_pertama = 3000;
          tarif_jam_berikutnya = 1500;
          tarif_maksimal = 15000;
          break;

        case Mobil :
          tarif_jam_pertama = 5000;
          tarif_jam_berikutnya = 3000;
          tarif_maksimal = 30000;
          break;


        case Bis :
          tarif_jam_pertama = 10000;
          tarif_jam_berikutnya = 5000;
          tarif_maksimal = 60000;
          break;

        case Truck :
          tarif_jam_pertama = 12500;
          tarif_jam_berikutnya = 7000;
          tarif_maksimal = 100000;
          break;

        default :
        printf("Input tidak valid");
        return 1;
      }
    if (Durasi_parkir == 1){
        tarif_awal = tarif_jam_pertama;
        } else {
        tarif_awal = tarif_jam_pertama + (Durasi_parkir - 1) * tarif_jam_berikutnya;
      } 

         diskon = 0;
    if ((Status == 2) && (Durasi_parkir >= 2)){
        diskon = tarif_awal * DISKON_MEMBER;
        }
       total_bayar = tarif_awal - diskon;

       printf("\n                RINCIAN PARKIT               \n");
       printf("-----------------------------------------------\n");
       switch (jenis)
    {
        case Motor :
          printf("Jenis Kendaraan      : Sepeda Motor\n");
          break;

        case Mobil :
          printf("Jenis Kendaraan      : Mobil\n");
          break;

        case Bis : 
          printf("Jenis Kendaraan      : Bis\n");
          break;

        case Truck :
          printf("Jenis Kendaraan      : Truck\n");
          break;
    }
    printf("Durasi Parkir        : %d jam\n", Durasi_parkir);
    printf("Tarif awal           : Rp %.2f\n", tarif_awal);
    printf("Diskon Member        : Rp %.2f\n", diskon);
    printf("Total bayar          : Rp %.2f\n", total_bayar);
    printf("================================================\n");

    return 0;
}