/* 
 * File:   main.c
 * Author: giivk
 *
 * Created on 2013. március 11., 18:55
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int szam=0;
    int min=0;
    int max=0;
    
    printf("Kerem, adjon meg egy szamot:\n");
    scanf("%d",&szam);
    min=szam;
    max=szam;
    printf("Kerem, ujra adjon meg egy szamot:\n");
    scanf("%d",&szam);
    while(szam!=0)
    {
        if(szam<min)
        {
            min=szam;
        }
        if(szam>max)
        {
            max=szam;
        }
        printf("Kerem adjon meg egy szamot:\n");
        scanf("%d",&szam);
    }
    
    printf("Szam; %d\n",szam);
    printf("Legkissebb: %d\n",min);
    printf("Legnagyobb: %d",max);
    
    return (EXIT_SUCCESS);
}