#include <stdio.h>
#include <string.h>
#include "filters.h"

// Filtre les mots qui commencent par le préfixe donné
int filter_words(char words[][MAX_LEN], int n, const char *prefix) {
    int new_n = 0;
    int len = strlen(prefix);

    for (int i = 0; i < n; i++) {
        if (strncmp(words[i], prefix, len) == 0) {
            strcpy(words[new_n], words[i]);
            new_n++;
        }
    }
    return new_n;
}



