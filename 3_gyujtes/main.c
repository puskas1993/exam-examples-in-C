#include <stdio.h> //gyûjtés
#include <stdlib.h>

 int main(int argc, char *argv[]) {

 int A[6]={0,0,0,0,0,0};
 int szam;

    scanf("%d",&szam);
        while(szam!=0){
            A[szam]++;
        scanf("%d",&szam);
        }

 int i;

     for(i=1; i<=5;i++){
         printf("%d:%d\n", i,A[i]);
}

system("PAUSE");
return 0;
}

