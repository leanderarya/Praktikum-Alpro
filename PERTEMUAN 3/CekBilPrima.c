/*Nama File : CekBilPrima.c*/
/*Deskripsi : Menentukan Bilangan Prima*/
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
    if(A>0){
        for (i=1;i<=A;i++){
            if(A%i==0){
                jum+=1;
            }
        }
        if (jum==2){
            printf("Bilangan Prima");
        }
        else{
            printf("Bukan Bilangan Prima");
        }
    }
    else{
        printf("Inputan tidak benar");
    }
    return 0;
}


