#include <stdio.h>
#include <string.h>
#include "filters.h"

int main() {
    char words[MAX_WORDS][WORD_LEN];
    int count = 0;

    FILE *f = fopen("ressource/bdd_wordle.txt", "r");
    if (!f) {
        perror("Erreur ouverture fichier");
        return 1;
    }

    while (fscanf(f, "%5s", words[count]) == 1) {
        count++;
    }
    fclose(f);

    printf("=== Wordle Solver ===\n");
    printf("Nombre de mots chargés : %d\n", count);

    int choix;
    char lettre;
    char substr[WORD_LEN];

    printf("\nChoisissez un filtre :\n");
    printf("1. Inclure une lettre\n");
    printf("2. Exclure une lettre\n");
    printf("3. Rechercher un substring\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            printf("Entrez une lettre : ");
            scanf(" %c", &lettre);
            filter_contains(words, count, lettre);
            break;
        case 2:
            printf("Entrez une lettre : ");
            scanf(" %c", &lettre);
            filter_exclude(words, count, lettre);
            break;
        case 3:
            printf("Entrez un substring : ");
            scanf("%s", substr);
            filter_substring(words, count, substr);
            break;
        default:
            printf("Choix invalide.\n");
    }

    return 0;
}
