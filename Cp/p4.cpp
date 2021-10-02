#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    n /= 2;
    int i=1;
    while(i<=n+1){
        int s=1;
        while(s<=n+1-i) {
            cout<< ' ';
            s++;
        }
        int j=1;
        while(j<=2*i-1)
        {
            cout<<'*';
            j++;
        }
        cout<<endl;
        i++;
    }
    i=n;
    while(i>=1){
        int s=1;
        while(s<=n+1-i) {
            cout<< ' ';
            s++;
        }
        int j=1;
        while(j<=2*i-1)
        {
            cout<<'*';
            j++;
        }
        cout<<endl;
        i--;
    }
}