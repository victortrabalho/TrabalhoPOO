#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

char* mesSV (int m)
{
    if(m==1)
      return"Janeiro";
    else if(m==2)
      return"Fevereiro";
    else if(m==3)
      return"Marco";
    else if(m==4)
      return"Abril";
    else if(m==5)
      return"Maio";
    else if(m==6)
      return"Junho";
    else if(m==7)
      return"Julho";
    else if(m==8)
      return"Agosto";
    else if(m==9)
      return"Setembro";
    else if(m==10)
      return"Outubro";
    else if(m==11)
      return"Novembro";
    else
      return"Dezembro";
}

char meses[12][10]={"janeiro","fevereiro","marco","abril","maio","junho","julho","agosto","setembro","outubor","novembro","dezembro"};
char* mesCV(int m)
{   m=m-1;
    return meses[m];
}
void main()
{
    int m;
    printf("digite um numero: ");
    scanf("%d",&m);
    printf("%s",mesCV(m));
    printf("%s",mesSV(m));

}
