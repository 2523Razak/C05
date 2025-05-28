#include <stdio.h>

void rotate_left(int arr[], int size) {
    // Sauvegarder le premier élément
    int first = arr[0];
    
    // Décaler tous les éléments vers la gauche
    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    // Mettre le premier élément à la fin
    arr[size - 1] = first;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Tableau avant rotation : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    rotate_left(arr, size);
    
    printf("Tableau après rotation : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
