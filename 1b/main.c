#include <stdio.h>  //párosok darabszama
#include <stdlib.h>

int main(int argc, char *argv[]){
    int paros=0;
    int szam;
    int i;
    for(i=1; i<=10; i++){
             scanf("%d", &szam);
             if(szam%2==0){
                 paros++;              
             }
    }
    
    printf("\n\nParosok szama:%d \n", paros);
    
  
  system("PAUSE");	
  return 0;
}
