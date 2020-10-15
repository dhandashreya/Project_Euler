#include <stdio.h>

int main() {
    long int t, n;
    long int multiples_of_3, multiples_of_5, multiples_of_15;
    long int sum;
    scanf("%ld", &t);
    for (int i = 0; i < t; i++) {
        scanf("%ld", &n);
        multiples_of_3 = (n - 1) / 3;
        multiples_of_5 = (n - 1) / 5;
        multiples_of_15 = (n - 1) / 15;
        sum = 3 * multiples_of_3 * (multiples_of_3 + 1) / 2
              + 5 * multiples_of_5 * (multiples_of_5 + 1) / 2
              - 15 * multiples_of_15 * (multiples_of_15 + 1) / 2;
        printf("%lld\n", sum);
    }  
    return 0;
}
