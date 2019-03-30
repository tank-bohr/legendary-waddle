#include <stdlib.h>
#include <stdio.h>

void print_array(int a[], int len) {
  for (int i = 0; i < len; ++i) {
    printf("%d\t", a[i]);
  }
  printf("\n");
}

int main() {
  int a[] = {1, 2, 3, 4, 5};

  int len = 5;
  int *b = malloc(len * sizeof(int));
  for (int i = 0; i < len; ++i) {
    b[i] = a[i];
  }

  print_array(a, len);
  print_array(b, len);

  free(b);

  return 0;
}
