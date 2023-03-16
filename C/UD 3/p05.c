/** Realizzare un programma C che tramite le opportune funzioni, gestisca l'elenco di pezzi di ricambio per un magazzino.
    Le funzionalità richieste sono le seguenti:
    - Inserimento nuovo ricambio nel catalogo (in modo non ordinato)
    - Ricerca ricambi per descrizione.
    - Ricerca ricambi per quantità.
    - Modifica quantità di un determinato ricambio.
    - Cancellazione di un ricambio dal catalogo.
    - mostrare l'elenco completo.
    - mostrare i ricambi prossimi all'esaurimento (quantità <=5 unità)

    Il prodotti sono identificati da (descrizione, matricola(char[5]), quantità, prezzo), il file deve essere nominato "catalogo.bin".

    Il programma deve avere un menu operativo (switch-case) per le diverse operazioni.
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char descrizione;
    char matricola[5];
    int quantita;
    int prezzo;
}prodotto;

int main(){

    prodotto p;
    int scelta=0;

    printf("\nMenu principale:\n");
        printf("1. Inserimento nuovo ricambio nel catalogo\n");
        printf("2. Ricerca ricambi per descrizione\n");
        printf("3. Ricerca ricambi per quantità\n");
        printf("4. Modifica quantità di un determinato ricambio\n");
        printf("5. Cancellazione di un ricambio dal catalogo\n");
        printf("6. Mostrare l'elenco completo\n");
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);

        switch (scelta) {
            case 1:
                //;
                break;
            case 2:
                //;
                break;
            case 3:
                //;
                break;
            case 4:
                //;
                break
            case 5:
                //;
                break
            case 6:
                //;
                break
            case 0:
                printf("Uscita.\n");
                break;
            default:
                printf("Scelta non valida.\n");
        }

    return 0;
}

void nuovoprodotto(prodotto *_p){
    printf("Inserisci Nome: ");
    scanf("%s", (*_p).nome);
    fflush(stdin);
    printf("Inserisci Matricola: ");
    scanf("%f", &(*_p).matricola);
    fflush(stdin);
    printf("Inserisci quantita': ");
    scanf("%d", &(*_p).quantita);
    fflush(stdin);
    printf("Inserisci prezzo: ");
    scanf("%s", (*_p).prezzo);
    fflush(stdin);
    
}

void scriviFile(Prodotto _p){
    FILE *fpOut = fopen(_filename, "a+");
    fwrite(&_p, sizeof(Prodotto), 1, fpOut);
    fclose(fpOut);
}
