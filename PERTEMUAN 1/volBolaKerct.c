/*Nama File : volBolaKerct*/
/*Deskripsi : Menghitung volume kerucut menggunakan volume bola*/
/*Pembuat   : Arya Ajisadda Haryanto - 24060122140118*/
/*Tanggal   : Jum'at, 24 Februari 2023*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Kamus*/
    float r, vb, vk;

/*Algoritma*/
    printf("Jari-jari : ");
    scanf("%f", &r);
    vb = (4/3)*(3.14*pow(r,3));
    vk = (0.5)*vb;
    printf("Besar Volume Kerucut : %f", vk);
    return 0;
}
