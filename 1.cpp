#include <iostream>
#include <string>
using namespace std;

int main() {
    string x;
    int flag = 0;

    cout << "Input = ";
    cin >> x;

    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] < '0' || x[i] > '9')
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "Numeric constant" << endl;
    }
    else
    {
        cout << "Not numeric" << endl;
    }

    return 0;
}
