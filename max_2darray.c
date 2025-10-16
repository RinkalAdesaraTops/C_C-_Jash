#include <stdio.h>
int main()
{
    int m, n, i, j, max, sum = 0, anti_sum = 0;
    printf("Enter row & column size:");
    scanf("%d %d", &m, &n);
    int arr[m][n];
    printf("\n Enter elements of array:");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    max = arr[0][0];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
            if (i == j || i + j == 2)
            {
                sum = sum + arr[i][j];
            }
            // if(i == j){
            //     sum = sum+arr[i][j];
            // }
            // if(i+j == 2){
            //     anti_sum +=arr[i][j];
            // }
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n Maximum element is %d", max);
    printf("\n Sum of Cross diagonal element are %d", sum);
    // printf("\n Sum of Anti diagonal element are %d", anti_sum);
}