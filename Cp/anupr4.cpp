#include<bits/stdc++.h>
using namespace std;


bool sortedArray(int arr[],int n){
    if(n==1){
        return true;
    }

    bool restArray = sortedArray(arr+1,n-1);

    return (arr[0]<arr[1] && restArray);
}


int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool result= sortedArray(arr,n);
    cout<<result<<endl;

    return 0;
    
}
