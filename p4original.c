#include<stdio.h>
int input_array_size(){
  int x;
  printf("enter the size\n");
  scanf("%d",&x);
  return x;
}
void int_array(int n,int a[n]){
  for(int i=2;i<=n;i++)
    {
      a[i]=i;
    }
}
void erotosthenes_sieve(int n,int a[n]){
  for(int i=2;i<=n;i++)
    {
      if(a[i]%2==0 || a[i]%3==0 || a[i]%5==0 || a[i]%7==0)
        printf("");
      else
        printf("%d",a[i]);
    }
}
void output(int n,int a[n])
{
  printf("2,");
  for(int i=2;i<=7;i++)
    {
      if(a[i]%2!=0)
        printf("%d",a[i]);
    }
}
int main()
{
  int n,a[n];
  n=input_array_size();
  int_array(n,a);
  output(n,a);
  erotosthenes_sieve(n,a);
  return 0;
}