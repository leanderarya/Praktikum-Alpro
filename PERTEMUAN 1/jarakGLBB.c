/*Nama File : jarakGLBB*/
/*Deskripsi : Menghitung Jarak pada GLBB*/
/*Pembuat   : Arya Ajisadda Haryanto - 24060122140118*/
/*Tanggal   : Jum'at, 24 Februari 2023*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Kamus*/
    float v0,t,a,s;

/*Algoritma*/
    printf("Inputkan Kecepatan Awal (v0) : ");
    scanf("%f", &v0);

    printf("Inputkan Waktu dalam detik : ");
    scanf("%f", &t);

    printf("Inputkan Percepatan (a) : ");
    scanf("%f", &a);

    s = v0 * t + (0.5) * (a*pow(t,2));
    printf("Jarak GLBBnya/s adalah : %f", s);

    return 0;
}

