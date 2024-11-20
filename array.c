#include <stdio.h>

void insertElement(int arr[], int *size, int element, int position) {
    if (position < 0 || position > *size) {
        printf("Invalid position!\n");
        return;
    }

    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    (*size)++;
}


int findElement(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1; 
}


void deleteElement(int arr[], int *size, int position) {
    if (position < 0 || position >= *size) {
        printf("Invalid position!\n");
        return;
    }

    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}


void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100];
    int size = 0;
    int choice, element, position;

    while (1) {
        printf("\nArray Operations:\n");
        printf("1. Insert Element\n");
        printf("2. Find Element\n");
        printf("3. Delete Element\n");
        printf("4. Display Array\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &element);
                printf("Enter position to insert (0 to %d): ", size);
                scanf("%d", &position);
                insertElement(arr, &size, element, position);
                break;
            case 2:
                printf("Enter element to find: ");
                scanf("%d", &element);
                position = findElement(arr, size, element);
                if (position != -1) {
                    printf("Element found at position: %d\n", position);
                } else {
                    printf("Element not found!\n");
                }
                break;
            case 3:
                printf("Enter position to delete (0 to %d): ", size - 1);
                scanf("%d", &position);
                deleteElement(arr, &size, position);
                break;
            case 4:
                displayArray(arr, size);
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
