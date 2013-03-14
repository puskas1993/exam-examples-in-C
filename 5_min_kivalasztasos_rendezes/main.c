#include <stdio.h>//min kivalasztasos rendezes
#include <stdlib.h>

int main(int argc, char *argv[]){
    int Tomb[9]={20,34,56,23,10,11,24,72,22};
    int i, j, Min, Csere;
        for(i=0; i<9; i++){
             Min=i;
             for(j=i+1; j<=8; j++){
                        if(Tomb[j]<Tomb[Min]){
                        Min=j;
                        }
        }
        if(Min!=i){
             Csere=Tomb[i];
             Tomb[i]=Tomb[Min];
             Tomb[Min]=Csere;    
        }
        }
        int k;
        for(k=0; k<9; k++){
                 printf("%d ""\n" ,Tomb[k]);
                 }
  system("PAUSE");	
  return 0;
}
