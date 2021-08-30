#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
using ll = long long;
const int INF = 1e8;
const ll MOD = 1e9 + 7;
const ll LINF = 1e17;
template <class T>
bool chmax(T &a, const T &b)
{
    if (a < b)
    {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
bool chmin(T &a, const T &b)
{
    if (b < a)
    {
        a = b;
        return 1;
    }
    return 0;
}

int n;
vector<vector<int>> G(n);
vector<vector<int>> time(n, vector<int>(2, 0));
int now = 0;
vector<bool> visited(n, false);

void gfs(vector<int> g)
{
    if (G.at(i).at(0) == 0)
    {
        time.at(i).at(1) = now;
        now++;
        time.at(i).at(1) = now;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<vector<int>> G(n);
    for (int i = 0; i < n; i++)
    {
        int u, k;
        cin >> u >> k;
        vector<int> g(k + 1);
        for (int j = 1; j < k + 1; j++)
        {
            g.push_back(0);
            cin >> g.at(j);
        }
        G.push_back(g);
    }

    return 0;
}
