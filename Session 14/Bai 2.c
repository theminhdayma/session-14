#include <stdio.h>
#include <stdlib.h>
char* flattenArr(char arr[][2], int rows, int cols, int* size) {
    *size = rows * cols;
    char* flattenedArr = (char*)malloc(sizeof(char) * (*size));
    int index = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            flattenedArr[index] = arr[i][j];
            index++;
        }
    }
    return flattenedArr;
}
int main() {
    char arr[][2] = {{'a', 'b'}, {'c', 'b'}};
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);
    int size;
    char* flattenedArr = flattenArr(arr, rows, cols, &size);
    printf("Expected output: ");
    for (int i = 0; i < size; i++) {
        printf("'%c' ", flattenedArr[i]);
    }
    printf("\n");
    free(flattenedArr);
    return 0;
}
