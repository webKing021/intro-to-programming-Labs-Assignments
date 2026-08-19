#include <iostream>
using namespace std;

int factorial(int n) 
{
    int res = 1;
    int i;
    for (i=1; i<=n; i++)
    {
        res = res * i;
    }
    return res;
}

int main()
{
    int n=5;
    cout << "Factorial of " << n << " = " << factorial(n) << endl;
    return 0;
}