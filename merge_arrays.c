#include <stdio.h>

int main() {
    int taille1, taille2;
    
    // Lecture du premier tableau
    scanf("%d", &taille1);
    int tab1[taille1];
    for (int i = 0; i < taille1; i++) {
        scanf("%d", &tab1[i]);
    }
    
    // Lecture du deuxième tableau
    scanf("%d", &taille2);
    int tab2[taille2];
    for (int i = 0; i < taille2; i++) {
        scanf("%d", &tab2[i]);
    }
    
    // Fusion des tableaux
    int tab_fusion[taille1 + taille2];
    
    // Copie du premier tableau
    for (int i = 0; i < taille1; i++) {
        tab_fusion[i] = tab1[i];
    }
    
    // Copie du deuxième tableau
    for (int i = 0; i < taille2; i++) {
        tab_fusion[taille1 + i] = tab2[i];
    }
    
    // Affichage du résultat
    printf("Tableau fusionne : ");
    for (int i = 0; i < taille1 + taille2; i++) {
        printf("%d ", tab_fusion[i]);
    }
    printf("\n");
    
    return 0;
}
