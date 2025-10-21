#include <iostream>
using namespace std;

int main()
{
    string x;
    cout << "Enter input: ";
    cin >> x;

    int i, j, found = 0;

    for(i = 0; i < x.length(); i++)
    {
        if(x[i] == '/' && x[i+1] == '/')
        {
            found = 1;
            cout << "Single-line comment found" << endl;
            cout << "Comment is: ";
            for(j = i + 2; j < x.length(); j++)
            {
                cout << x[j];
            }
            cout << endl;
            break;
        }

        if(x[i] == '/' && x[i+1] == '*')
        {
            found = 2;
            cout << "Multi-line comment found" << endl;
            cout << "Comment is: ";
            for(j = i + 2; j < x.length(); j++)
            {
                if(x[j] == '*' && x[j+1] == '/')
                    break;
                cout << x[j];
            }
            cout << endl;
            break;
        }
    }

    if(found == 0)
        cout << "Not a comment" << endl;

    return 0;
}
