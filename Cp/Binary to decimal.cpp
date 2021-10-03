/*
Given a binary number as an integer N, convert it into decimal and print.
Input format :
An integer N in the Binary Format
Output format :
Corresponding Decimal number (as integer)
Constraints :
0 <= N <= 10^9
Sample Input 1 :
1100
Sample Output 1 :
12
Sample Input 2 :
111
Sample Output 2 :
7
*/

#include<iostream>
using namespace std;
#include <bits/stdc++.h> 

int main() {
	// Write your code here
    int n;
    cin>>n;
    int decimal = 0;
    int d;
    int count=0;
    while(n!=0){
        d=n%2;
        decimal += pow(2,count) * d;
        n = n/10;
        count++;
    }
    cout<<decimal;	
}