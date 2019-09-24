#include <stdio.h>
#include <stdlib.h>

float average(int *arr, int ARR_SIZE) {
  float sum = 0;
  int i = 0;
  for (i = 0; i < ARR_SIZE; i += 1) {
    sum = sum + *(arr + i);
    printf("sum: %d\n", sum);
  }
  printf("ARR_SIZE: %d\n", ARR_SIZE);
  return (sum / 4.0);
}

void copy(int *arr, int *arr2, int ARR_SIZE) {
  int i;
  for (i = 0; i < ARR_SIZE; i += 1) {
    arr2[i] = arr[i];
  }
}

int length(char *s) {
  int length = 0;
  while (*(s + length) != NULL) {
    length += 1;
  }
  return length;
}
