#include <stdio.h>
#include <limits.h>

int main () {
  unsigned int i = INT_MAX;
  printf("i = %d\n", i);

  i++;
  printf("i = %d\n", i);
}
