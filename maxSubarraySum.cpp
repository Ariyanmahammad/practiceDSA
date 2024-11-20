// #include<iostream>
// #include<limits.h>
// using namespace std;

// void subArraySum1(int*arr,int n){ //Brute Force Approach
//     int maxSum=INT_MIN;
//     for (int start = 0; start < n; start++)
//     {
//         for (int end  = start; end < n; end++)
//         {   
//             int currSum=0;
//             for (int i = start; i <= end; i++)
//             {
//                 currSum+=arr[i];
//             }
//             maxSum=max(currSum,maxSum);
            
//         }
//         cout<<endl;
        
//     }
//     cout<<"max subarray sum is : "<<maxSum<<endl;
    
// }
// void subArraySum2(int *arr,int n){
//     int maxSum=INT_MIN;
//     for (int start = 0; start < n; start++)
//     {   
//         int currSum=0;
//         for (int end = start; end < n; end++)
//         {
//             currSum+=arr[end];
//             maxSum=max(currSum,maxSum);
//         }
        
//     }
//     cout<<"max sum= "<<maxSum<<endl;
    
// }
// void subArraySum_kadanesAlgorithm(int *arr, int n){
//     int currSum = arr[0];
//     int maxSum = arr[0];

//     for (int i = 1; i < n; i++) {
//         currSum = max(arr[i], currSum + arr[i]); 
//         maxSum = max(currSum, maxSum);           
//     }

//     cout << "max sum: " << maxSum << endl;
// }

// int main(){
    // int arr[6]={2,-3,6,-5,4,2};
    // int n= sizeof(arr)/sizeof(int);
//     subArraySum_kadanesAlgorithm(arr,n);

//     return 0;
// }


#include<iostream>
#include<limits.h>
using namespace std;
void bruteForce(int *arr, int n){ //O(n^3)

    int maxSum=INT_MIN;
    for (int s = 0; s < n; s++) //s-starting index , e- ending index 
    {   
        for(int e=s;e<n;e++){
            int currSum=0;  //......imp
            for(int i=s;i<=e;i++){ //i<=e ........imp
                currSum+=arr[i];
            }
            maxSum=max(currSum,maxSum);
        }
        
    }
    cout<<"max sum: "<<maxSum<<endl;
    
}

void slightlyOptimized(int *arr,int n){ //O(n^2)
    
    int maxSum=INT_MIN;
    for(int start=0;start<n;start++){
        int currSum=0;//.........imp
        for(int end=start;end<n;end++){
            currSum+=arr[end];
            maxSum=max(currSum,maxSum);
            

        }
    }
    cout<<"Max sum is : "<<maxSum<<endl;
}
void kadanesAlgorithm(int*arr,int n){//O(n)
    int maxSum=INT_MIN; //arr[0] ..............to handle only -ve in arr
    int currSum=0; //arr[0]
    for(int i=0;i<n;i++){ //i=1
        currSum+=arr[i]; //max(arr[i],currSum+arr[i])
        if(currSum<0){  //don't req
            currSum=0;  
        }
        maxSum=max(currSum,maxSum);
    }
    cout<<"max sum is : "<<maxSum<<endl;
}
int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n= sizeof(arr)/sizeof(int);
    bruteForce(arr,n);
    slightlyOptimized(arr,n);
    kadanesAlgorithm(arr,n);
    return 0;
}