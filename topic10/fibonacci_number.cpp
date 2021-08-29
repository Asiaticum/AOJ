#include <bits/stdc++.h>
using namespace std;

using ll = long long;

vector<int> dp(45, -1);

int fibonacci(int n, vector<int> &dp)
{
    if (dp.at(n) != -1)
    {
        return dp.at(n);
    }

    dp.at(n) = fibonacci(n - 1, dp) + fibonacci(n - 2, dp);
    return dp.at(n);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    dp.at(0) = 1;
    dp.at(1) = 1;

    int n;
    cin >> n;

    cout << fibonacci(n, dp) << endl;

    return 0;
}
