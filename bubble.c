#include<stdio.h>

void bubbleSort(int a[],int n){
    int i , j , t , flag;
    for (int i = 0; i < n-1; i++)
   
    {    flag=0;
        for (int j = 0; j < n-1-i; j++)
        {
            if (a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                flag=1;
            }
            
        }
        if (flag==0)
        {
            break;
        }
        
        
    }
    
}
int main(){
    int n;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements: \n");
    for(int i=0;i<n;i++){
        printf("enter the elements at index %d: ",i);
        scanf("%d",&a[i]);
    }
    bubbleSort(a,n);
    printf("the sorted array is: \n");

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }


    return 0;
}