#include <stdio.h>
#include <stdlib.h>
int main(){
    double x, start, delta, finish;
    unsigned int N, var, n;
    printf("Enter variant 1 or 2:"); // Вибір варіанту: 1 чи 2
    scanf("%u", &var);
    while(var != 1 && var != 2)
    {
    printf("Wrong variant\n");
    printf("Enter variant 1 or 2:\n");
    scanf("%u", &var);
    }

    if(var == 1){
        printf("N = ");
        scanf("%u", &N);
        while(N < 0)
        {
            printf("N must be >= 0");
            scanf("%u", &N);
        }
        if(N == 0)
        {
            printf("Mission Complete");
            getch();
            exit(0);
        }
        else
        {
            printf("\n\nstart=");
            scanf("%lf", &start);
            do
            {
                printf("finish=");
                scanf("%lf", &finish);
            }while(finish == 0.0 && N > 1 && finish > start);
            delta = finish/N;
        }
    }
    if(var == 2)
    {

        printf("\n\nstart=");
        scanf("%lf", &start);
        do
        {
            printf("finish=");
            scanf("%lf", &finish);
        }while(finish == 0.0 && finish > start);
        printf("\ndelta=");
        scanf("%lf", &delta);
        N = finish/delta;
    }
        if(N == 1)
            {
                system("cls");
                printf("Only one raw\n");
                printf("start=%.2lf\n", start);
                printf("+------+------------------------+");
                printf("\n");
                printf("|%6d|%24.2lf|", N, (start*start)-start);
                printf("\n");
                printf("+------+------------------------+");
            }
            else
            {
                system("cls");
                printf("start=%.2lf\n", start);
                printf("+------+------------------------+");

                x = start;

                for(n = 1;n<=N;n++)
                {
                    printf("|%6d|%24.2lf|", n, (x*x)-x);
                    printf("\n");
                    printf("+------+------------------------+");
                    printf("\n");

                    x = x + delta;

                    if(n%11 == 0)
                    {
                        printf("Press any key\r");
                        getch();
                    }
                }

            }
        }

