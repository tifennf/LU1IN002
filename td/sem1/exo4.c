#include <assert.h>

int signeSomme(int a, int b) {
    if (a > -b) {
        return 1;
    } else if (a < -b) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    assert(signeSomme(1, 1) == 1);
    assert(signeSomme(-2, 2) == 0);
    assert(signeSomme(-4, -2) == -1);
    return 0;
}
