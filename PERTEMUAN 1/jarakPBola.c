/*Nama File : jarakPBola*/
/*Deskripsi : Menghitung Jarak pada Gerak Parabola*/
/*Pembuat   : Arya Ajisadda Haryanto - 24060122140118*/
/*Tanggal   : Jum'at, 24 Februari 2023*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Kamus*/
    float vo, t, s;

/*Algoritma*/
    printf("Tuliskan kecepatan awal (V0): ");
    scanf("%f", &vo);
    printf("Tuliskan t (dalam detik): ");
    scanf("%f", &t);
    s = vo*t-(0.5)*(10*pow(t,2));
    printf("Maka jarak gerak parabola sebesar %f", s);

    return 0;
}

