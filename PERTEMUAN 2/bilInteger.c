/*Nama File : bilInteger.c*/
/*Deskripsi : Menentukan bilangan N Integer*/
/*Pembuat   : Arya Ajisadda Haryanto - 24060122140118*/
/*Tanggal   : Selasa, 28 Februari 2023*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Kamus*/;
    int a;



    /*Algoritma*/;
    printf("Masukan integer :");
    if(scanf("%i", &a)){
        if (a>0){
            printf("Nilai Positif");
        }
        else if (a==0){
            printf("Nilai 0");
        }
        else if (a<0){
            printf("Nilai Negatif");
        }
    }
    else{
        printf("Bukan termasuk sebuah bilangan");
    }
    return 0;
}


