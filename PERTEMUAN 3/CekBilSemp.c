/*Nama File : CekBilSemp.c*/
/*Deskripsi : Menentukan Bilangan Sempurna*/
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
        for (i=1;i<A;i++){
            if(A%i==0){
                jum+=i;
            }
        }
        if (jum==A){
            printf("Bilangan Sempurna");
        }
        else{
            printf("Bukan Bilangan Sempurna");
        }
    }
    else{
        printf("Inputan tidak benar");
    }
    return 0;
}


