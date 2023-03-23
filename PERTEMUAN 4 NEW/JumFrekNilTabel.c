/*Nama File : JumFrekNilTabel.c*/
/*Deskripsi : Mengetahui jumlah dari bilangan yang lebih dari satu dari sebuah Array*/
/*Pembuat   : Arya Ajisadda Haryanto - 24060122140118*/
/*Tanggal   : Minggu, 19 Maret 2023*/

#include <stdio.h>
#include <stdlib.h>
int Frek[100];
int main()
{

    /*Kamus*/;
    int n,i,hasil;

    /*Algoritma*/;
    printf("Inputkan Jumlah Array : ");
    scanf("%d",&n);
    printf("Inputkan Nilai Array :\n");
    int Tabel[n];

    for (i=0;i<n;i++){
        scanf("%d",&Tabel[i]);
        Frek[Tabel[i]] += 1;
    }
    for (i=0;i<n;i++){
        if (Frek[Tabel[i]] > 1) {
            hasil += Tabel[i];
        }
    }
    printf("%d",hasil);
    return 0;
}

