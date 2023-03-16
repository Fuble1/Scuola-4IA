/*  
    Creare un programma che richiede parole in input le inserisce in un file di testo,
    una sotto l'altra, e termina se viene inserita la parola fine.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void inputParola(char[]);

void scriviSuFile(char[], FILE *);

int main(){
    char s[20];
    FILE *punt;
    punt = fopen("parole.txt", "wt");   //nome del file, metodo di apertura
    do{
        //printf("Inserisci una parola: ");		//commentato per la funz inputparole
        //scanf("%s", s);
        inputParola(s);
        
        if(strcmp(s, "fine") != 0){
        //fputs(s, punt);		// commento per la funz scriviSuFile
        //fputc('\n', punt); 
        scriviSuFile(s, punt);
        }
    }while(strcmp(s, "fine") != 0);
    fclose(punt);

    return 0;
}

void inputParola(char _parole[]){
	printf("Inserisci una parola: ");
	scanf("%s", _parole);
}

void scriviSuFile(char _parole[], FILE *_punt){
	fputs(_parole, _punt);
    fputc('\n', _punt);
}



