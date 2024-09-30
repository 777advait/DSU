#include <stdio.h>

int multiply(int m, int n) {
    if (m == 0 || n == 0) {
        return 0;
    }

    return (m + multiply(m, n - 1));
}

int main() {
    int m, n, result;

    printf("Enter two numbers: ");
    scanf("%d%d", &m, &n);

    result = multiply(m, n);

    printf("Result: %d", result);
    
    return 0;
}
