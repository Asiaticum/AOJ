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

    int n, m;
    cin >> n >> m;

    vector<int> c(m + 1);
    for (int i = 1; i < m + 1; i++)
    {
        cin >> c.at(i);
    }

    // sort(c.begin(), c.end(), greater<int>());
    sort(c.begin(), c.end());

    vector<vector<int>> dp(m + 1, vector<int>(n + 1, INF));
    dp.at(0).at(0) = 0;
    for (int i = 1; i < m + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            if (j == 0)
            {
                dp.at(i).at(j) = 0;
                continue;
            }

            if (j >= c.at(i))
            {
                dp.at(i).at(j) = min(dp.at(i - 1).at(j), dp.at(i).at(j - c.at(i)) + 1);
            }
            else
            {
                dp.at(i).at(j) = dp.at(i - 1).at(j);
            }
        }
    }

    cout << dp.at(m).at(n) << endl;

    return 0;
}
