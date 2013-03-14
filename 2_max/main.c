#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[]){

    int szam=0;
    int max=0;
    
    printf("Kerem, adjon meg szamotokat, majd ha be szeretné fejezni a 0-t:\n");
    scanf("%d",&szam);
    max=szam;
    scanf("%d",&szam);
    while(szam!=0){
        if(szam>max)
        {
            max=szam;
        }
        scanf("%d",&szam);
    }
   
    printf("Legnagyobb: %d\n",max);


  system("PAUSE");	
  return 0;
}
