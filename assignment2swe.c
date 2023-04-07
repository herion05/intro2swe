#include <stdio.h>
#include <math.h>

double addition(double num1, double num2){
  double res = num1 + num2;
  return res;
}

double subtraction(double num1, double num2){
  double res = num1 - num2;
  return res;
}

double multiplication(double num1, double num2){
  double res = num1 * num2;
  return res;
}

double division(double num1, double num2){
  double res = num1 / num2;
  return res;
}

int modulus(int num1, int num2){
  int res = num1%num2;
  return res;
}

double power(double num1, double num2){
  double res = pow(num1, num2);
  return res;
}

double squareRoot(double num1){
  double res = sqrt(num1);
  return res;
}

int main(){
  char operator;
  double num1, num2, result;
  printf("Choose an operation to perform\n");
  printf("ADDITION '+'\n");
  printf("SUBTRACTION '-'\n");
  printf("MULTIPLICATION '*'\n");
  printf("DIVISION '/'\n");
  printf("MODULUS '%c'\n", 37);
  printf("POWER '^'\n");
  printf("SQUARE ROOT 's'\n");
  scanf("%c", &operator);
  printf("---------------------------\n");
  switch(operator){
    case '+':
      printf("Enter two numbers\n");
      scanf("%lf%lf", &num1, &num2);
      result = addition(num1, num2);
      break;
    case '-':
      printf("Enter two numbers\n");
      scanf("%lf%lf", &num1, &num2);
      result = subtraction(num1, num2);
      break;
    case '*':
      printf("Enter two numbers\n");
      scanf("%lf%lf", &num1, &num2);
      result = multiplication(num1, num2);
      break;
    case '/':
      printf("Enter two numbers\n");
      scanf("%lf%lf", &num1, &num2);
      result = division(num1, num2);
      break;
    case '%':
      printf("Modulus only works with integers\n");
      printf("Enter two numbers\n");
      scanf("%lf%lf", &num1, &num2);
      result = modulus(num1, num2);
      break;
    case '^':
      printf("Enter two numbers\n");
      scanf("%lf%lf", &num1, &num2);
      result = power(num1, num2);
      break;
    case 's':
      printf("Enter a number\n");
      scanf("%lf", &num1);
      result = squareRoot(num1);
      break;
  }
  printf("%.3lf", result);
}