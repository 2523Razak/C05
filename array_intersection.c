#include <stdio.h>

void findIntersection(int arr1[], int size1, int arr2[], int size2) {
    int visited[100] = {0}; // Pour éviter les doublons
    printf("Éléments communs : ");
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j] && !visited[arr1[i]]) {
                printf("%d ", arr1[i]);
                visited[arr1[i]] = 1; // Marquer comme déjà affiché
                break;
            }
        }
    }
    printf("\n");
}

int main() {
    int size1, size2;

    // Lecture du premier tableau
   
    scanf("%d", &size1);
    int arr1[size1];
   
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Lecture du deuxième tableau
   
    scanf("%d", &size2);
    int arr2[size2];
  
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Trouver et afficher l'intersection
    findIntersection(arr1, size1, arr2, size2);

    return 0;
}
