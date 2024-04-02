#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n_rows, n_cols;
    printf("Enter the number of Rows: ");
    scanf("%d", &n_rows);
    printf("Enter the number of Columns: ");
    scanf("%d", &n_cols);

    int array[n_rows][n_cols];

    for (int row_iterator = 0; row_iterator < n_rows; row_iterator++)
    {
        for (int col_iterator = 0; col_iterator < n_cols; col_iterator++)
        {
            printf("Enter value for (%d,%d): ", col_iterator, row_iterator);
            scanf("%d", &array[row_iterator][col_iterator]);
        }
    }

    printf("Entered values:\n");
    for (int i = 0; i < n_rows; i++)
    {
        for (int j = 0; j < n_cols; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
