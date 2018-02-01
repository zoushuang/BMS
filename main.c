#include "stdio.h"

int MyPrint(void){
	printf("我的打印函数");
}

int CalcSum(int a, int b){
  return a + b;
}

int main(void){
  int sum;
  printf("Hello word!");
  MyPrint();
  sum = CalcSum(4, 3);
}
