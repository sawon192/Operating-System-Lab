#include <stdio.h>

int main() {
    int n, bt, wt = 0, tat = 0;
    float tot_wt = 0, tot_tat = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("\nProcess\tBurst\tWaiting\tTurnaround\n");

    for (int i = 1; i <= n; i++) {
        printf("Enter Burst Time for P%d: ", i);
        scanf("%d", &bt);

        tat = wt + bt;

        printf("P%d\t%d\t%d\t%d\n", i, bt, wt, tat);

        tot_wt += wt;
        tot_tat += tat;

        wt += bt;
    }

    printf("\nAverage Waiting Time = %.2f", tot_wt / n);
    printf("\nAverage Turnaround Time = %.2f\n", tot_tat / n);

    return 0;
}
