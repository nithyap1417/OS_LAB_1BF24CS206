#include <stdio.h>

int main() {
    int n,m;
    int i, j, k;
    printf("Enter n and m values: ");
    scanf("%d %d",&n,&m);
    printf("\nEnter Allocation matrix: ");
    int alloc[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                scanf("\n%d",&alloc[i][j]);
        }
    }
    printf("\nEnter Maximum matrix: ");
    int max[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                scanf("\n%d",&max[i][j]);
        }
    }
    int avail[3] = {3, 3, 2};
    int need[5][3];
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            need[i][j] = max[i][j] - alloc[i][j];
        }
    }
    printf("Need Matrix:\n");
    for(i = 0; i < n; i++) {
        printf("P%d : ", i);
        for(j = 0; j < m; j++) {
            printf("%d ", need[i][j]);
        }
        printf("\n");
    }
    int finish[5] = {0};
    int safeSeq[5];
    int count = 0;
    while(count < n) {
        int found = 0;
        for(i = 0; i < n; i++) {
            if(finish[i] == 0) {
                for(j = 0; j < m; j++) {
                    if(need[i][j] > avail[j])
                        break;
                }
                if(j == m) {
                    for(k = 0; k < m; k++) {
                        avail[k] += alloc[i][k];
                    }
                    safeSeq[count++] = i;
                    finish[i] = 1;
                    found = 1;
                }
            }
        }
        if(found == 0) {
            printf("\nSystem is NOT in safe state\n");
            return 0;
        }
    }
    printf("\nSystem is in SAFE state\n");
    printf("\nSafe Sequence:\n");
    for(i = 0; i < n; i++) {
        printf("P%d", safeSeq[i]);
        if(i != n - 1)
            printf(" -> ");
    }
    printf("\n");
    return 0;
}
