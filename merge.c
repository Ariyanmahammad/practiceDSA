#include <stdio.h>
#include <limits.h>

void merge(int arr[], int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1 + 1], R[n2 + 1]; // Adjusting size to hold sentinel value

    // Copying elements to L[] and R[]
    for (int i = 0; i < n1; i++) {
        L[i] = arr[p + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[q + 1 + j];
    }

    // Adding sentinel value
    L[n1] = INT_MAX;
    R[n2] = INT_MAX;

    // Merging the two halves
    int i = 0, j = 0;
    for (int k = p; k <= r; k++) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
    }
}

void mergeSort(int arr[], int p, int r) {
    if (p < r) {
        int q = p + (r - p) / 2;
        mergeSort(arr, p, q);
        mergeSort(arr, q + 1, r);
        merge(arr, p, q, r);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {2, 6, 3, 9, 5, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Given array is: \n");
    printArray(arr, size);

    mergeSort(arr, 0, size - 1);

    printf("\nSorted array is: \n");
    printArray(arr, size);

    return 0;
}
