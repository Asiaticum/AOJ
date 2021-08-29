#include <bits/stdc++.h>
using namespace std;

int is_prime(vector<int> A, vector<int> prime)
{
    int count = 0;
    for (int a : A)
    {
        bool flag = true;
        for (int p : prime)
        {
            if (sqrt(a) < p)
            {
                break;
            }

            if (a % p == 0)
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int n;
    cin >> n;

    vector<int> A;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        A.push_back(a);
    }

    vector<int> prime_numbers = {2};
    for (int i = 3; i < pow(10, 4); i++)
    {
        bool flag = true;
        for (int p : prime_numbers)
        {
            if (p > sqrt(i))
            {
                break;
            }

            if (i % p == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            prime_numbers.push_back(i);
        }
    }

    int c = is_prime(A, prime_numbers);
    cout << c << endl;

    return 0;
}
