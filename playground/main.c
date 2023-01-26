#include <stdio.h>
#include <stdlib.h>

void transpose(int tab[], int i, int j) {
  int temp = tab[i];
  tab[i] = tab[j];
  tab[j] = temp;
}

void move_right(int tab[], int n) {
  int i = 0;
  while (i < n) {
    transpose(tab, i, n - 1);
    i += 1;
  }
}

void print_array(int tab[], int n) {
  int i = 0;
  printf("[");
  while (i < n) {
    if (i == n - 1) {
      printf(" %d ", tab[i]);
    } else {
      printf(" %d,", tab[i]);
    }
    i += 1;
  }
  printf("]");
}

int main() {
  int tab[5] = {1, 2, 3, 4, 5};

  move_right(tab, 5);

  print_array(tab, 5);

  return 0;
}
