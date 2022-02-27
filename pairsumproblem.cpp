#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,7,11,14,16,20,21};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=31;
    int low=0, high=n;
    while(low<high){
        if(arr[low]+arr[high]>k){
            high--;
        }
        if(arr[low]+arr[high]<k){
            low++;
        }
        if(arr[low]+arr[high]==k){
            cout<<"1"<<endl;
            cout<<low<<" "<<high;
            return 0;
        }
    }
    return 0;
}
