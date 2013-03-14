#include <stdio.h>   //átlag
#include <stdlib.h>

int main(int argc, char *argv[]){
    int szam, darab=0, sum=0;
    
    scanf("%d", &szam);
    while(szam!=0){
       if(szam!=0){
         darab++;
         sum=sum+szam;
    }
       scanf("%d", &szam);
}
    printf("Atlag: %d\n", sum/darab);
  
  system("PAUSE");	
  return 0;
}
