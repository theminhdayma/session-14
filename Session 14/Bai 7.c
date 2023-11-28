#include <stdio.h>
#include <stdlib.h>
int contains(int* arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return 1;  
        }
    }
    return 0; 
}
int* uniqueArray(int* arr1, int size1, int* arr2, int size2, int* size3) {
    int max_size = size1 + size2;
    int* result = (int*)malloc(max_size * sizeof(int));
    int count = 0;
    for (int i = 0; i < size1; i++) {
        if (!contains(result, count, arr1[i])) {
            result[count] = arr1[i];
            count++;
        }
    }
    for (int i = 0; i < size2; i++) {
        if (!contains(result, count, arr2[i])) {
            result[count] = arr2[i];
            count++;
        }
    }
    *size3 = count;
    return result;
}
int main() {
    int arr1[] = {1, 2, 1, 3};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {3, 3, 5};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size3;
    int* result = uniqueArray(arr1, size1, arr2, size2, &size3);
    printf("Unique array: ");
    for (int i = 0; i < size3; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    free(result); 
    return 0;
}
