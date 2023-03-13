/*Nama File : FaktorBil.c*/
/*Deskripsi : Menentukan Faktor Bilangan*/
/*Pembuat   : Arya Ajisadda Haryanto - 24060122140118*/
/*Tanggal   : Sabtu, 11 Maret 2023*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Kamus*/;
    int A;
    int i;


    /*Algoritma*/;
    printf("Inputkan Bilangan : ");
    scanf("%d",&i);
    printf("Faktorial dari %d adalah: \n", i);
    for(A=1 ; A<=i; A++){
        if(i % A == 0){
            printf("%d\n",A);
        }
    }
    return 0;
}

