#include <stdio.h>//buborekos_javitott_II
#include <stdlib.h>

int main(int argc, char *argv[]){

    int A[10]={34,43,85,58,96,69,12,21,19,91};
    int i,j,Csere,Vege,UtolsoCsere;
    Vege=1;
    i=9;
    while(i>=1 && Vege){
         Vege=0;
         UtolsoCsere=0;
              for(j=0; j<i; j++){
              if(A[j]>A[j+1]){
              Csere=A[j];
              A[j]=A[j+1];
              A[j+1]=Csere;
              Vege=1;
              UtolsoCsere=j;
         }
    }
    i=UtolsoCsere;
}
    int k;
    for(k=0; k<10; k++){
    printf("%d, ",A[k]);
    }

system("PAUSE");	
return 0;
}
