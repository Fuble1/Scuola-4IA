/*
    Realizzare un programma per la gestione di una stringa inserita da tastiera di massimo 20 caratteri.

    x -initStringa() Richiede l'input di una stringa da tastiera.
    x -printStringa() Stampa la stringa passat.
    -printReversedString Stampa la stringa al contrario.
    x -getStrLength() Ritorna la lunghezza della stringa passata.
    -getCharAt() Ritorna il carattere della stringa alla posizione scelta; -1 se la posizione non esiste.
    -countChar() Conta e restituisce il numero di occorrenze di un carattere in una stringa.
    -checkPalindroma() Verifica si una parola è palindroma oppure no; 1 Vero 0 Falso.
*/

/*
*/
#include <stdio.h>

#define DIM 21

/**
 * Funzione che azzera una stringa ponendo il carattere '\0' in ogni singola cella.
 * @param char[] Stringa da utilizzare.
 * @param int Dimensione della stringa.
*/
void clearStr(char[], int);

/**
 * Funzione che inizializza una stringa righiedendola da tastiera.
 * @param char[] Stringa da utilizzare.
 * @param int Dimensione della stringa.
*/
void initStringa(char[], int);

void printStringa(char[], int);

int getStringLength(char[], int);

int main(){
    char str[DIM];

    clearStr(str, DIM);
    initStringa(str, DIM);
    printStringa(str, DIM);
    printf("\nStringa lunga: %d", getStringLength(str, DIM));
    return(0);
}

void clearStr(char _str[], int _dim){
    int i;
    for(i=0; i<_dim; i++)
        _str[i] = '\0';
}

void initStringa(char _str[], int _dim){
    printf("Inserisci stringa: ");
    scanf("%s", _str);
    fflush(stdin);
}

void printStringa(char _str[], int _dim){
    int i;
    i=0;
    while(_str[i] != '\0' && i<_dim){
        printf("%c", _str[i]);
        i++;
    }
    
    //printf("\n\n");
    //printf("%s", _str);
}

int getStringLength(char _str[], int _dim){
    int i;

    i=0;
    while(_str[i] != '\0' && i < _dim){
        i++;
    }
    return(i);
}