#include <stdio.h>//linearis kereses rendezetlen tombben
#include <stdlib.h>

int main(int argc, char *argv[]){
    int A[9]={20,34,56,23,10,11,24,72,22};
    int i,j, Csere;
    int K=11;
    int Talalt=0;
    
    for(i=8; i>=2; i--){
              for(j=0; j<=i-1; j++){
                       if(A[j]>A[j+1]){
                             Csere=A[j];
                             A[j]=A[j+1];
                             A[j+1]=Csere;
                             }
                       }
              }
              while((i<9) && (A[i]!=K)){
                 i++;
           }
           
    if(i<=8){
             printf("%d ez az adat a %d helyen található \n",K,i);
             }else{
                   printf("%d a keresett adat nem talalhato \n", K,i);}
              int k;
              for(k=0; k<8; k++){
                       printf("%d, \n",A[k]);
              }

  system("PAUSE");	
  return 0;
}
