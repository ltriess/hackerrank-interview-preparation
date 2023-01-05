/*
Example 1:
    Input:
        8
        UDDDUDUU
    Output:
        1
    
Example 2:
    Input:
        12
        DDUUDDUDUUUD
    Output:
        2
*/
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int valleys = 0;

    int level = 0;
    int new_level;
    for (char& c : s) {

        if (c == 'D') {
            new_level = level -1;
        } else {
            new_level = level + 1;
        }

        if ((new_level == 0) && (level < 0)) {
            valleys ++;
        }

        level = new_level;
    }

    return valleys;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
