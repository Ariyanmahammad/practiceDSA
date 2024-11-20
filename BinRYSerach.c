// #include<stdio.h>
// #include<stdlib.h>
// int binarySearch(int arr[],int n, int key){
//     int l=0,u=n-1;
//     while(l<=u){
//          int mid=(l+u)/2;
//         if(arr[mid]==key){
//           printf("the element %d is present at index %d",key,mid);
//           break;
//         }
//         else if(key>arr[mid]){
//             l=mid+1;
//         }else{
//             u=mid-1;
//         }
//     }
//     return -1;

// }
// int main(){
//     int n,key;
//     printf("enter the no. of elements to be inserted inside the array: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("enter the elements of the array: \n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("enter the element you want to find: ");
//     scanf("%d",&key);





//       binarySearch(arr, n, key);

   


//     return 0;
// }


#include<stdio.h>
#include<stdlib.h>
int binarySearch(int arr[],int n, int key){
    int l=0,u=n-1;
    while(l<=u){
        int mid=(l+u)/2;
        if(arr[mid]==key){
            printf("the required element %d is present at index %d",key,mid);
            break;
        }
        else if(key>arr[mid]){
            l=mid+1;
        }else{
            u=mid-1;
        }

     
       

    }
     return -1;
}
int main(){
    int n,key;
    printf("enter the no. of elements in the array you wants to insert: ");
    scanf("%d",&n);
    int arr[n];
   for(int i=0;i<n;i++){
      printf("enter the element at index %d: ",i);
      scanf("%d",&arr[i]);
   }

   printf("\n");

   printf("enter the element you wants to find: ");
   scanf("%d",&key);

   binarySearch(arr,n,key);

    return 0;
}