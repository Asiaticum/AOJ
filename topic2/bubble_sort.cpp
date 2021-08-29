#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        A.push_back(a);
    }

    bool flag = true;
    int count = 0;
    while (flag)
    {
        flag = false;
        for (int i = N - 1; i > 0; i--)
        {
            if (A.at(i - 1) > A.at(i))
            {
                swap(A.at(i - 1), A.at(i));
                count++;
                flag = true;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (i == N - 1)
        {
            cout << A.at(i) << endl;
        }
        else
        {
            cout << A.at(i) << " ";
        }
    }
    cout << count << endl;

    return 0;
}
