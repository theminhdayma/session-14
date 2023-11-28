#include <stdio.h>
int sum(int arr[2]){
    int start = arr[0];
    int end = arr[1];
    int total = 0;
    if (start > end){
        int temp = start;
        start = end;
        end = temp;
    }
    for (int i = start; i <= end; i++){
        total += i;
    }
    return total;
}
int main(){
    int arr1[] = {1, 4};
    int result1 = sum(arr1);
    printf("Sum: %d\n", result1);
    int arr2[] = {4, 1};
    int result2 = sum(arr2);
    printf("Sum: %d\n", result2);
    return 0;
}
