#include <stdio.h>
#include <math.h>
//
int main () {
  int x1, x2;
  int c;
  char op; 
  int result;
    
  printf("Give first operand: ");
  if (scanf("%d", &x1) != 1) {
    // !=1 den egine epityxhs anagnwsh mias timhs, o xrhsths edwse kati pou den einai arithmos den tha diabasei kati ara tha epistrepsei 0 oxi 1
      printf("wrong\n");
      return 1;
 }
  printf("Give operator (+,-,*,/,^): ");
  scanf(" %c", &op); 
 
    if (op != '+' && op != '-' && op != '*' && op != '/' && op != '^') {
         printf("Invalid operant: %c .Only [+,-,*,/,^] allowed!\n", op);
         return 1;
    }
    c = getchar(); //pairnei ton epomeno xarakthra wste na elegthei an diabasthkan 2 op
    if (c != '\n' && c != EOF) { //an o epomenos den einai to keno kai an den briskomaste sto telos twn eisodwn tote exei enan parapanw operator
       printf("more than 1 operator\n");
       return 1;
    }
  printf("Give second operand: ");
  if (scanf(" %d", &x2) != 1) {
      printf("wrong\n");
      return 1;
  }
  
  //addition
  if (op == '+') {
   result= x1 + x2;
   
  }
  //subtraction
  else if (op == '-') {
    result=  x1 - x2;
  }
  //multiplication
  else if (op == '*') {
    result = x1 * x2;
  }
  //division
  else if (op == '/') {
    if (x2 == 0) {
      printf("Division with zero is underfined!\n");
      return 2;
    }
    result = x1 / x2;
  }
  else if (op == '^') {
     if (x1 == 0 && x2 == 0) {
        printf("0^0 is underfined!\n");
        return 3;
     }else { 
        result= pow(x1, x2);   
     }
     
  }
  
   
  printf("--> %d %c %d = %d\n", x1, op, x2, result);
  return 0;
}
