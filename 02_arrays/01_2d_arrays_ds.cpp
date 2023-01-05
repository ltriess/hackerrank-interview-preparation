/*
Example 1:
    Input:
        1 1 1 0 0 0
        0 1 0 0 0 0
        1 1 1 0 0 0
        0 0 2 4 4 0
        0 0 0 2 0 0
        0 0 1 2 4 0
    Output:
        19
    
Example 2:
    Input:
        1 1 1 0 0 0
        0 1 0 0 0 0
        1 1 1 0 0 0
        0 9 2 -4 -4 0
        0 0 0 -2 0 0
        0 0 -1 -2 -4 0
    Output:
        13
*/

#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int max_sum = -64;

    for (int i = 0; i < 4; i ++) {
        for (int j = 0; j < 4; j ++) {
            max_sum = std::max(
                max_sum,
                arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2]
            );
        }
    }
    return max_sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
