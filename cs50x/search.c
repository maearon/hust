#include <cs50.h>
#include <stdio.h>

int main(void) {
  int numbers[] = {20, 500, 10, 5, 100, 1, 50};

  int n = get_int("Number: ");
  for (int i = 0; i <7; i++) {
    if (numbers[i] == n)
    {
      printf("Found\n");
      return 0;
    }
    // else
    // {
    //   printf("Not found\n"); 
    // }
  }
  printf("Not found\n");
  return 1;
}

// gcc -o search search.c -lcs50
// ./search
// gdb ./search
