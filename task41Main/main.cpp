#include <iostream>

#define N 5

using namespace std;

void user_init_matrix(int matrix[N][N]);
bool symmetric_matrix(int matrix[N][N]);
bool antisymmetric_matrix(int matrix[N][N]);

int main() {

	int matrix[N][N];

	user_init_matrix(matrix);

	string msg = symmetric_matrix(matrix) ? "" : "n't";
	cout << "This matrix is" << msg << " symmetric";

	string secondMsg = antisymmetric_matrix(matrix) ? "" : "n't";
	cout << "\nThis matrix is" << secondMsg << " antisymmetric";

	return 0;
}