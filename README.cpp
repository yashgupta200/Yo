include <stdio.h>
void main() {
    int n;
    printf("Enter the number of rows ");
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            printf("Enter the element ");
            scanf("%d", &a[i][j]);
        }
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++) {
            a[i][j] += a[j][i];
            a[j][i] = a[i][j] - a[j][i];
            a[i][j] -= a[j][i];
        }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
