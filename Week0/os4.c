#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter size of array nXm: ");
    scanf("%d",&n);
    scanf("%d",&m);
    int arr[n][m];
    printf("Enter element: ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<m;j++)
        {
            sum+=arr[j][i];
        }
        printf("sum of column[i+1]: %d\n ",sum);
    }
    int sum=0;
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            sum+=arr[i][j];
        }
        printf("Sum of row[j+1]: %d",sum); 
    }

    return 0;
}