
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definisci le costanti
#define N 3
#define MAX_STRLEN 30
#define FNAME "elenco.csv"

// Definisci il tipo di dato struct s_studente
struct s_studente {
    char nome[MAX_STRLEN+1];
    char cognome[MAX_STRLEN+1];
    int eta;
    char classe[MAX_STRLEN+1];
};

// Definisci studente come struct s_studente
typedef struct s_studente studente;

int main(int argc, char** argv) {
    studente elenco[N];
    int i, c;
    FILE *puntaFile;
    
    puntaFile = fopen(FNAME, "w");
    if(puntaFile == NULL) {
        fprintf(stderr,"Errore nell'apertura del file %s\n", FNAME);
        exit(1);
    }
    
    fprintf(puntaFile, "nome;cognome;eta';classe\n");
    for(i = 0; i < N; i++) {
        printf("Inserisci il nome %d : ", i);
        scanf("%s", elenco[i].nome);
        printf("Inserisci il cognome %d : ", i);
        scanf("%s", elenco[i].cognome);
        printf("Inserisci l'eta' %d : ", i);
        scanf("%d", &(elenco[i].eta));
        printf("Inserisci la classe %d : ", i);
        scanf("%s", elenco[i].classe); 
        c = fprintf(puntaFile, "%s;%s;%d;%s\n", elenco[i].nome, elenco[i].cognome, elenco[i].eta, elenco[i].classe);
        if(c < 0) {
            fprintf(stderr, "Errore di scrittura nel file\n");
            exit(2);
        }
    }
    fclose(puntaFile);
    printf("Dati salvati nel file %s\n", FNAME);
    return (EXIT_SUCCESS);
}
