/*Nama File : Arya Ajisadda Haryanto*/
/*Deskripsi : Menentukan nama hari dari Inputan Integer*/
/*Pembuat   : Arya Ajisadda Haryanto - 24060122140118*/
/*Tanggal   : Selasa, 28 Februari 2023*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Kamus*/;
    int a;

    /*Algoritma*/;
    printf("Masukan 1-7 : ");
    scanf("%i",&a);
    switch(a){
    case 1:
        printf("Senin");
        break;
    case 2:
        printf("Selasa");
        break;
    case 3:
        printf("Rabu");
        break;
    case 4:
        printf("Kamis");
        break;
    case 5:
        printf("Jumat");
        break;
    case 6:
        printf("Sabtu");
        break;
    case 7:
        printf("Minggu");
        break;
    default:
        printf("Masukan nomor hari tidak tepat");
        break;
    }

    return 0;
}



