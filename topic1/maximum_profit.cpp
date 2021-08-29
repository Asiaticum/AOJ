#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> R;
    int r;
    for (int i = 0; i < n; i++)
    {
        cin >> r;
        R.push_back(r);
    }

    int minv = R.at(0);
    int maxv = R.at(1) - R.at(0);
    for (int j = 1; j < n; j++)
    {
        maxv = max(maxv, R.at(j) - minv);
        minv = min(minv, R.at(j));
    }

    cout << maxv << endl;

    return 0;
}
