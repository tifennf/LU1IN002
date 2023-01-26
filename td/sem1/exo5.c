#include <stdio.h>
#define TNORMAL 11.4
#define TMOINS14 4.5
#define TMOINS26S 4.9
#define TMOINS26WE 7.90
#define TMATIN 7.10

double prixPlace(int age, int jour, double heure) {
    if (age <= 14) {
        return TMOINS14;
    } else if (age <= 26 && jour < 6) {
        return TMOINS26S;
    } else if (heure <= 11.0 && heure >= 8.0) {
        return TMATIN;
    } else if (age <= 26 && jour >= 6) {
        return TMOINS26WE;
    } else {
        return TNORMAL;
    }
}

int main() {
    printf("12 ans; Lundi; 17 heures; -> prix: %.2f\n", prixPlace(12, 1, 17.0));
    printf("16 ans; Lundi; 17 heures; -> prix: %.2f\n", prixPlace(16, 1, 17.0));
    return 0;
}
