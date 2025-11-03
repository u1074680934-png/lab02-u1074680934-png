#include <stdio.h>
#include <math.h> 

int main() {
 int x;
 char op;
 int result;
 scanf("%d", &x);
 result = x;
 while(1) {
  
  scanf(" %c",&op);
  if (op == '=') {
   break;
  }
  scanf("%d",&x);
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
   printf("wrong\n");
   return 2;
  }
  result /= x;
 }
 else if (op == '^') {
  if (x == 0 && result == 0) {
   printf("wrong");
   return 3;
  }else{
   result = pow(result, x);
  }
 }
 }

 printf(" -->%d\n",result);
return 0;
}
