/*
  Memory Allocation Eample
  CS-300 Secure Coding
  Dr. Jason M. Pittman
  Fall 2017
*/

#include <stdio.h>

int *matvec(int **A, int *x, int n) {
  int *y = malloc(n * sizeof(int));
  int i, j;

  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      y[i] += A[i][j] * x[j];
  return y;
}
