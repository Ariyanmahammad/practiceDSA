#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
void maxProfit(vector<int>&price,int n){
    vector<int>bestBuy(n,INT_MAX);
    bestBuy[0]=price[0];
    for(int i=1;i<n;i++){
        bestBuy[i]=min(bestBuy[i-1],price[i-1]);

    }
    int maxProfit=0;
    for(int i=0;i<n;i++){
        int currProfit=price[i]-bestBuy[i];
        maxProfit=max(maxProfit,currProfit);
    }
    cout<<"max Profit is: "<<maxProfit<<endl;
}
int main(){
    vector<int>price={7,1,3,4,6,5};
    int n= price.size();
    maxProfit(price,n);
    return 0;
}
