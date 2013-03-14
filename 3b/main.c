#include <stdio.h>  //párosok összege
#include <stdlib.h>

int main(int argc, char *argv[]){
    int sum=0;
    int szam;
    int i,h;
    for(i=1; i<=10; i++){
             scanf("%d", &szam);
             if(szam%2==0){
                 sum=sum+szam;              
             }
    }
    
    printf("\n\nParos szamok osszege:%d \n", sum);
    
  
  system("PAUSE");	
  return 0;
}
