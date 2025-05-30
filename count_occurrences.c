#include <stdio.h>

int main() {
    int taille, element, compte = 0;
    
    // Lire la taille du tableau
    scanf("%d", &taille);
    
    int tableau[taille];
    
    // Lire les éléments du tableau
    for (int i = 0; i < taille; i++) {
        scanf("%d", &tableau[i]);
    }
    
    // Lire l'élément à rechercher
    scanf("%d", &element);
    
    // Compter les occurrences
    for (int i = 0; i < taille; i++) {
        if (tableau[i] == element) {
            compte++;
        }
    }
    
    // Afficher le résultat comme dans l'exemple du PDF
    printf("L'element %d apparait %d fois.\n", element, compte);
    
    return 0;
}
