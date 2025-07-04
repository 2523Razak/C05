#include <stdio.h>

int main() {
    int n1, n2;

    // Lecture de la taille du premier tableau
    
    scanf("%d", &n1);
    int arr1[n1];
   
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Lecture de la taille du deuxième tableau
    
    scanf("%d", &n2);
    int arr2[n2];
    
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Fusion des deux tableaux
    int merged[n1 + n2];
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    // Affichage du tableau fusionné
    printf("Tableau fusionné : ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
