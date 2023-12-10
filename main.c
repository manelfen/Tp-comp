#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<time.h>
#include<math.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>



int Fibo_Rec(int n) {
    if (n <= 1)
        return n;
    else
        return Fibo_Rec(n - 1) + Fibo_Rec(n - 2);
}
int Fibo_iter(int n) {
    int a = 0, b = 1, next, i;

    if (n <= 1)
        return n;

    for (i = 2; i <= n; ++i) {
        next = a + b;
        a = b;
        b = next;
    }

    return b;
}


double Fibo_iter_with_ratio(int n) {
    double a = 0, b = 1, next, ratio;

    if (n <= 1)
        return n;

    printf("n = 0, Un = %.0f,   le rapport = N/A\n", a);
    printf("n = 1, Un= %.0f,    le rapport = N/A\n", b);
int i;
    for ( i = 2; i <= n; ++i) {
        next = a + b;
        ratio = b != 0 ? next / b : 0; // Avoid division by zero
        printf("n = %d, Un = %.0f,   le rapport = %f\n", i, next, ratio);

        a = b;
        b = next;
    }

    return b;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    clock_t start_time = clock();  // Enregistrez le temps de début
    printf("Fibo_Rec(%d) = %d\n", n, Fibo_Rec(n));

    // printf("Fibo_iter(%d) = %d\n", n, Fibo_iter(n));


         /*double result = Fibo_iter_with_ratio(n);

    printf("Fibo_iter(%d) = %.0f\n", n, result);*/






    clock_t end_time = clock();  // Enregistrez le temps de fin

    double cpu_time_used = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
    printf("Le temps d'execution est de %.6f secondes.\n", cpu_time_used);


    return 0;
}
