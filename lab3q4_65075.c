#include <stdio.h>
int main() {
  int sum = 0;
  int count = 0;
  int number;

  while (1) {
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == 0 || number < 0) {
      break;
    }

    sum += number;
    count++;
  }

  if (count > 0) {
    float average = (float)sum / count;
    printf("The sum of the numbers is %d.\n", sum);
    printf("The average of the numbers is %f.\n", average);
  } else {
    printf("No numbers were entered.\n");
  }
}
