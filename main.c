#include <stdio.h>
#include <stdlib.h>
#define MAX_STRLEN 30
#define MAX_FILENAME 255
struct s_studente {
char nome[MAX_STRLEN+1];
char cognome[MAX_STRLEN+1];
unsigned int eta;
char classe[MAX_STRLEN+1];
};
typedef struct s_studente studente;
int main(int argc, char** argv) {
char file[MAX_FILENAME+1];
FILE *puntafile;
studente studente;
int i;
printf("Inserisci il nome file: ");
scanf("%[^\n]s", file);
puntafile=fopen(file, "r");
if (puntafile == NULL) {
printf("Impossibile aprire il file.");
}
else {
fscanf(puntafile, "%s\n", file);
i=1;

fscanf(puntafile, "%[^;];%[^;];%d;%s\n", studente.nome, studente.cognome, &studente.eta, studente.classe);

while(!feof(puntafile)){
printf("studente %d:\n", i);
printf("nome: %s\n", studente.nome);
printf("congome: %s\n", studente.cognome);
printf("eta': %d\n", studente.eta);
printf("classe: %s\n", studente.classe);
fscanf(puntafile, "%[^;];%[^;];%d;%s\n", studente.nome, studente.cognome, &studente.eta, studente.classe);
i++;
}
fclose(puntafile);
}
return (EXIT_SUCCESS);
}