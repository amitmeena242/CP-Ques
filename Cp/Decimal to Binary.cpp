/*
Given a decimal number (integer N), convert it into binary and print.
The binary number should be in the form of an integer.
Note : The given input number could be large, so the corresponding binary number can exceed the integer range. So you may want to take the answer as long for CPP and Java.
Input format :
Integer N
Output format :
Corresponding Binary number (long)
Constraints :
0 <= N <= 10^5
Sample Input 1 :
12
Sample Output 1 :
1100
Sample Input 2 :
7
Sample Output 2 :
111
*/

#include<iostream>
using namespace std;
#include<cmath>

int main() {
	// Write your code here
    int n;
    cin>>n;
    long int num = 0;
    int c=0;
    while(n!=0){
        long int rem = n%2;
        long int position_value = pow(10, c);
        num += position_value *rem;
        n=n/2;
        c++;
        
    }
    cout<<num;	
}