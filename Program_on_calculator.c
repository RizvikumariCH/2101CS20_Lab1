//program on calculator//
#include<stdio.h>
int main(){
  char Operator;
  float p, q, result = 0;
  printf("\n Enter any one operator like +,-,*,/:");
  scanf("%c",&Operator);
  printf("Enter the values of Operators p and q\n:");
  scanf("%f%f",&p,&q);
  switch(Operator){
    case '+': result = p + q;
      break;
    case '-': result = p - q;
      break;
    case '*': result = p * q;
      break;
    case '/': result = p / q;
      break;
    default: printf("\n Invalid Operator");
  }
  printf("The value = %f",result);
  return 0;
}
