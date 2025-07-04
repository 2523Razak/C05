#include <stdio.h>

void rotate_left(int arr[], int size) {
    if (size <= 1) return; // Pas besoin de rotation pour un tableau de taille 0 ou 1

    int first = arr[0];
    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = first;
}

int main() {
    int size;

    scanf("%d", &size);

    if (size <= 0) {
        printf("Taille invalide.\n");
        return 1;
    }

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    rotate_left(arr, size);

    printf("Tableau après rotation : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
