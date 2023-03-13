/*Nama File : JumDeret.c*/
/*Deskripsi : Menghitung jumlah deret bil tersebut*/
/*Pembuat   : Arya Ajisadda Haryanto - 24060122140118*/
/*Tanggal   : Sabtu, 11 Maret 2023*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Kamus*/;
    int A;
    int i;
    int jum=0;


    /*Algoritma*/;
    printf("Inputkan Bilangan : ");
    scanf("%d",&A);
    if (A>0){
        for(i=1;i<=A;i++){
            jum+=i;
        }
        printf("Jumlah dari Inputan diatas adalah %d",jum);
    }
    else{
        printf("Inputan Tidak Benar");
    }
    return 0;
}
