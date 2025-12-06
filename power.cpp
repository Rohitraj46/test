#include <bits/stdc++.h>
using namespace std;
int power(int x, int y, int m)
{
    int result = 1;
    x = x % m;
    while (y > 0)
    {
        if (y & 1)
            result = (result * x) % m;
        y = y >> 1;
        x = (x * x) % m;
    }
    return result;
}
int modInverse(int Q, int m)
{
    return power(Q, m - 2, m);
}
int32_t main()
{
    cout<<power(2,3,1e9+7)<<endl;
    return 0;
}