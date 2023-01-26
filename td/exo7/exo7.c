#include <stdio.h>
#define MAX 6

int premier(int n) {
    int i = 2;
    while (i < n) {
        if (n % i == 0) {
            return 0;
        }
        i += 1;
    }
    return 1;
}

void affiche_nombres_premiers(int n) {
    int i = 0;
    while (i < n) {
        if (premier(i)) {
            printf("%d ", i);
        }
        i += 1;
    }
}

int main() {
    affiche_nombres_premiers(MAX);
    return 0;
}
