#include <bits/stdc++.h> 
using namespace std;       
#define ll long long 
const int mod = 1000000007; 
const int INF = 1e9; 
const int N = 2e6+5; 
vector<int>adj[N]; 
bool vis[N], ok[N]; 
int BIT[1000], a[1000], n;
const int MX = 2e5+5; 
int timer = 0, st[MX], en[MX]; 
bool subModM(vector<int>& arr, int k){
    map<int, int> ma; 
    ma.insert(make_pair(0,1)); 
    int csum = 0, count = 0, rem; 
    for(auto x: arr){
        csum += x;
        rem = csum % k;

        rem = (rem<0) ? k + rem : rem;

        if(ma[rem]) return true;                // return when first subset is found
        else  ma.insert(make_pair(rem,0)); 
        ma[rem]++;
    } 
    if(count){
        cout<<"count:"<<count<<endl;
        return true;
    } 
    return false;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);  
    //
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
    }
    int k = 6;
    bool ans=subModM(arr, k);
    if(ans)cout<<"subset found\n";
    else cout<<"no subset found\n";
    return 0;
}
