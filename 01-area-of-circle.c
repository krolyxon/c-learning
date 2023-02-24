#include <stdio.h>
// Area of circle = pi*r^2

int main() {
  const float pi = 3.14;
  int a;
  printf("Enter the radius of the circle: ");
  scanf("%d", &a);
  printf("The area of the circle is: %f sq unit\n", pi * (a * a));
}
