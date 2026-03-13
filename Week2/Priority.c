#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,choice;

    printf("Enter number of processes: ");
    scanf("%d",&n);

    int at[n],bt[n],rt[n],pr[n];
    int ct[n],wt[n],tat[n];

    for(i=0;i<n;i++){
        printf("Enter AT, BT and Priority of P%d: ",i+1);
        scanf("%d%d%d",&at[i],&bt[i],&pr[i]);
        rt[i]=bt[i];
    }

    printf("\n1. Non Preemptive Priority\n");
    printf("2. Preemptive Priority\n");
    printf("Enter choice: ");
    scanf("%d",&choice);
    int time=0,count=0;

    if(choice==1){
        int completed[n];
        for(i=0;i<n;i++) completed[i]=0;

        while(count<n){
            int idx=-1;
            int highest=9999;

            for(i=0;i<n;i++){
                if(at[i]<=time && completed[i]==0){
                    if(pr[i]<highest){
                        highest=pr[i];
                        idx=i;
                    }
                }
            }

            if(idx!=-1){
                time+=bt[idx];

                ct[idx]=time;
                tat[idx]=ct[idx]-at[idx];
                wt[idx]=tat[idx]-bt[idx];

                completed[idx]=1;
                count++;
            }
            else{
                time++;
            }
        }
    }

    else if(choice==2){
        while(count<n){
            int idx=-1;
            int highest=9999;

            for(i=0;i<n;i++){
                if(at[i]<=time && rt[i]>0){
                    if(pr[i]<highest){
                        highest=pr[i];
                        idx=i;
                    }
                }
            }

            if(idx!=-1){
                rt[idx]--;
                time++;

                if(rt[idx]==0){
                    ct[idx]=time;
                    tat[idx]=ct[idx]-at[idx];
                    wt[idx]=tat[idx]-bt[idx];
                    count++;
                }
            }
            else{
                time++;
            }
        }
    }

    printf("\nP\tAT\tBT\tPR\tCT\tTAT\tWT\n");

    for(i=0;i<n;i++){
        printf("P%d\t%d\t%d\t%d\t%d\t%d\t%d\n",
        i+1,at[i],bt[i],pr[i],ct[i],tat[i],wt[i]);
    }

    return 0;
