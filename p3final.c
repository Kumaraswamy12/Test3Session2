#include<stdio.h>
void input_n_and_r(int *n, int *r)
{
  printf("Enter the value of n and r\n");
  scanf("%d%d",n,r);  
}
int fact(int n)
{
  int f=1;
  for(int i=2;i<=n;i++)
     f=f*i;
  return f;
} 
int ncr1(int n, int r)
{
  int t1,t2,t3;
  t1=fact(n);
  t2=fact(r);
  t3=fact(n-r);
  return t1/(t2*t3);
}
void output(int n, int r, int result)
{
  printf("%dC%d is %d\n",n,r,result);
}
int main()
{
  int n,r,result;
  input_n_and_r(&n,&r);
  result=ncr1(n,r);
  output(n,r,result);
  return 0;
}