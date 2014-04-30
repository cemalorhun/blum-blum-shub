#include <stdio.h>
#include <stdlib.h>

/*BLUM BLUM SHUB*/

int main(int argc, char *argv[])
{
    
  int p,q,M;
  int i,s,N,x[N];
  
  printf("olusturmak isrediginiz rastgele dizinin eleman sayisini giriniz : ");
  scanf("%d",&N);
  
  printf("dizinin ilk elemanini belirleyiniz : ");
  scanf("%d",&s);
  
  printf("p asal sayisini giriniz : ");
  scanf("%d",&p);
  
  printf("q asal sayisini giriniz : ");
  scanf("%d",&q);
  
  M=p*q;
  
  i=0;
  x[0]=s;
  for(i=1;i<N;i++){
                    x[i]=(x[i-1]*x[i-1])%M;
                   }
  for(i=0;i<N;i++){
                    printf(" x[%d] = %d\n",i,x[i]);
                    }
  
  system("PAUSE");	
  return 0;
}
