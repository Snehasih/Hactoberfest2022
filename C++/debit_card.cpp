#include <iostream>
using namespace std;
int main()
{
    int cn[16];
    for (int i = 0; i <= 15; i++)
    {
        cin >> cn[i];
    }
    int sum = 0;
    int i = 0;
    while (i <= 15)
    {
        int k = 2 * cn[i];
        if (k < 10)
        {
            sum += k + cn[i + 1];
        }
        else
        {
            int num = 0;
            while (k != 0)
            {
                num+= (k % 10);
                k = k / 10;
            }
            sum += num + cn[i + 1];
        }
        cout<<sum<<endl;
        i += 2;
    }
    cout << sum << endl;
    if (sum % 10 == 0)
    {
        cout << "debit card is a magic number";
    }
    else
    {
        cout << "not a valid debit card";
    }
    return 0;
}