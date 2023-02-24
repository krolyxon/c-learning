#include <stdio.h>

int main() {
  // Notice: output of all the printf statements would be same,
  // since we are using pre-increment/decrement.
  int a;
  printf("Enter a number to be inc/decremented: ");
  scanf("%d", &a);
  printf("\npre-incremented value of a is: %d", ++a);
  printf("\npost-incremented value of a is: %d", a++);
  printf("\npre-decremented value of a is: %d", --a);
  printf("\npost-decremented value of a is: %d", a--);
}
