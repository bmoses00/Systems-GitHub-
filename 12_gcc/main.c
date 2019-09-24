#include <stdio.h>
#include <stdlib.h>

int main() {
  int ARR_SIZE = 4;
  int arr[ARR_SIZE];
  arr[0] = 7;
  arr[1] = 19;
  arr[2] = 23;
  arr[3] = 2;
  float avg = average(arr, ARR_SIZE);
  printf("please be 12.75: %f\n", avg);

  int arr2[ARR_SIZE];
  arr2[0] = 3;
  arr2[1] = 10;
  arr2[2] = 8;
  arr2[3] = 5;
  copy(arr, arr2, ARR_SIZE);

  int i;
  for (int i = 0; i < ARR_SIZE; i += 1) {
    printf("el %d: %d\n", i, arr2[i]);
  }
  char *s = "greetings";
  printf("len: %d\n", length(s));
}
