#include <stdio.h>

int main() {
    int taille1, taille2;

    // Lecture des données
    scanf("%d", &taille1);
    int tableau1[taille1];
    for (int i = 0; i < taille1; i++) {
        scanf("%d", &tableau1[i]);
    }

    scanf("%d", &taille2);
    int tableau2[taille2];
    for (int i = 0; i < taille2; i++) {
        scanf("%d", &tableau2[i]);
    }

    // Fusion des tableaux
    int tableauFusionne[taille1 + taille2];
    for (int i = 0; i < taille1; i++) {
        tableauFusionne[i] = tableau1[i];
    }
    for (int i = 0; i < taille2; i++) {
        tableauFusionne[taille1 + i] = tableau2[i];
    }

    // Affichage du résultat
    printf("Tableau fusionné : ");
    for (int i = 0; i < taille1 + taille2; i++) {
        printf("%d ", tableauFusionne[i]);
    }
    printf("\n");

    return 0;
}
