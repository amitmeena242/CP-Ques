#include<bits/stdc++.h> 
using namespace std;

using ll = long long;
using vi = vector<int>;
#define pb push_back
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair
const int MAX=1e5+10;

void setIO(string name="") {cin.tie(0)->sync_with_stdio(0);if(sz(name)){freopen((name+".in").c_str(),"r",stdin);freopen((name+".out").c_str(),"w",stdout);}}
//Driver Code//

int main(){
	setIO();
   int n;cin>>n;
   int track[1000]={0};
   pair<int,int> p[n];
   for(int i=0;i<n;i++)
   {
      cin>>p[i].first>>p[i].second;
   }
   sort(p,p+n);
   int ans=0;
   for(int i=0;i<n;i++)
   for(int j=0;j<n;j++)
   {
      if(i!=j)
      {
         if(t)
      }
   }

}
