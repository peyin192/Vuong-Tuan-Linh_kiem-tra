#include <stdio.h>

#define MAX 100

void matran(int A[MAX][MAX], int tich[MAX][MAX], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            tich[i][j] = 0;
            for (int k = 0; k < m; k++) {
                tich[i][j] += A[i][k] * A[j][k];
            }
        }
    }
}

int main() {
    int test1;
    scanf("%d", &test1);

    for (int test = 1; test <= test1; test++) {
        int a, b;
        scanf("%d %d", &a, &b);

        int A[MAX][MAX], result[MAX][MAX];
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                scanf("%d", &A[i][j]);
            }
        }
        matran(A, result, a, b);
        printf("test %d:\n", test);
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < a; j++) {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
