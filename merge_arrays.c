#include <stdio.h>

int main() {
    int taille1, taille2;  // Tailles des tableaux
    
    // Saisie du premier tableau
    scanf("%d", &taille1);
    int tableau1[taille1];
    for (int i = 0; i < taille1; i++) {
        scanf("%d", &tableau1[i]);
    }
    
    // Saisie du deuxième tableau
    scanf("%d", &taille2);
    int tableau2[taille2];
    for (int i = 0; i < taille2; i++) {
        scanf("%d", &tableau2[i]);
    }
    
    // Création du tableau fusionné
    int tailleFusion = taille1 + taille2;
    int tableauFusion[tailleFusion];
    
    // Copie du premier tableau
    for (int i = 0; i < taille1; i++) {
        tableauFusion[i] = tableau1[i];
    }
    
    // Copie du deuxième tableau
    for (int i = 0; i < taille2; i++) {
        tableauFusion[taille1 + i] = tableau2[i];
    }
    
    // Affichage du résultat
    printf("Tableau fusionne : ");
    for (int i = 0; i < tailleFusion; i++) {
        printf("%d ", tableauFusion[i]);
    }
    printf("\n");
    
    return 0;
}
