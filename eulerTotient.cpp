#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }

    if (b == 0)
    {
        return a;
    }

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }

    return a;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int i = 2;
    int count = 1;
        while (i < n)
        {
            if (gcd(i, n) == 1)
            {
                i++;
                count++;
            }
            else
            {
                i++;
            }
        }

        cout << count;
    return 0;
}
