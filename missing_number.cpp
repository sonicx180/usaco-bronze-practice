#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long presum = 0;
    long long sum = n * (n + 1) / 2;

    for (long long i = 0; i < n - 1; i++)
    {
        long long a;
        cin >> a;
        presum += a;
    }

    cout << sum - presum;
}