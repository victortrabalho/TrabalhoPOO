//Atividade 3
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int v[100],i=0,n;
   printf("digite um numero: ");
   scanf("%d",&n);
   while(n>0)
  {
       v[i]=n%2;
       n=n/2;
       i++;
  }
  i--;
 while(i>=0)
 {
     printf("%d",v[i]);
     i--;
 }

}
