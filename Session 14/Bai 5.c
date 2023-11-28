#include <stdio.h>
long long sumOddFibonacci(int n) {
    long long sum = 0;
    int a = 1, b = 1;
    while (a <= n) {
        if (a % 2 != 0) {
            sum += a;
        }

        int temp = a + b;
        a = b;
        b = temp;
    }
    return sum;
}
int main() {
    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);
    long long result = sumOddFibonacci(n);
    printf("Tong cac so le trong day Fibonacci nho hon %d l�: %lld\n", n, result);
    return 0;
}

