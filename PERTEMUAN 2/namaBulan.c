/*Nama File : namaBulan.c*/
/*Deskripsi : Memberikan output berupa nama Bulan*/
/*Pembuat   : Arya Ajisadda Haryanto - 24060122140118*/
/*Tanggal   : Selasa, 28 Februari 2023*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Kamus*/
    char a;



    /*Algoritma*/
    printf("Masukan 1-12 : ");
    scanf("%c",&a);
    switch(a){
    case'1':
        printf("Januari");
        break;
    case'2':
        printf("Februari");
        break;
    case'3':
        printf("Maret");
        break;
    case'4':
        printf("April");
        break;
    case'5':
        printf("Mei");
        break;
    case'6':
        printf("Juni");
        break;
    case'7':
        printf("Juli");
        break;
    case'8':
        printf("Agustus");
        break;
    case'9':
        printf("September");
        break;
    case'10':
        printf("Oktober");
        break;
    case'11':
        printf("November");
        break;
    case'12':
        printf("Desember");
        break;
    default:
        printf("Masukan nomor bulan tidak tepat");
        break;
    }

    return 0;
}




