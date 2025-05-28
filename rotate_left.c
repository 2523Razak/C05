#include <stdio.h>

int main() {
    int taille;  // Pour stocker la taille du tableau
    
    scanf("%d", &taille);  // Lire la taille du tableau
    
    int tableau[taille];  // Créer le tableau
    
    // Lire les éléments du tableau
    for (int i = 0; i < taille; i++) {
        scanf("%d", &tableau[i]);
    }
    
    // Rotation à gauche
    if (taille > 0) {
        int premier = tableau[0];  // Garder le premier élément
        
        // Décaler tous les éléments vers la gauche
        for (int i = 0; i < taille - 1; i++) {
            tableau[i] = tableau[i + 1];
        }
        
        tableau[taille - 1] = premier;  // Remettre le premier à la fin
    }
    
    // Afficher le résultat comme demandé
    printf("Tableau après rotation : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
    
    return 0;
}
