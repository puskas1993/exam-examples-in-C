#include <stdio.h>  //3-al oszthatók darabszama
#include <stdlib.h>

int main(int argc, char *argv[]){
    int k=0, szam;
    
             scanf("%d", &szam);
             while(szam!=0){
             if(szam%3==0){
                 k++;              
             }
                  scanf("%d", &szam);
             }
             
             
    
    
    printf("\n3-al oszthatok szama: %d \n", k);
    
  
  system("PAUSE");	
  return 0;
}
