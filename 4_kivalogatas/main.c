#include <stdio.h>//kivalogatas
#include <stdlib.h>

int main(int argc, char *argv[]){
    
    int A[10]={1956, 1932, 1975, 1945, 1978, 1935, 1942, 1934, 1952, 1923};
    int i;
    int ev=2013;
    
    for(i=0; i<10; i++){
        if (ev-A[i]>40){
        printf("%d \n" ,A[i]);
    }
}

  system("PAUSE");	
  return 0;
}
