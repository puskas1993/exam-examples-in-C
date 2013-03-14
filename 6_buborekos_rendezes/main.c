#include <stdio.h>//buborekos rendezes
#include <stdlib.h>

int main(int argc, char *argv[]){
    int A[9]={21,34,57,23,12,11,24,72,22};
    int i, j, Csere;
    
    for(i=8; i>=0; i--){
              for(j=0; j<=i-1; j++){
                       if(A[j]>A[j+1]){
                              Csere=A[j];
                              A[j]=A[j+1];
                              A[j+1]=Csere;                         
                       }                    
              }
    }
    
    int k;
    for(k=0; k<9; k++){
             printf("%d ,",A[k]);
    }
    
  system("PAUSE");
  return 0;
}
