#include <bits/stdc++.h> 
using namespace std;
 
using ll = long long;
using ld = long double;
using vi = vector<int>;
#define pb push_back
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
using pi = pair<int,int>;
#define fi first
#define se second
#define mp make_pair
void setIO(string name = "") {
	cin.tie(0)->sync_with_stdio(0); 
	if (sz(name)) {
		freopen((name+".in").c_str(), "r", stdin); 
		freopen((name+".out").c_str(), "w", stdout);
	}
}
///|||///||| Driver Code  ///|||///|||
 
int gcd(ll a,ll b)
{
	if(b==0)return a;
	else return gcd(b,a%b);
}
 
int main()
{ setIO();
    int t;cin>>t;
	while(t--)
	{
		ll n;cin>>n;
		if(n%2==1)n+=1;
        cout<<max(6LL,n+1)/2*5<<"\n";
	}
}
