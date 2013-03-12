/* 
 * File:   main.c
 * Author: giivk
 *
 * Created on 2013. március 12., 0:29
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int tiz=0,paros=0,szam=0;
    
    for(tiz=0;tiz<10;tiz++)
    {
        printf("Kerem, adjon meg egy szamot:\n");
        scanf("%d",&szam);
        if(szam%2==0)
        {
            paros++;
        }
    }
    printf("Parosak szama: %d",paros);
    
    return (EXIT_SUCCESS);
}
