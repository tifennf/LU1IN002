#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int MAX = 100, MIN = 1;

int main() {

    srand(time(NULL));
    int mys = (rand() % (MAX - MIN + 1)) + MIN;
    int guess, try = 0, next = 1;

    while (next == 1) {
        srand(time(NULL));
        int mys = (rand() % (MAX - MIN + 1)) + MIN;
        int guess, try = 0, next = 1;

        while (guess != mys) {

            if (try == 0) {
                printf("Veillez deviner un nombre entre 1 et 100. Good luck ! "
                       "<3\n");
            } else if (guess > mys) {
                printf("C'est moins!\n");
            } else if (guess < mys) {
                printf("C'est plus !\n");
            }
            scanf("%d", &guess);
            try += 1;
        }
        printf("Félicitations vous avez trouvé!, Il vous a fallut %d essais\n",
               try);

        printf("Voulez vous faire une nouvelle partie? Tapez 0 pour non et 1 "
               "pour oui\n");
        scanf("%d", &next);
    }
    return 0;
}
