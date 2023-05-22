/*Nama File : pilihanSorting.c*/
/*Deskripsi : Membuat program program sederhana untuk membuat array acak dan mengurutkannya, buatkan opsi untuk sortingnya*/
/*Pembuat   : Arya Ajisadda Haryanto - 24060122140118*/
/*Tanggal   : Senin, 22 Mei 2023*/

#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[],int n){
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int Maks(int T[], int N){
    int max = T[0];
    for(int i=1;i<=N;i++){
        if(T[i]>max){
            max = T[i];
        }
    }
    return max;
}

void countingSort(int T[], int N){
    int max = Maks(T, N);

    int* count = (int*)malloc((max+1)*sizeof(int));

    for(int i=0;i<=max;i++){
        count[i] = 0;
    }
    for(int i=0;i<N;i++){
        count[T[i]]++;
    }
    for(int i=1;i<=max;i++){
        count[i] += count[i-1];
    }

    int* sortedArray = (int*)malloc(N*sizeof(int));

    for(int i=N-1;i>=0;i--){
        sortedArray[count[T[i]]-1] = T[i];
        count[T[i]]--;
    }
    for(int i=0;i<N;i++){
        T[i] = sortedArray[i];
    }
    free(count);
    free(sortedArray);
}

void insertionSort(int arr[], int n) {
    int i, temp, j;
    for (i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = temp;
    }
}

void selectionSort(int arr[], int n){
    int i, j, min, temp;
    for(i=0;i<n;i++){
        min = i;
        for (j=i+1;j<n;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, i;
    printf("=======PROGRAM SORTING===========\n");
    printf("Masukkan panjang array: ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));
    printf("Masukkan Arraynya: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray yang belum terurut:");
    printArray(arr, n);

    char sortOption;
    printf("Pilih pilihan sorting yang anda inginkan :\n");
    printf("A : Bubble Sort\n");
    printf("B : Counting Sort\n");
    printf("C : Insertion Sort\n");
    printf("D : Selection Sort\n");
    printf("\nPilihan anda : ");
    scanf(" %c", &sortOption);
    printf("Sorting yang digunakan adalah ");
    switch (sortOption) {
        case 'A':
        case 'a':
            printf("Bubble Sort\n");
            bubbleSort(arr, n);
            break;
        case 'B':
        case 'b':
            printf("Counting Sort\n");
            countingSort(arr, n);
            break;
        case 'C':
        case 'c':
            printf("Insertion Sort\n");
            insertionSort(arr, n);
            break;
        case 'D':
        case 'd':
            printf("Selection Sort\n");
            selectionSort(arr, n);
            break;
        default:
            printf("Opsi sorting tidak valid\n");
            free(arr);
            return 0;
    }

    printf("\nArray yang sudah terurut: ");
    printArray(arr, n);

    free(arr);
    printf("=======PROGRAM SELESAI===========\n");
    return 0;
}
