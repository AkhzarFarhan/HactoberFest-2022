#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

//This program will help you to check if a number is prime or not in O(sqrt(n)).

bool is_prime(int x)
{
    int cnt = 0;
    for (int i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            cnt += 2;
        }
        if (i * i == x)
        {
            cnt--;
        }
    }
    if (cnt == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    if (is_prime(n))
    {
        cout << n << " is a prime number." << endl;
    }
    else
    {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}