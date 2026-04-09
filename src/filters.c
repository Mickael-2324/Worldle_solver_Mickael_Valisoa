#include <stdio.h>
#include <string.h>
#include "filters.h"

// Affiche les mots contenant une lettre donnée
void filter_contains(char words[MAX_WORDS][WORD_LEN], int count, char letter) {
    for (int i = 0; i < count; i++) {
        if (strchr(words[i], letter)) {
            printf("%s\n", words[i]);
        }
    }
}

// Affiche les mots qui ne contiennent pas une lettre donnée
void filter_exclude(char words[MAX_WORDS][WORD_LEN], int count, char letter) {
    for (int i = 0; i < count; i++) {
        if (!strchr(words[i], letter)) {
            printf("%s\n", words[i]);
        }
    }
}

// Affiche les mots contenant une sous-chaîne donnée
void filter_substring(char words[MAX_WORDS][WORD_LEN], int count, const char *substr) {
    for (int i = 0; i < count; i++) {
        if (strstr(words[i], substr)) {
            printf("%s\n", words[i]);
        }
    }
}
