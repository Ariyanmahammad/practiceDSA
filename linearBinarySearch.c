#include<stdio.h>
#include<stdlib.h>
int linearSearch(int arr[],int n , int key){
   
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            printf("the element %d is present at index %d",key,i);
          
            break;
        }
    }
    return -1;


}

int main(){
    int n,key;
    printf("enter the no. of elements to be inserted inside the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the element you want to find: ");
    scanf("%d",&key);


     linearSearch(arr, n, key);


    


    return 0;
}