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
    int sum=0;
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==j)
            {
                sum+=arr[i][j];
            }
        }
    }
    printf("%d",sum);
    return 0;
    
}