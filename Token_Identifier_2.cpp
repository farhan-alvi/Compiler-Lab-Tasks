#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("TextFile.txt");
    string line;
    int lineNum = 1;

    string keywords[] = {"int","float","char","double","return",
                         "using","namespace","cout","endl","main"};

    if (!file) {
        cout << "File not found!" << endl;
        return 0;
    }

    while (getline(file, line))
    {
        cout << "Line " << lineNum << ":\n";
        string token = "";

        for (int i = 0; i <= line.length(); i++)
        {
        char c = line[i];

        bool isP = (c=='{'||c=='}'||c=='('||c==')'||c==';'||c=='<'||c=='>'||c=='#');
        bool isO = (c=='+'||c=='-'||c=='*'||c=='/'||c=='=');

        if (c==' ' || c=='\t' || c=='\0' || isP || isO)
        {
        if (token != "")
        {
        bool key = false, num = true;

        for (int k = 0; k < 10; k++)
        if (token == keywords[k]) key = true;

        for (int k = 0; k < token.length(); k++)
        if (token[k] < '0' || token[k] > '9') num = false;

        if (key)
        {
            cout << "  " << token << " --> Keyword\n";
        }

        else if (num)
        {
            cout << "  " << token << " --> Constant\n";
        }
        else
            cout << "  " << token << " --> Identifier\n";

        token = "";
        }

            if (isP) cout << "  " << c << " --> Punctuation\n";
            if (isO) cout << "  " << c << " --> Operator\n";
            }
        else
        {
            token += c;
        }
        }

        cout << endl;
        lineNum++;
    }

    return 0;
}
