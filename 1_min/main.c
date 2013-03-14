#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[]){

    int szam=0;
    int min=0;
    
    
    printf("Kerem, adjon meg szamokat majd ha be szeretné fejezni üsse le a 0-t:\n");
    scanf("%d",&szam);
    min=szam;
    scanf("%d",&szam);
    while(szam!=0)
    {
        if(szam<min)
        {
            min=szam;
        }
        scanf("%d",&szam);
    }
    
    printf("Legkissebb: %d\n",min);


  system("PAUSE");	
  return 0;
}
