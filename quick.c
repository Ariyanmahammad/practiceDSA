#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;

}
int partition(int arr[],int p, int r){
    int x=arr[r];
    int i=p-1;
    for (int j = p; j < r ; j++) {
        if (arr[j] <= x) {
            i++;
            swap(&arr[i], &arr[j]);  
        }
    }
    swap(&arr[i + 1], &arr[r]);  
    return i + 1;
}

void quickSort(int arr[],int p, int r){
    if(p<r){
        int q=partition(arr, p , r);
        quickSort(arr,p,q-1);
        quickSort(arr,q+1,r);
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = {12, 4, 13, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array: ");
    printArray(arr, size);

    quickSort(arr, 0, size - 1);

    printf("Sorted array: ");
    printArray(arr, size);

    return 0;
}