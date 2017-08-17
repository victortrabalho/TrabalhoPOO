#include<stdlib.h>
#include<stdio.h>
#include <string.h>
void ordem(char (*nome1)[25],int tam1 ,char (*nome2)[25],int tam2,char (*nome3)[25],int tamT)
{
   int i ,p=0,q=0;
   for(i=0;i<tamT;i++)
   {
           if((strcmp(nome1[p],nome2[q])<1)&& p<tam1 && q<tam2)
           {
               strcpy(nome3[i],nome1[p]);
               p++;

           }
           else if((strcmp(nome2[q],nome1[p])<1) && p<tam1 && q<tam2)
           {
               strcpy(nome3[i],nome2[q]);
               q++;
           }else if(p==tam1)
             {;
               strcpy(nome3[i],nome2[q]);
               q++;
             }
            else
            {
               strcpy(nome3[i],nome1[p]);
               p++;

            }
   }
}
void main ()
{  int i,tam1,tam2,tamT;
   printf("digite o tamanho do 1: ");
   scanf("%d",&tam1);
   printf("digite o tamanho do 2: ");
   scanf("%d",&tam2);
   tamT=tam1+tam2;
   char nome1[tam1][25],nome2[tam2][25];
   char nome3[tamT][25];
   printf("\npreencha a lista 1 \n");
   for(i=0;i<tam1;i++)
   {
       printf("digite o %d° nome: \n",i+1);
       scanf("%s",nome1[i]);

   }

     printf("\npreencha a lista 2 \n");
      for(i=0;i<tam2;i++)
   {
       printf("digite o %d° nome : \n",i+1);
       scanf("%s",nome2[i]);

   }
    ordem(nome1,tam1,nome2,tam2,nome3,tamT);
    for(i=0;i<tamT;i++)
    {
        printf("%s\n",nome3[i]);
    }
}
