#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A;
    int a;
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        A.push_back(a);
    }

    for (int i = 1; i < N; i++)
    {
        for (int i = 0; i < N; i++)
        {
            if (i != N - 1)
            {
                cout << A.at(i) << " ";
            }
            else
            {
                cout << A.at(i) << endl;
            }
        }

        int tmp = A.at(i);
        int j = i - 1;
        while (j >= 0 && A.at(j) > tmp)
        {
            A.at(j + 1) = A.at(j);
            j--;
        }
        A.at(j + 1) = tmp;
    }

    for (int i = 0; i < N; i++)
    {
        if (i != N - 1)
        {
            cout << A.at(i) << " ";
        }
        else
        {
            cout << A.at(i) << endl;
        }
    }

    return 0;
}
