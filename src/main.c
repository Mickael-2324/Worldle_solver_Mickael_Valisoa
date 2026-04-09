#include <stdio.h>
#include <string.h>
#include "filters.h"

int main() {
    // 🔎 Lecture du fichier dans le dossier ressource
    FILE *f = fopen("ressource/bdd_wordle.txt", "r");
    if (!f) {
        perror("Erreur ouverture fichier");
        return 1;
    }

    char words[MAX_WORDS][MAX_LEN];
    int n = 0;

    // Lecture des mots du fichier
    while (fscanf(f, "%49s", words[n]) == 1 && n < MAX_WORDS) {
        n++;
    }
    fclose(f);

    printf("Nombre de mots chargés: %d\n", n);

    char prefix[MAX_LEN] = "";

    while (n > 1) {
        char letter;
        printf("Entrez une lettre: ");
        scanf(" %c", &letter);

        int len = strlen(prefix);
        prefix[len] = letter;
        prefix[len+1] = '\0';

        n = filter_words(words, n, prefix);

        printf("Mots restants (%d):\n", n);
        for (int i = 0; i < n; i++) {
            printf("%s ", words[i]);
        }
        printf("\n");

        if (n == 0) {
            printf("Aucun mot trouvé.\n");
            break;
        }
    }

    if (n == 1) {
        printf("Mot trouvé: %s\n", words[0]);
    }

    return 0;
}

