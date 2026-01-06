#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    string state;

    cout << "DFA Implementation for (ba)* b* a [a + ba(a+b)]*" << endl;
    cout << "Enter input string (a, b only): ";
    cin >> input;


    state = "{0,1,4,5,6,8,9}";                         // Start state

    for (int i = 0; i < input.length(); i++) {
        char ch = input[i];

        if (state == "{0,1,4,5,6,8,9}") { // State A
            if (ch == 'a') state = "{10,11,12,13,23,25}"; // to B
            else if (ch == 'b') state = "{2,6,7,8,9}"; // to C
        }
        else if (state == "{10,11,12,13,23,25}") { // State B
            if (ch == 'a') state = "{12,13,22,23,24,25}"; // to D
            else if (ch == 'b') state = "{14}"; // to E
        }
        else if (state == "{2,6,7,8,9}") { // State C
            if (ch == 'a') state = "{1,3,4,5,6,8,9,10,11,12,13,23,25}"; // to F
            else if (ch == 'b') state = "{6,7,8,9}"; // to G
        }
        else if (state == "{12,13,22,23,24,25}") { // State D
            if (ch == 'a') state = "{12,13,22,23,24,25}"; // to D
            else if (ch == 'b') state = "{14}"; // to E
        }
        else if (state == "{14}") { // State E
            if (ch == 'a') state = "{15,16,17,19}"; // to H
            else if (ch == 'b') state = "{}"; // to Trap
        }
        else if (state == "{1,3,4,5,6,8,9,10,11,12,13,23,25}") { // State F
            if (ch == 'a') state = "{10,11,12,13,22,23,24,25}"; // to I
            else if (ch == 'b') state = "{2,6,7,8,9,14}"; // to J
        }
        else if (state == "{6,7,8,9}") { // State G
            if (ch == 'a') state = "{10,11,12,13,23,25}"; // to B
            else if (ch == 'b') state = "{6,7,8,9}"; // to G
        }
        else if (state == "{15,16,17,19}") { // State H
            if (ch == 'a') state = "{12,13,18,21,22,23,25}"; // to K
            else if (ch == 'b') state = "{12,13,20,21,22,23,25}"; // to L
        }
        else if (state == "{10,11,12,13,22,23,24,25}") { // State I
            if (ch == 'a') state = "{12,13,22,23,24,25}"; // to D
            else if (ch == 'b') state = "{14}"; // to E
        }
        else if (state == "{2,6,7,8,9,14}") { // State J
            if (ch == 'a') state = "{1,3,4,5,6,8,9,10,11,12,13,15,16,17,19,23,25}"; // to M
            else if (ch == 'b') state = "{6,7,8,9}"; // to G
        }
        else if (state == "{12,13,18,21,22,23,25}") { // State K
            if (ch == 'a') state = "{12,13,22,23,24,25}"; // to D
            else if (ch == 'b') state = "{14}"; // to E
        }
        else if (state == "{12,13,20,21,22,23,25}") { // State L
            if (ch == 'a') state = "{12,13,22,23,24,25}"; // to D
            else if (ch == 'b') state = "{14}"; // to E
        }
        else if (state == "{1,3,4,5,6,8,9,10,11,12,13,15,16,17,19,23,25}") { // State M
            if (ch == 'a') state = "{10,11,12,13,18,21,22,23,24,25}"; // to N
            else if (ch == 'b') state = "{2,6,7,8,9,12,13,14,20,21,22,23,25}"; // to O
        }
        else if (state == "{10,11,12,13,18,21,22,23,24,25}") { // State N
            if (ch == 'a') state = "{12,13,22,23,24,25}"; // to D
            else if (ch == 'b') state = "{14}"; // to E
        }
        else if (state == "{2,6,7,8,9,12,13,14,20,21,22,23,25}") { // State O
            if (ch == 'a') state = "{1,3,4,5,6,8,9,10,11,12,13,15,16,17,19,22,23,24,25}"; // to P
            else if (ch == 'b') state = "{6,7,8,9,14}"; // to Q
        }
        else if (state == "{1,3,4,5,6,8,9,10,11,12,13,15,16,17,19,22,23,24,25}") { // State P
            if (ch == 'a') state = "{6,7,8,9,10,11,12,13,18,21,22,23,24,25}"; // to R
            else if (ch == 'b') state = "{2,12,13,14,20,21,22,23,25}"; // to S
        }
        else if (state == "{6,7,8,9,14}") { // State Q
            if (ch == 'a') state = "{10,11,12,13,15,16,17,19,23,25}"; // to T
            else if (ch == 'b') state = "{6,7,8,9}"; // to G
        }
        else if (state == "{6,7,8,9,10,11,12,13,18,21,22,23,24,25}") { // State R
            if (ch == 'a') state = "{10,11,12,13,22,23,24,25}"; // to I
            else if (ch == 'b') state = "{6,7,8,9,14}"; // to Q
        }
        else if (state == "{2,12,13,14,20,21,22,23,25}") { // State S
            if (ch == 'a') state = "{1,3,4,5,6,8,9,12,13,15,16,17,19,22,23,24,25}"; // to U
            else if (ch == 'b') state = "{14}"; // to E
        }
        else if (state == "{10,11,12,13,15,16,17,19,23,25}") { // State T
            if (ch == 'a') state = "{12,13,18,21,22,23,24,25}"; // to V
            else if (ch == 'b') state = "{12,13,14,20,21,22,23,25}"; // to W
        }
        else if (state == "{1,3,4,5,6,8,9,12,13,15,16,17,19,22,23,24,25}") { // State U
            if (ch == 'a') state = "{10,11,12,13,18,21,22,23,24,25}"; // to N
            else if (ch == 'b') state = "{2,6,7,8,9,12,13,14,20,21,22,23,25}"; // to O
        }
        else if (state == "{12,13,18,21,22,23,24,25}") { // State V
            if (ch == 'a') state = "{12,13,22,23,24,25}"; // to D
            else if (ch == 'b') state = "{14}"; // to E
        }
        else if (state == "{12,13,14,20,21,22,23,25}") { // State W
            if (ch == 'a') state = "{12,13,15,16,17,19,22,23,24,25}"; // to X
            else if (ch == 'b') state = "{14}"; // to E
        }
        else if (state == "{12,13,15,16,17,19,22,23,24,25}") { // State X
            if (ch == 'a') state = "{12,13,18,21,22,23,24,25}"; // to V
            else if (ch == 'b') state = "{12,13,14,20,21,22,23,25}"; // to W
        }
        else {
            state = "{}"; // Trap/Dead State
        }
    }

    // Final State Check
    if (state == "{10,11,12,13,23,25}" ||
        state == "{12,13,22,23,24,25}" ||
        state == "{1,3,4,5,6,8,9,10,11,12,13,23,25}" ||
        state == "{10,11,12,13,22,23,24,25}" ||
        state == "{12,13,18,21,22,23,25}" ||
        state == "{12,13,20,21,22,23,25}" ||
        state == "{1,3,4,5,6,8,9,10,11,12,13,15,16,17,19,23,25}" ||
        state == "{10,11,12,13,18,21,22,23,24,25}" ||
        state == "{2,6,7,8,9,12,13,14,20,21,22,23,25}" ||
        state == "{1,3,4,5,6,8,9,10,11,12,13,15,16,17,19,22,23,24,25}" ||
        state == "{6,7,8,9,10,11,12,13,18,21,22,23,24,25}" ||
        state == "{2,12,13,14,20,21,22,23,25}" ||
        state == "{10,11,12,13,15,16,17,19,23,25}" ||
        state == "{1,3,4,5,6,8,9,12,13,15,16,17,19,22,23,24,25}" ||
        state == "{12,13,18,21,22,23,24,25}" ||
        state == "{12,13,14,20,21,22,23,25}" ||
        state == "{12,13,15,16,17,19,22,23,24,25}"
    )

    {
        cout << "RESULT: String Accepted" << endl;
    }

    else
    {
        cout << "RESULT: String Rejected" << endl;
    }

    return 0;
}
