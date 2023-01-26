#include <stdio.h>

double multi(int a, double b) {
    return a * b;
}

int main() {
    printf("%.2f\n", multi(2, 3.0));
    return 0;
}
