#include <stdio.h>

int main(void) {
  // getting the user input
  float x, y;

  // getting x
  printf("x: ");
  scanf("%d", &x);

  // getting y
  printf("y: ");
  scanf("%d", &y);

  // getting the mode of operation
  char mode;
  printf("Mode (+, -, *, /): ");
  mode = getchar();

  // performing the operation
  float value = 0.0;
  switch(mode) {
    case '+':
      value = x + y;
      break;
    case '-':
      value = x - y;
      break;
    case '*':
      value = x * y;
      break;
    case '/':
      value = x / y;
      break;
    default:
      printf("Error: incorrect mode of operation\n");
      return 1;
  }

  // printing the final value
  printf("Value: %.2f\n", value);

  return 0;
}
}
