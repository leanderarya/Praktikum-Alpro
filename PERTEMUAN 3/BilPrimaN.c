/*Nama File : BilPrimaN.c*/
/*Deskripsi : Menentukan Deret Bilangan Prima*/
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
    int jum2=0;

    /*Algoritma*/;
    printf("Inputkan Bilangan : ");
    scanf("%d",&A);
    if (A>0){
        for (jum=1;jum<=A;jum++){
            jum2=0;
            for (i=1;i<=jum;i++){
                if (jum%i==0){
                    jum2+=1;
                }
            }
            if(jum2==2){
                if (jum>2){
                    printf(", ");
                }
                printf("%d",jum);
            }
        }
    }
    else {
        printf("Inputan tidak benar");
    }
    return 0;
}
