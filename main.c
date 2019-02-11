//
//  main.c
//  farfallino
//
//  Created by Simone Cimolato on 11/02/2019.
//  Copyright © 2019 Simone Cimolato. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

char parola[MAX];

int main(int argc, const char * argv[]) {

    printf("inserisci: ");
    gets(parola);
    
    int i,j;
    for(i = 0; i < strlen(parola); i++){
        if(parola[i] == 'a' || parola[i] == 'e' || parola[i] == 'i' || parola[i] == 'o' || parola[i] == 'u' || parola[i] == 'A' || parola[i] == 'E' || parola[i] == 'I' || parola[i] == 'O' || parola[i] == 'U'){
            
            for(j = strlen(parola); j > i; j--){
                parola[j+2] = parola[j];
                parola[j]='f';
                parola[j+1] = parola[i];
            }
            i+=2;
        }
    }
    puts(parola);
    return 0;
}
