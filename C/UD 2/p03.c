/*
Realizzare un programma per la gestione di una stringa inserita da tastiera (stringa allocata massimo 100byte), utilizzando un puntatore a stringa.

 initStringa() Richiede l'input di una stringa da tastiera.
 comparaStringhe() Compara due stringhe alfabeticamente, -1 se str1 precede str2; 0 se le stringhe sono uguali; +1 se str1 segue str2.
 trovaDoppie() Comunica quante doppie sono presenti nella stringa. (otto -> 1 doppia; cassetto -> 2 doppie; xxx -> 2 doppie).
*/

#include <stdio.h>
#include <stdlib.h>
#define DIM 100

// PROTOTIPI
/**
 * Funzione che inizializza una stringa richiedendola da tastiera
 * @param char* Riferimento alla stringa da utilizzare.
*/
void initStringa(char*);
/**
 * Funzione che compara alfabeticamente due stringhe.
 * @param char* Riferimento stringa 1
 * @param char* Riferimento stringa 2
 * @return int -1 se st1<st2; 0 se st1=st2; +1 se st1>st2
*/
int comparaStringhe(char*, char*);

// main
int main(){
    char *s1;
    char *s2;
    s1 = malloc(sizeof(char)*DIM);
    s2 = malloc(sizeof(char)*DIM);
    initStringa(s1);
    printf("Stringa 1 Inserita: %s\n", s1);
    initStringa(s2);
    printf("Stringa 2 Inserita: %s\n", s2);
    
    printf("\n");
    printf("Comparazione: %d", comparaStringhe(s1,s2));

    return(0);
}

void initStringa(char *_str){
    printf("Inserisci una stringa: ");
    scanf("%s", _str);
    fflush(stdin);
}

int comparaStringhe(char *_str1, char *_str2){
    int i;
    i=0;
    while(*(_str1+i)!='\0' && *(_str2+i)!='\0'){
        if(*(_str1+i) > *(_str2+i))
            return(1);
        if(*(_str1+i) < *(_str2+i))
            return(-1);
        i++;
    }
    if(*(_str1+i)=='\0' && *(_str2+i)=='\0')
        return(0);
    else{
        if(*(_str1+i)!='\0')
            return(1);
        if(*(_str2+i)!='\0')
            return(0);
    }
}