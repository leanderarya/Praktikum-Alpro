/*Nama File : NilMax2Tabel.c*/
/*Deskripsi : Mengetahui nilai maks kedua dari sebuah Array*/
/*Pembuat   : Arya Ajisadda Haryanto - 24060122140118*/
/*Tanggal   : Minggu, 19 Maret 2023*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Kamus*/;
    int N,i,Maks1,Maks2;
    Maks1 = 0;
    Maks2 = 0;

    /*Algoritma*/;
    printf("Input Jumlah Array: ");
    scanf("%d",&N);
    printf("Inputkan Nilai Array:\n");
    int Tabel[N];
    for (i=1;i<=N;i++){
        scanf("%d",&Tabel[i]);
        if(Tabel[i]>Maks1){
            Maks2=Maks1;
            Maks1=Tabel[i];
        }
        else{
            if(Tabel[i]>Maks2&Tabel[i]<Maks1){
                Maks2=Tabel[i];
            }
        }
    }
    printf("%d",Maks2);
    return 0;
}

