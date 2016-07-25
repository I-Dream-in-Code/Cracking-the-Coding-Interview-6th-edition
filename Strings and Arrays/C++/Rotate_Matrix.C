/*

    Rotate Matrix: Given an image represented by an NxN matrix, where each pixel in the image is 4
    bytes, write a method to rotate the image by 90 degrees. (an you do this in place?

*/

#include <iostream>
#include <array>

using namespace std;



void print_matrix (int **matrix, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void rotate_anticlockwise (int ** matrix, int N) {
    for( int i = 0; i < N / 2; ++i ) {
        for( int j = i; j < N - i - 1; ++j ) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][N - i - 1];
            matrix[j][N - i - 1] = matrix[N - i - 1][N - j - 1];
            matrix[N - i - 1][N - j - 1] = matrix[N - j - 1][i];
            matrix[N - j - 1][i] = temp;
        }
    }


}

void rotate_clockwise (int ** matrix, int N) {
    for(int i = 0; i < N; i++) {
        for(int j = i; j < N; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
//reverse elements on row order
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N / 2; j++) {
            swap(matrix[i][j], matrix[i][N - j - 1]);
        }
    }

}
int main() {

    int N;

    cout << "please enter a number for an NxN Matrix" << endl;

    cin >> N;

    int **matrix = new int * [N];

    for (int i = 0; i < N; i++) {
        matrix[i] = new int [N];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "please enter a value for [" << i << "][" << j << "]" << endl;
            cin >> matrix[i][j];
        }
    }

    int choice;
    cout << "how do you want to rotate?" << endl;
    cout << "1) clockwise" << endl;
    cout << "2) anti-clockwise" << endl;
    cin >> choice;
    cout << "original matrix:" << endl;
    print_matrix(matrix, N);
    if (choice == 1) {
        cout << "rotated clockwise matrix:" << endl;
        rotate_clockwise(matrix, N);
        print_matrix(matrix, N);

    }
    if (choice == 2) {
        cout << "rotated anti-clockwise matrix:" << endl;
        rotate_anticlockwise(matrix, N);
        print_matrix(matrix, N);
    }
    for(int i = 0; i < N; i++) {
        delete [] matrix[i];
    }
    delete [] matrix;



}

