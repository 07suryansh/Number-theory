#include <bits/stdc++.h>
using namespace std;
int binomialCoeff(int n, int r)
{
    if (r > n)
    {
        return 0;
    }
    if (r == 0 || r == n)
    {
        return 1;
    }
    return binomialCoeff(n - 1, r - 1) + binomialCoeff(n - 1, r);
}
int main()
{
    int n, r;
    cin >> n >> r;
    cout << binomialCoeff(n, r) << endl;
}