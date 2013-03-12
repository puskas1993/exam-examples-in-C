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
    int tiz=0;
    int parosok=0;
    int szam=0;
    
    while(tiz!=10)
    {
        printf("Kerem, adjon meg egy szamot:\n");
        scanf("%d",&szam);
        if(szam%2=0) //itt valami nem stimmel
        {
            parosok++;
            tiz++;
        }
        printf("Kerem, ujra adjon meg egy szamot:\n");
        scanf("%d",&szam);
        tiz++;
    }
    printf("Parosok szama: %d",parosok);
    
    return (EXIT_SUCCESS);
}
