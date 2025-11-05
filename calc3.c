#include <stdio.h>
#include <math.h>
#include <string.h>


int main() {
  int first;
  int i;
  int x;
  int count;
  char op;
  int result;
  char expression[200] = ""; //kyrios pinakas, xtizoume edw olh thn ekfrash
  char temp[20]; //proswrinos pinakas, krataei to teleytaio kommati prin to enwsoume me thn 
  // upoloiph ekfrash dhladh me ton kyrio pinaka
  
  printf("give the count of numbers you want to input\n");
  scanf(" %d",&count);
  printf("give the first number\n");
  scanf(" %d",&x);
  result = x;
  first = x;
  sprintf(temp, " %d", x);
  strcat(expression, temp);
  for (int i=1; i<count; i++) {
     printf("give the operator\n");
     scanf(" %c",&op); 
     printf("give a number\n");
     scanf(" %d",&x);
    
     //ananewsh ths ekfrashs
    sprintf(temp, " %c%d", op, x); //metatrepei telesth kai arithmo se string
    strcat(expression, temp); //prosthetei sthn ekfrash    
    if (op == '+') {
     result += x;
    }
    else if (op == '-') {
     result -= x;  
    }
    else if (op == '*') {
     result *= x;
    }
    else if (op == '/') {
     if (x == 0) {
      printf("Division with zero is underfined!\n");
      return 2;
     }
     result /= x;
    }
    else if (op == '^') {
     if (x == 0 && result ==0) {
      printf("0^0 is underfined!\n");
      return 3;
     }else {
      result = pow(result, x);
     }
    }
  }
  printf("%s\n",expression);
  printf("--> %d\n",result);
}  
  
