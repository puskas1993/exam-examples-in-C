#include <stdio.h>//buborekos_javitott_I
#include <stdlib.h>

int main(int argc, char *argv[]){
    
    int A[9]={21,34,57,23,12,11,24,72,22};
    int i, j, Csere, Vege;
    Vege=1;
    i=9;
    while(i>=1 && Vege){
        Vege=0;
        for(j=0; j<i; j++){
            if(A[j]>A[j+1]){
                Csere=A[j];
                A[j]=A[j+1];
                A[j+1]=Csere;
                Vege=1;
                }
            }
            i--;
    }
    int k;
    for(k=0; k<9; k++){
             printf("%d ,", A[k]);
    }

  system("PAUSE");	
  return 0;
}

