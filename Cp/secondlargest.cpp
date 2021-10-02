#include<iostream>
using namespace std;
#include <climits>


int main(){
    
    // Write your code here
    int n;
    cin>>n;
    int m= INT_MIN, sm= INT_MIN;
    int x;
    int c=1;
    while(c<=n){
        cin>>x;
        if(x>m){
            sm=m;
            m=x;
        }
        else if(x>sm&&x!=m){
            sm=x;
        }
        c++;
    }
    cout<<sm<<endl;
}


