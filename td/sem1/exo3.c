#include <assert.h>
#include <stdio.h>

int plusGrand(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    } else if (b > a && b > c) {
        return b;
    }
    return c;
}

int main() {
    assert(plusGrand(1, 2, 3) == 3);
    assert(plusGrand(-1, 2, 1) == 2);

    printf("%d \n", plusGrand(plusGrand(1, 2, 3), 4, 5));
}
