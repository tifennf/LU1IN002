#include <assert.h>
#include <math.h>
#include <stdio.h>

int discriminant(int a, int b, int c) {
    return b * b - 4 * a * c;
}

void afficheRacines(int a, int b, int c) {
    int disc = discriminant(a, b, c);

    if (disc < 0) {
        printf("delta < 0 donc le polynome n'a pas de racines reelles.");
    } else if (disc == 0) {
        double root = -b / (2.0 * a);
        printf("delta = 0 donc le polynome a une racine double: %.2f\n", root);
    } else {
        double root1 = (-b + sqrt(disc)) / 2.0 * a;
        double root2 = (-b - sqrt(disc)) / 2.0 * a;

        printf("delta > 0 donc le polynome possède deux racines réelles: %.2f "
               "et %.2f\n",
               root1, root2);
    }
}

int main() {
    assert(discriminant(4, 4, 1) == 0);
    assert(discriminant(4, 6, 1) > 0);
    assert(discriminant(-7, -5, -1) < 0);
    afficheRacines(4, 4, 1);
    return 0;
}
