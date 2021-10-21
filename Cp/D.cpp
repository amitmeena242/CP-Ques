#include <bits/stdc++.h> 
    using namespace std;
     
    using ll = long long;
    using vi = vector<int>;
   
    void setIO(string name = "") {
    	cin.tie(0)->sync_with_stdio(0); 
    	if (sz(name)) {
    		freopen((name+".in").c_str(), "r", stdin); 
    		freopen((name+".out").c_str(), "w", stdout);
    	}
    }
   
     
    int main()
    { setIO();
      int t;cin>>t;while(t--)
      { 
    	 int s;cin>>s;
    	 int cnt=1;
    	 int ss=1,v=1;
    	 while(ss<s)
    	 {
    		 v+=2;
    		 cnt++;
    		 ss+=v;
    	 }
         cout<<cnt<<"\n";
      }
    }
