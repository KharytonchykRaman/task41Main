#include <iostream>

#define N 5

using namespace std;

void user_init_matrix(int matrix[N][N]) {

	for (int i = 0; i < N; i++)
	{
		cout << i + 1 << '.';
		for (int j = 0; j < N; j++)
		{
			cin >> matrix[i][j];
		}
		cout << endl;
	}
}

bool symmetric_matrix(int matrix[N][N]) {

	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (matrix[i][j] != matrix[j][i]) {
				return false;
			}
		}
	}
	return true;
}

bool antisymmetric_matrix(int matrix[N][N]) {

	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (matrix[i][j] != -matrix[j][i]) {
				return false;
			}
		}
	}
	return true;
}