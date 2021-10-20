#include <bits/stdc++.h> 
using namespace std;
 
using ll = long long;
using ld = long double;
using vi = vector<int>;
#define pb push_back
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair
     
void setIO(string name = "") {
 	cin.tie(0)->sync_with_stdio(0); 
   	if (sz(name)) {
   		freopen((name+".in").c_str(), "r", stdin); 
   		freopen((name+".out").c_str(), "w", stdout);
   	}
}
 
///|||///||| Driver Code  ///|||///|||
 
int main() 
{   setIO();
    int n;cin>>n;
	ll a[n];
	for(int i=0;i<n;i++)cin>>a[i];
    
	int cnt1=1,cnt2=1;
	for(int i=1;i<n;i++)
	{
		if(a[i]>=a[i-1])cnt1++;
		else break;
	}
    
	for(int i=n-2;i>=0;i--)
	{
		if(a[i]>=a[i+1])cnt2++;
		else break;
	}
	cout<<min(n,cnt1+cnt2);
}
