#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/* Askisi 1 */
int sq1_exist (int x);
int sq2_exist (int x, int* a1, int *a2);
int sq3_exist (int x, int* a1, int* a2, int* a3);
int sq4_exist (int x, int *a1, int* a2, int* a3, int *a4);

int main()
{
    time_t t = clock();

    int x, a1, a2, a3, a4;
    int counter[4] = { 0,0,0,0 };

    for (x=1; x<=1000; x++)
    {

        if ( sq1_exist(x) )
        {
            counter[0]++;
            printf("%4d = teleio tetragwno \n", x);
        }
        else if ( sq2_exist(x, &a1, &a2) )
        {
            counter[1]++;
            printf("%d = %d^2 + %d^2 \n", x, a1, a2);
        }
        else if ( sq3_exist(x, &a1, &a2, &a3) )
        {
            counter[2]++;
            printf("%d = %d^2 + %d^2 + %d^2 \n", x, a1, a2, a3);
        }
        else
        {
            counter[3]++;
            sq4_exist(x, &a1, &a2, &a3, &a4);
            printf("%d = %d^2 + %d^2 + %d^2 + %d^2 \n", x, a1, a2, a3, a4);
        }

    }

    printf("SQ1: %d \n", counter[0]);
    printf("SQ2: %d \n", counter[1]);
    printf("SQ3: %d \n", counter[2]);
    printf("SQ4: %d \n", counter[3]);

    t = clock() - t;
    printf("Finished in Time: %f sec \n", (float) t / CLOCKS_PER_SEC);
}

int sq1_exist(int x)
{
    int i=0;
    for (i=0; i<=sqrt(x); i++) {
        if (i*i == x)
            return 1;
    }

    return 0;
}

int sq2_exist(int x, int* a1, int *a2)
{
    int i, j;
    for (i=0; i<=sqrt(x); i++) {
        for (j=0; j<=sqrt(x); j++) {
            if (i*i + j*j == x) {
                *a1 = i;
                *a2 = j;
                return 1;
            }
        }
    }
    return 0;
}

int sq3_exist(int x, int* a1, int* a2, int* a3)
{
    int i,j,k;
    for (i=0; i<=sqrt(x); i++) {
        for (j=0; j<=sqrt(x); j++) {
            for (k=0; k<=sqrt(x); k++) {
                if (i*i + j*j + k*k == x) {
                    *a1 = i;
                    *a2 = j;
                    *a3 = k;
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sq4_exist(int x, int *a1, int* a2, int* a3, int *a4)
{
    int i,j,k,l;
    for (i=0; i<=sqrt(x); i++) {
        for (j=0; j<=sqrt(x); j++) {
            for (k=0; k<=sqrt(x); k++) {
                for (l=0; l<=sqrt(x); l++) {
                    if (i*i + j*j + k*k + l*l == x) {
                        *a1 = i;
                        *a2 = j;
                        *a3 = k;
                        *a4 = l;
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}
