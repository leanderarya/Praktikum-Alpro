/*Nama File : luaskellLayang*/
/*Deskripsi : Menghitung luas dan keliling bangun datar layang-layang*/
/*Pembuat   : Arya Ajisadda Haryanto - 24060122140118*/
/*Tanggal   : Jum'at, 24 Februari 2023*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Kamus*/
    float s1,s2,d1,d2,luas,kell;

/*Algoritma*/
    printf("Masukkan sisi 1 : ");
    scanf("%f",&s1);
    printf("Masukkan sisi 2 : ");
    scanf("%f",&s2);
    printf("Masukkan diagonal 1 : ");
    scanf("%f",&d1);
    printf("Masukkan diagonal 2 : ");
    scanf("%f",&d2);

    luas = (0.5)*d1*d2;
    kell = 2*(s1+s2);

    printf("Nilai Luas : %f \nNilai Keliling : %f",luas,kell);
    return 0;
}
