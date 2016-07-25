/*

    Zero Matrix: Write an algorithm such that if an element in an MxN matrix is 0, its entire row and
    column are set to O.


*/


#include <iostream>
#include <array>

using namespace std;

void print_matrix (int **matrix, int M, int N) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void zero_matrix(int ** matrix, int M, int N) {

    int zero_position_i, zero_position_j;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (matrix[i][j] == 0) {
                zero_position_i = i;
                zero_position_j = j;
            }
        }
    }
    for (int j = 0; j < N; j++) {
        matrix[zero_position_i][j] = 0;
    }
    for (int i = 0; i < M; i++) {
        matrix[i][zero_position_j] = 0;
    }
    print_matrix(matrix, M, N);
}

int main () {

    int N, M;

    cout << "please enter a number for M for an MxN Matrix" << endl;

    cin >> M;

    int **matrix = new int * [M];

    cout << "please enter a number for N for an NxN Matrix" << endl;

    cin >> N;
    for (int i = 0; i < M; i++) {
        matrix[i] = new int [N];
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << "please enter a value for [" << i << "][" << j << "]" << endl;
            cin >> matrix[i][j];
        }
    }
    cout << "original matrix" << endl;
    print_matrix(matrix, M, N);
    cout << "zero matrix" << endl;
    zero_matrix(matrix, M, N);

}
