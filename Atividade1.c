#include <stdio.h>
#include <stdlib.h>
int main()
{    int n1,n2,maior,menor;
     printf("entre co o numero 1: ");
     scanf("%d",&n1);
     printf("entre co o numero 1: ");
     scanf("%d",&n2);
     if(n1<n2)
     {
         maior=n2;
         menor=n1;
     }
     else
     {
         maior=n1;
         menor=n2;
     }
     while(maior>menor)
     {
         menor++;
         if(menor%2!=0)
         {
             printf("%d \n",menor);
         }
     }
}
