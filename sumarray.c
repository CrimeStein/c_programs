#include <stdio.h>
#define SIZE 12

int main(void)
{

  // use an init list to init array
  int a[SIZE] = {1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45};
  int total = 0; // sum of array

  // sum contents of array a
  for (size_t i=0; i < SIZE; ++i) {
    total += a[i];
  }

  printf("Total of array a element values is %d\n", total);
}

