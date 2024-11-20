#include<stdio.h>
#define maxSize 100
void insertionSort(int a[],int n){
    int i , j , key;
    for ( j = 0; j < n; j++)
    {   key=a[j];
        i=j-1;
        while (i>=0 && a[i]>key)
        {
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=key;
        
    }
    

}
int main(){
    int n, i;
    printf("Enter number of elements (<= 100): ");
    scanf("%d", &n);
    

    int a[maxSize];
    

    for (i = 0; i < n; i++) {
        printf("Elemnt at the position %d is : ",i);
        scanf("%d", &a[i]);
    }
    
    insertionSort(a, n);
    
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}