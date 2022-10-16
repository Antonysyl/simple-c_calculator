#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/**
 * This calculator was created by me at a beginners level of C programming language
 * added basic operators in this program
 * if you are reading this and you want to create your first simplifed c calculator you are free to use this program
 * go through it, add some other operators used in calculators e.t.c
 */

int main(int argc, char *argv[])
{
  float valueOne;
  float valueTwo;
  char operator;
  float answer;

  printf("Enter calculation:\n\n");
  scanf("%f %c %f", &valueOne, &operator, & valueTwo);

  switch(operator)
    {
    case '/': answer = valueOne/valueTwo;
      break;
    case '*': answer = valueOne*valueTwo;
      break;
    case '+': answer = valueOne+valueTwo;
      break;
    case '-': answer = valueOne-valueTwo;
      break;
    case '^': answer = pow(valueOne,valueTwo);
      break;
    case ' ': answer = sqrt(valueTwo);
      break;
    default: goto fail;
    }
  printf("%.9g%c%.9g =  %.6g\n\n",valueOne,operator, valueTwo, answer);
  goto exit;
 fail:
  printf("Fail.\n");
 exit:
  return 0;
}
