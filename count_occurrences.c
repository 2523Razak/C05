#include <stdio.h>

int main() {
    int n, i, element, count = 0;

    // Lecture de la taille du tableau
   
    scanf("%d", &n);

    int array[n];

    // Lecture des éléments du tableau
   
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Lecture de l'élément à rechercher
   
    scanf("%d", &element);

    // Comptage des occurrences de l'élément
    for (i = 0; i < n; i++) {
        if (array[i] == element) {
            count++;
        }
    }

    // Affichage du résultat
    printf("L'élément %d apparaît %d fois.\n", element, count);

    return 0;
}
