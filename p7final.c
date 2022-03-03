#include <stdio.h>

struct fraction {
int num, den;
};
typedef struct fraction Fraction;

int gcd(int a, int b);

int main(){
  printf("%d\n", gcd(16,24));
}
int gcd(int a, int b){
  int t;
  while(b!=0){
    t = b;
    b = a%b;
    a = t;
  }
  return a;
}
