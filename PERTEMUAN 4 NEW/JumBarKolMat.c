/*Nama File : JumBarKolMat.c*/
/*Deskripsi : Mengetahui jumlah dari Masing-masing Baris dan Kolom*/
/*Pembuat   : Arya Ajisadda Haryanto - 24060122140118*/
/*Tanggal   : Kamis, 23 Maret 2023*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Kamus*/;
    int N,i,j,sumKolom,sumBaris;

    /*Algoritma*/;
    printf("Inputkan jumlah Array : ");
    scanf("%d",&N);
    printf("T :");
    int T[N][N];

    for (i=0;i<N;i++){
        sumBaris = 0;
        for (j=0;j<N;j++){
            scanf("%d",&T[i][j]);
            sumBaris += T[i][j];
        }
        printf("%d\n",sumBaris);
    }
    for (i=0;i<N;i++){
        sumKolom = 0;
        for (j=0;j<N;j++){
            sumKolom += T[j][i];
        }
        printf("%d\n",sumKolom);
    }
    return 0;
}
