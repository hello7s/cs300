/*
  Memory Leak Eample
  CS-300 Secure Coding
  Dr. Jason M. Pittman
  Fall 2017
*/

#include <stdlib.h>
#include <stdio.h>

int main(void) {

  char *mem = (char*) malloc(sizeof(char) * 20);

  if (mem == NULL) {
    fprintf(stderr, "Unable to allocate enough memory\n");
    return -1;
  }

  mem = (char*) malloc(sizeof(char) * 30);

  if (mem == NULL) {
    fprintf(stderr, "Unable to allocate enough memory for array\n");
    return -1;
  }

  free(mem); // which 'mem' is deallocated?

  return 0;
}
