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
 
// solution from errichto's stream, for learning purposes only
 
void test()
{
	int n;cin>>n;
	int r[n][5];
	for(int i=0;i<n;i++)
	for(int j=0;j<5;j++)
	{ cin>>r[i][j];
	}
    int best=0;
   
   auto better = [&](int i, int j)
{ int k,cnt=0;
for(int k=0;k<5;k++)
{
	if(r[i][k]<r[j][k])++cnt;
}
   return cnt>=3;
};
 
	for(int i=1;i<n;i++)
	{
		if(better(i,best))
		{
			best = i;
		}
	}
	bool ok=true;
	for(int i=0;i<n;i++)
	{if(i != best && better(i,best))ok=false;}
 
	if(ok)cout<<best+1<<"\n";
	else cout<<-1<<"\n";
}
 
int main() 
{   setIO();
    int t;cin>>t;
	while(t--){
		test();
	}	
}
