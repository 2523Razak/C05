#include <stdio.h>

int main() {
    int n;

    // Demander la taille du tableau
   
    scanf("%d", &n);

    if (n <= 0) {
        printf("La taille du tableau doit être positive.\n");
        return 1;
    }

    int array[n];

    // Remplir le tableau
   
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Trouver le plus petit élément
    int min = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }

    // Afficher le résultat
    printf("Le minimum est : %d\n", min);

    return 0;
}
