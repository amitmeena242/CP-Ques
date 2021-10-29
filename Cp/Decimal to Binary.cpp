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

#include<bits/stdc++.h>

#define MOD 1000000007
#define MAX 100001
#define ll long long
#define slld(t) scanf("%lld",&t)
//#define sd(t) scanf("%d",&t)
#define pd(t) printf("%d\n",t)
#define plld(t) printf("%lld\n",t)
#define pcc pair<char,char>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define tr(container,it) for(typeof(container.begin()) it=container.begin();it!=container.end();it++)
#define mp(a,b) make_pair(a,b)
#define F first
#define S second

using namespace std;
void print(int num)
{
	cout<<num<<endl;
}
int main() {
	// Write your code here
    int n;
    cin>>n;
    long int num = 0;
    int c=0;
    while(n){
        long int rem = n%2;
        long int position_value = pow(10, c);
        num += position_value *rem;
        n=n/2;
        c++;
        
    }
    print(num);
}
