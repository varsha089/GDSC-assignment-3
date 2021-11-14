#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = i + 1; j < matrix.size(); j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
     for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix.size() / 2; j++)
        {
            swap(matrix[i][j], matrix[i][matrix.size() - j - 1]);
        }
    }
    }
bool findRotation(vector<vector<int>> &mat,
                  vector<vector<int>> &target)
{

    for (int i = 0; i < 4; i++)
    {
        rotate(mat);

        if (mat == target)
            return true;
    }

    return false;
}
int main()
{
    vector<vector<int>> mat = {{0, 1}, {1, 0}};
    vector<vector<int>> target = {{1, 0}, {0, 1}};

    if (findRotation(mat, target))
        cout << "true\n";
    else
        cout << "false\n";

    return 0;
}