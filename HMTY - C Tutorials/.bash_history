int sq1_exist(int x)
{     int i=0;     for (i=0; i<=sqrt(x); i++) {
        if (i*i == x);              return 1;     }
    return 0;
}
int sq2_exist(int x, int* a1, int *a2)
{     for (int i=0; i<=sqrt(x); i++) {
        for (int j=0; j<=sqrt(x); j++) {
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
{     int i,j,k;     for (i=0; i<=sqrt(x); i++) {
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
{     int i,j,k,l;     for (i=0; i<=sqrt(x); i++) {
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
}gcc -o main *.c
gcc -o main *.c
gcc -o main *.c
gcc -std=c99 main.c
gcc -std=c99 main.c -lm -o c
./c
./c
gcc -std=c99 main.c -lm -o c
gcc -std=c99 main.c -lm -o c
./c
gcc -std=c99 main.c -lm -o cgcc -o main *.c
gcc -std=c99 main.c -lm -o c
./c
gcc -o main *.c
gcc -std=c99 main.c -lm -o c
./c
gcc -o main *.c
gcc -o main *.c
gcc -o main *.c
gcc -o main *.c
gcc -o main *.cgcc -o main *.c -lm
gcc -o main *.c -lm
main
