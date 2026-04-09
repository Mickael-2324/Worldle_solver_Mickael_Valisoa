#ifndef FILTERS_H
#define FILTERS_H

#define MAX_WORDS 5000
#define MAX_LEN   50

// Filtre les mots qui commencent par le préfixe donné.
// Retourne le nouveau nombre de mots.
int filter_words(char words[][MAX_LEN], int n, const char *prefix);

#endif

