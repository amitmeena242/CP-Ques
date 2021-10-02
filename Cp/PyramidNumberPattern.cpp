// Print the following pattern for the given number of rows.
// Pattern for N = 4

//    1
//   212
//  32123
// 4321234

// Input format : N (Total no. of rows)

// Output format : Pattern in N lines
// Sample Input :

// 5

// Sample Output :

//         1
//       212
//     32123
//   4321234
// 543212345



#include<iostream>
using namespace std;

int main(){

  // Write your code here  
    int n;
    cin>>n;
    
    int i =1;
    while(i<=n){
        int k=1;
        while(k<=(n-i)){
            cout<<" ";
            k++;
        }
        int j=1;
        k=i;
        while(j<=i){
            cout<<k;
            k--;
            j++;
        }
        j=1;
        k=2;
        while(j<i){
            cout<<k;
            j++;
            k++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

