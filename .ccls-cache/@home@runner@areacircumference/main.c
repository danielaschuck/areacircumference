#include <math.h>
#include <stdio.h>
#include <string.h>

int main() {
  const double PI = 3.141;
  double radius;
  double circumference;
  double area;

  printf("\n enter a radius of a circle");
  scanf("%lf", &radius);
  circumference = 2 * PI * radius;
  area = PI * radius * radius;
  printf("circumference:%lf", circumference);
  printf("\narea of circumference:%lf", area);

  return 0;
}