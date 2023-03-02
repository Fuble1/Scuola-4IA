/** 
 *  Realizzare un algoritmo che gestendo l'input di ipotetici studenti (cognome, nome, anno di nascita) 
 *  ed un file chiamato classe.bin inserisce gli studenti, li visualizza e permette di ricercare uno studente.
 *  L'inserimento degli studenti dovrebbe essere realizzato in modo tale da avere sempre un file con nominativi ordinati per cognome.
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struttura Studente
typedef struct {
    char cognome[20];
    char nome[20];
    int anno[5];
}Studente;

// prototipi delle funzioni
void inserisci_studente(FILE *fp);
void visualizza_studenti(FILE *fp);
void cerca_studente(FILE *fp);

int main() {
    int scelta;
    FILE *fp;

    // apertura del file "classe.bin" in modalità lettura/scrittura
    fp = fopen("classe.bin", "rb+");
    if(fp == NULL) {
        // se il file non esiste, lo si crea in modalità scrittura
        fp = fopen("classe.bin", "wb+");
        if(fp == NULL) {
            printf("Impossibile creare il file \"classe.bin\".\n");
            exit(1);
        }
    }

    // menu principale
    do {
        printf("\nMenu principale:\n");
        printf("1. Inserisci uno studente\n");
        printf("2. Visualizza tutti gli studenti\n");
        printf("3. Cerca uno studente\n");
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);

        switch (scelta) {
            case 1:
                inserisci_studente(fp);
                break;
            case 2:
                visualizza_studenti(fp);
                break;
            case 3:
                cerca_studente(fp);
                break;
            case 0:
                printf("Uscita.\n");
                break;
            default:
                printf("Scelta non valida.\n");
        }
    } while (scelta != 0);

    // chiusura del file
    fclose(fp);

    return 0;
}

void inserisci_studente(FILE *fp) {
    Studente studente, studente_temp;

    // input dei dati dello studente
    printf("Inserisci il cognome dello studente: ");
    scanf("%s", studente.cognome);
    printf("Inserisci il nome dello studente: ");
    scanf("%s", studente.nome);
    printf("Inserisci l'anno di nascita dello studente: ");
    scanf("%d", &studente.anno);

    // posizionamento del puntatore di file all'inizio
    rewind(fp);

    // ricerca del punto di inserimento in ordine alfabetico per cognome
    while (fread(&studente_temp, sizeof(Studente), 1, fp) == 1) {
        if (strcmp(studente.cognome, studente_temp.cognome) < 0) {
            // se il cognome dello studente corrente è minore del cognome dello studente nel file,
            // si posiziona il puntatore di file alla posizione precedente
            fseek(fp, -sizeof(Studente), SEEK_CUR);
            break;
        }
    }

    // scrittura dello studente nel file
    fwrite(&studente, sizeof(Studente), 1, fp);