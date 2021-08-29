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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        string X, Y;
        cin >> X;
        cin >> Y;

        vector<vector<int>> dp(X.size() + 1, vector<int>(Y.size() + 1, 0));
        for (int i = 1; i < X.size() + 1; i++)
        {
            for (int j = 1; j < Y.size() + 1; j++)
            {
                if (X[i - 1] == Y[j - 1])
                {
                    dp.at(i).at(j) = max({dp.at(i - 1).at(j - 1) + 1, dp.at(i - 1).at(j), dp.at(i).at(j - 1)});
                }
                else
                {
                    dp.at(i).at(j) = max(dp.at(i - 1).at(j), dp.at(i).at(j - 1));
                }
            }
        }

        cout << dp.at(X.size()).at(Y.size()) << endl;
    }

    return 0;
}
