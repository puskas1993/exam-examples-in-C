#include <stdio.h> /*rendezett keresés lineáris sorozatban*/
#include <stdlib.h>

int main(int argc, char *argv[]){
    int A[10]={2,3,6,9,12,23,45,67,89,99};
    int i=0;
    int Adat=12;
    int Talalt=0;
    while((i<=10) && (A[i]<Adat)){
                 i=i+1;
           }
           
    if((i<=10) && (A[i]==Adat)) {
             printf("%d adat a %d helyen van \n",Adat,i);
             }else{
                   printf("Nincs talalat \n");
             }
              
  system("PAUSE");	
  return 0;
}
