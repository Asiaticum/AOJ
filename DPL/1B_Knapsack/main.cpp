#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define log(msg) cout << msg << " " << __FILE__ << " " << __LINE__ << endl;
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

    vector<int> v(N), w(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v.at(i) >> w.at(i);
    }

    vector<vector<int>> dp(N + 1, vector<int>(W + 1, 0));
    for (int i = 1; i < N + 1; i++)
    {
        for (int j = 1; j < W + 1; j++)
        {
            if (i == 1 && j >= w.at(0))
            {
                dp.at(i).at(j) = v.at(0);
            }
            else if (j >= w.at(i - 1))
            {
                dp.at(i).at(j) = max(dp.at(i - 1).at(j), dp.at(i - 1).at(j - w.at(i - 1)) + v.at(i - 1));
            }
            else if (i != 1 && j < w.at(i - 1))
            {
                dp.at(i).at(j) = dp.at(i - 1).at(j);
            }
        }
    }

    cout << dp.at(N).at(W) << endl;

    return 0;
}
