/*Nama File : */
/*Deskripsi : */
/*Pembuat   : Nama - NIM*/
/*Tanggal   : Hari, tanggal, jam*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Kamus*/;
    char p;
    int iA;
    int iB;
    int i;
    float f;
    float B;


    /*Algoritma*/;
    printf("Bilangan 1 : ");
    scanf("%d", &iA);
    printf("Bilangan 2 : ");
    scanf("%d", &iB);
    printf("Pilihan Operasi : ");
    scanf(" %c", &p);

    switch (p){
        case 'a' :
            i = iA + iB;
            printf("Hasil operasi a: %d", i);
            break;
        case 'b':
            i = iA - iB;
            printf("Hasil operasi b: %d", i);
            break;
        case 'c':
            i = iA * iB;
            printf("Hasil operasi c: %d", i);
            break;
        case 'd':
            B = iB;
            f = iA / B;
            printf("Hasil operasi d: %f", f);
            break;
        case 'e':
            i = iA / iB;
            printf("Hasil operasi e: %d", i);
            break;
        case 'f':
            i = iA % iB;
            printf("Hasil operasi f: %d", i);
            break;
        default:
            printf("Bukan pilihan menu yang benar");
            break;
    }
    return 0;
}

