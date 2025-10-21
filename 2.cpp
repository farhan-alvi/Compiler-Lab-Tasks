#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    cout << "Enter expression: ";
    cin >> input;

    int count = 0;

    for (int i = 0; i < input.length(); i++)
        {
        char c = input[i];
        if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%' || c == '=')
        {
            cout << "operator" << count + 1 << ": " << c << endl;
            count++;
        }
    }

    if (count == 0)
        {
        cout << "No operators found." << endl;
    }

    return 0;
}
