#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;
    int i=1;
    
    while(i<=n)
    {
        int s=1;
        while(s<=n-i) {
            cout<< ' ';
            s++;
        }
        int p=i-1;
        int j=1;
        while(j<=i){
            int k=p+1;
            cout<<k;
            p++;
            j++;
        }
        j=i-1;
        while(j>=1){
            cout<<i+j-1;
            j--;
        }
        cout<<endl;
        i++;
    }
  
}



