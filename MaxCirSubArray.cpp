#include<iostream>
#include<climits>
using namespace std;
int kadane(int [], int);
int main(){
    int n, sum=0;
    int maxnum=INT_MIN;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int noncir;
    int cir;
    noncir=kadane(arr, n);
    for(int i=0; i<n; i++){
        sum+=arr[i];
        arr[i]=-arr[i];
    }
    cir=sum - - kadane(arr, n);
    maxnum=max(noncir, cir);
    cout<<"MAX: "<<maxnum;
}
int kadane(int arr[], int n){
    int newarr[n];
    int maxnum=INT_MIN;
    if(arr[0]<0){
        newarr[0]=0;
    }
    for(int i=1; i<n; i++){
        newarr[i]=newarr[i-1]+arr[i];
        if(newarr[i]<0){
            newarr[i]=0;
        }
        maxnum=max(maxnum, newarr[i]);
    }
    return maxnum;
}
