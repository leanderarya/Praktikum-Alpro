/*Nama File : gayaSentr*/
/*Deskripsi : Menghitung Besar gaya Sentripetal*/
/*Pembuat   : Arya Ajisadda Haryanto - 24060122140118*/
/*Tanggal   : Jum'at, 24 Februari 2023*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Kamus*/
    float m,v,r,F ;

/*Algoritma*/
    printf("Massa benda (kilogram) adalah: ");
    scanf("%f", &m);

    printf("Kecepatan: ");
    scanf("%f", &v);

    printf("Jari-jari: ");
    scanf("%f", &r);

    F = m * (v*v/r);
    printf("Besar gaya sentripetal yang terjadi adalah %f", F);

    return 0;
}
