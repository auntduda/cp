#include <bits/stdc++.h>
using namespace std;

#define int long long
#define optimize std::ios::sync_with_stdio(false); cin.tie(NULL);
#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int, int>
#define MOD 1000000007
#define sqr(x) ((x) * (x))
#define _init(x) memset(x,-1,sizeof(x))
#define all(x) (x).begin(), (x).end()
#define FOR(i, j, n) for (int i = j; i < n; i++)
#define qle(i, n) (i == n ? "\n" : " ")
#define endl "\n"
const int oo = 1e9;
const int MAX = 1e6+7;

int32_t main(){ optimize;

    int n; cin >> n;

    vector<int> arr(n);
    vector<int> aux(n);

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        aux[i] = arr[i];
    }

    sort(arr.begin(), arr.end());
    vector<int> ans;

    for(int i=0; i<n; i++)
    {
        if(aux[i]==arr[i])
        {
            ans.pb(arr[i]);
        }
    }


    
    
    if(ans.size()>100)
    {
        cout << 100 << " ";
        for(int i=0; i<100; i++) cout << ans[i] << " ";
    }else
    {
        cout << ans.size() << " ";
        for(auto e : ans) cout << e << " ";
    }
    
    cout << endl;

    return 0;
}