#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int size = 0;

    // Initialization
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size > MAX_SIZE || size <= 0) {
        printf("Invalid size. Size should be greater than 0 and less than or equal to %d\n", MAX_SIZE);
        return 1; // Exiting with an error
    }

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Display
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Insertion
    int element, position;
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position to insert: ");
    scanf("%d", &position);

    if (position < 0 || position > size) {
        printf("Invalid position. Insertion failed.\n");
    } else {
        if (size < MAX_SIZE) {
            for (int i = size; i > position; i--) {
                arr[i] = arr[i - 1];
            }
            arr[position] = element;
            size++;
            printf("Element inserted successfully.\n");
        } else {
            printf("Array is full. Insertion failed.\n");
        }
    }

    // Display after insertion
    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Deletion
    printf("Enter the position to delete: ");
    scanf("%d", &position);

    if (position < 0 || position >= size) {
        printf("Invalid position. Deletion failed.\n");
    } else {
        for (int i = position; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
        printf("Element deleted successfully.\n");
    }

    // Display after deletion
    printf("Array after deletion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
