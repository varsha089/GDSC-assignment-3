#include<iostream>
#include<vector>

using namespace std;

vector<vector<int> > generate_spiral_matrix(int n) 
{
	//Declaration of 2D vector.
    vector<vector<int>> result_matrix(n,vector<int>(n,0));

	// Normal Case
	int rowStart = 0;
	int rowEnd = n-1;
	int colStart = 0;
	int colEnd = n-1;
	int num = 1;

	while (rowStart <= rowEnd && colStart <= colEnd) 
	{
		for (int i = colStart; i <= colEnd; i ++) // 1. horizonal, left to right
		{
			result_matrix[rowStart][i] = num ++; 
		}
		rowStart ++;

		for (int i = rowStart; i <= rowEnd; i ++) // 2. vertical, top to bottom
		{
			result_matrix[i][colEnd] = num ++; 
		}
		colEnd --;

		for (int i = colEnd; i >= colStart; i --)  // 3. horizonal, right to left 
		{
			if (rowStart <= rowEnd)
				result_matrix[rowEnd][i] = num ++;
		}
		rowEnd --;

		for (int i = rowEnd; i >= rowStart; i --)  // 4. vertical, bottom to  top 
		{
			if (colStart <= colEnd)
                    result_matrix[i][colStart] = num ++;
        }
            colStart ++;
    }
        
        return result_matrix;
}    

int main() 
{
	int n = 3;

	//Declare a 2d vector to get the result
	vector<vector<int> > result_matrix = generate_spiral_matrix(n);

	cout<< "Result matrix is : "<<endl;
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < n; j++)
			cout << result_matrix[i][j] << ' ';
		cout << endl;
	}



}