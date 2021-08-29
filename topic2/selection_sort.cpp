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

    int counter = 0;
    for (int i = 0; i < N; i++)
    {
        int min = i;
        for (int j = i + 1; j < N; j++)
        {
            if (A.at(min) > A.at(j))
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(A.at(i), A.at(min));
            counter++;
        }
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
    cout << counter << endl;

    return 0;
}
