#include<iostream>
#include<vector>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
int partition(int arr[],int n, int si , int ei){
   
    int i=si-1;
    int pivot=arr[ei];
    for(int j=si;j<ei;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[i],arr[ei]);
    return i;

}
void QS(int arr[],int n, int si, int ei){
       if(si>=ei){
        return;
    }
    int pivotIDX=partition(arr,n,si,ei);
    QS(arr,n,si,pivotIDX-1);
    QS(arr,n,pivotIDX+1,ei);
  
}
int main(){
    int arr[5]={7,9,4,6,8};
    int n=5;
    QS(arr,n,0,4);
    printArray(arr,n);

    return 0;
}