#include <iostream>
#include <string>

using namespace std;

bool checkIdentifier(const string& str) {
    if ((str[0] < 'A' || str[0] > 'Z') && (str[0] < 'a' || str[0] > 'z') && str[0] != '_') {
        return false;
    }

    for (int i = 1; i < str.length(); ++i) {
        if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9') || str[i] == '_')) {
            return false;
        }
    }

    return true;
}

int main() {
    string input;

    cout << "Enter a string: ";
    cin >> input;

    if (checkIdentifier(input)) {
        cout << input << " is a valid identifier." << endl;
    } else {
        cout << input << " is not a valid identifier." << endl;
    }

    return 0;
}

