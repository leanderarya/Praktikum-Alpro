/*Nama File : FrekNilTabel.c*/
/*Deskripsi : Mengetahui bilangan yang lebih dari satu dari sebuah Array*/
/*Pembuat   : Arya Ajisadda Haryanto - 24060122140118*/
/*Tanggal   : Minggu, 19 Maret 2023*/

#include <stdio.h>
#include <stdlib.h>

int Frek[100];
int main(){
    /*Kamus*/;
    int n,count;

    /*Algoritma*/;
    printf("Inputkan Jumlah Array :");
    scanf("%d", &n);
    printf("Inputkan Nilai Array :\n");
    int T[n];
    for(int i=0; i<n; i++){
        scanf("%d", &T[i]);
    }
    for (int i=0; i<n; i++){
        count = 1;
        for(int j=i+1; j<n; j++){
            if(T[i] != 0 && T[i]==T[j]){
            count++;
            T[j]=0;
            }
        }
        if(count != 1){
            printf("%d", T[i]);
        }
    }
    return 0;
}
