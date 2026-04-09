#ifndef FILTERS_H
#define FILTERS_H

#define MAX_WORDS 10000
#define WORD_LEN  6

// Filtres disponibles
void filter_contains(char words[MAX_WORDS][WORD_LEN], int count, char letter);
void filter_exclude(char words[MAX_WORDS][WORD_LEN], int count, char letter);
void filter_substring(char words[MAX_WORDS][WORD_LEN], int count, const char *substr);

#endif
