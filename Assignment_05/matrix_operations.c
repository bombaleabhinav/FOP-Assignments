#include <stdio.h>

// matrix operations menu
void addMatrices(int r, int c) {
    int mat1[10][10], mat2[10][10], result[10][10];
    int i, j;

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &mat2[i][j]);

    printf("Sum of matrices:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

void saddlePoint(int r, int c) {
    int mat[10][10], i, j, k;
    int min_val, col_idx, is_saddle, found = 0;

    printf("Enter elements of matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    for (i = 0; i < r; i++) {
        min_val = mat[i][0];
        col_idx = 0;
        for (j = 1; j < c; j++) {
            if (mat[i][j] < min_val) {
                min_val = mat[i][j];
                col_idx = j;
            }
        }
        is_saddle = 1;
        for (k = 0; k < r; k++) {
            if (mat[k][col_idx] > min_val) {
                is_saddle = 0;
                break;
            }
        }
        if (is_saddle) {
            printf("Saddle point at (%d, %d) = %d\n", i, col_idx, min_val);
            found = 1;
        }
    }
    if (!found)
        printf("No saddle point found.\n");
}

void magicSquare(int n) {
    int mat[10][10], i, j;
    int row_sum, col_sum, diag1 = 0, diag2 = 0, target;
    int is_magic = 1;

    printf("Enter elements of %dx%d matrix:\n", n, n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    target = 0;
    for (j = 0; j < n; j++)
        target += mat[0][j];

    for (i = 0; i < n; i++) {
        row_sum = 0;
        for (j = 0; j < n; j++)
            row_sum += mat[i][j];
        if (row_sum != target) { is_magic = 0; break; }
    }

    if (is_magic) {
        for (j = 0; j < n; j++) {
            col_sum = 0;
            for (i = 0; i < n; i++)
                col_sum += mat[i][j];
            if (col_sum != target) { is_magic = 0; break; }
        }
    }

    if (is_magic) {
        for (i = 0; i < n; i++) {
            diag1 += mat[i][i];
            diag2 += mat[i][n - 1 - i];
        }
        if (diag1 != target || diag2 != target)
            is_magic = 0;
    }

    if (is_magic)
        printf("The matrix is a Magic Square (sum = %d)\n", target);
    else
        printf("The matrix is NOT a Magic Square\n");
}

int main() {
    int choice, rows, cols;

    printf("Matrix Operations Menu:\n");
    printf("1. Addition of two matrices\n");
    printf("2. Saddle point of a matrix\n");
    printf("3. Magic square check\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter rows and columns: ");
            scanf("%d %d", &rows, &cols);
            addMatrices(rows, cols);
            break;
        case 2:
            printf("Enter rows and columns: ");
            scanf("%d %d", &rows, &cols);
            saddlePoint(rows, cols);
            break;
        case 3:
            printf("Enter size of square matrix: ");
            scanf("%d", &rows);
            magicSquare(rows);
            break;
        default:
            printf("Invalid choice\n");
    }

    // array based processing
    return 0;
}
// made by abhinav
