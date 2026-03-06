/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    int at[10],bt[10],ct[10],tat[10],wt[10];
    printf("\nEnter number of processes: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
            printf("\nEnter Arrival time and Burst time for P%d ",i+1);
            scanf("%d %d",&at[i],&bt[i]);}
   ct[0] = at[0] + bt[0];
   for(i = 1; i < n; i++) {
        if(ct[i-1] < at[i])
            ct[i] = at[i] + bt[i];
        else
            ct[i] = ct[i-1] + bt[i];
        }
        for(i = 0; i < n; i++) {
                tat[i] = ct[i] - at[i];
                wt[i] = tat[i] - bt[i];
        }
        printf("\nP\tAT\tBT\tCT\tTAT\tWT\n");
        for(i = 0; i < n; i++) {
            printf("P%d\t%d\t%d\t%d\t%d\t%d\n",
            i+1, at[i], bt[i], ct[i], tat[i], wt[i]);
        }
    return 0;
}*/




