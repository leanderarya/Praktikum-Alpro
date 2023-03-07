/*Nama File : hitungTahanan.c*/
/*Deskripsi : menghasilkan total tahanan jika dirangkai seri*/
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
    printf("Tahanan 1 : ");
    scanf("%d",&t1);
    printf("Tahanan 2 : ");
    scanf("%d", &t2);
    printf("Tahanan 3 : ");
    scanf("%d", &t3);

    if(t1>=0 && t2>=0 && t3>=0){
        total = t1+t2+t3;
        printf("Total tahanan = %d\n", total);
    }
    else{
        printf("Masukkan tahanan tidak boleh negatif");
    }





    return 0;
}



