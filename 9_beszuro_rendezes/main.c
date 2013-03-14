#include <stdio.h>//beszuro_rendezes
#include <stdlib.h>

int main(int argc, char *argv[]){
    
    int A[9]={22,34,57,23,21,1,24,74,22};
    int i, j, x;
    
    for(i=1; i<9; i++){
             j=i-1;
             x=A[i];
        while(i>=0 && x<A[j]){
             A[j+1]=A[j];
             j=j-1;
             }
             A[j+1]=x;
        }
        int k;
        for(k=0; k<9; k++){
                 printf("%d,",A[k]);
        }
  system("PAUSE");	
  return 0;
}

