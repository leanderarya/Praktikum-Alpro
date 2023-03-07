/*Nama File : CekSegitiga.c*/
/*Deskripsi : Mengecek sebuah segitiga dari inputan 3 Integer*/
/*Pembuat   : Arya Ajisadda Haryanto - 24060122140118*/
/*Tanggal   : Selasa, 28 Februari 2023*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Kamus*/
    int t1;
    int t2;
    int t3;
    int total;

    /*Algoritma*/
    printf("Bilangan 1 : ");
    scanf("%d",&t1);
    printf("Bilangan 2 : ");
    scanf("%d", &t2);
    printf("Bilangan 3 : ");
    scanf("%d", &t3);

    if((t1>0)&&(t2>0)&&(t3>0)){
        if (t1 == t2 && t1 == t3 && t2 == t3){
            printf("Segitiga sama sisi");
        }
        else if (t1==t2 || t1==t3 || t2==t3){
            printf("Segitiga sama kaki");
        }
        else{
            printf("Segitiga sembarang");
        }
    }
    else{
        printf("Terdapat nilai yang bukan sisi segitiga");
    }
    return 0;
}



