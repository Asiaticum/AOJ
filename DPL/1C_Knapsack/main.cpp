#include <bits/stdc++.h>
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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, W;
    cin >> N >> W;

    vector<int> v(N + 1, 0), w(N + 1, 0);
    for (int i = 1; i < N + 1; i++)
    {
        cin >> v.at(i) >> w.at(i);
    }

    vector<vector<int>> dp(N + 1, vector<int>(W + 1, 0));

    for (int i = 1; i < N + 1; i++)
    {
        for (int j = 1; j < W + 1; j++)
        {
            if (j >= w.at(i))
            {
                dp.at(i).at(j) = max(dp.at(i - 1).at(j), dp.at(i).at(j - w.at(i)) + v.at(i));
            }
            else
            {
                dp.at(i).at(j) = dp.at(i - 1).at(j);
            }
        }
    }

    cout << dp.at(N).at(W) << endl;

    return 0;
}
