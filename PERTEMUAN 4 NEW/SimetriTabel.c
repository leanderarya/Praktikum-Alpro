/*Nama File : SimetriTabel.c*/
/*Deskripsi : Mengetahui Kesimetrian 2 Tabel*/
/*Pembuat   : Arya Ajisadda Haryanto - 24060122140118*/
/*Tanggal   : Selasa, 21 Maret 2023*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Kamus*/;
    int N,M,T1[100],T2[100],i,count;

    /*Algoritma*/;
    printf("Masukkan ukuran T1 : ");
    scanf("%d", &N);
    printf("Masukkan elemen array T1 :\n");
    for(i = 0; i < N; i++){
        scanf("%d", &T1[i]);
    }
    printf("Masukkan ukuran T2 : ");
    scanf("%d", &M);
    printf("Masukkan elemen array T2 :\n");
    for (i = 0; i < M; i++){
        scanf("%d", &T2[i]);
    }
    if (N == M){
        count = 0;
        for (i = 0; i < N; i++){
            if (T1[i] == T2[i]){
                count++;
            }
        }
        if (count == N){
            printf("Simetri");
        }
        else{
            printf("Tidak Simetri");
        }
    }
    else{
        printf("Tidak Simetri");
    }
    return 0;
}
