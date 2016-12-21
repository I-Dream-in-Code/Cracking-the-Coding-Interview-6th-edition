/*


Rotate Matrix: Given an image represented by an NxN matrix, where each pixel in the image is 4
    bytes, write a method to rotate the image by 90 degrees. can you do this in place?



*/
package rotate_matrix;

import java.util.Scanner;


public class Rotate_Matrix {

    public static void print_matrix(int[][] matrix, int N) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                System.out.print(Integer.toString(matrix[i][j]) + " ");
            }
            System.out.println("\n");
        }

    }

    public static void rotate_anticlockwise(int[][] matrix, int N) {
        for (int i = 0; i < N / 2; ++i) {
            for (int j = i; j < N - i - 1; ++j) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][N - i - 1];
                matrix[j][N - i - 1] = matrix[N - i - 1][N - j - 1];
                matrix[N - i - 1][N - j - 1] = matrix[N - j - 1][i];
                matrix[N - j - 1][i] = temp;
            }
        }
    }

    private static void transpose(int[][] matrix, int N) {

        for (int i = 0; i < N; i++) {
            for (int j = i; j < N; j++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
    }

    public static void rotate_clockwise(int[][] matrix, int N) {
        // transpose
        transpose(matrix, N);

        // swap columns
        for (int j = 0; j < N / 2; j++) {
            for (int i = 0; i < N; i++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][N - 1 - j];
                matrix[i][N - 1 - j] = temp;
            }
        }
    }

    public static void main(String[] args) {

        System.out.println("Enter a number for NxN Matrix");
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();

        int[][] matrix;
        matrix = new int[N][N];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                System.out.println("Enter an integer for [" + Integer.toString(i) + "][" + Integer.toString(j) + "]");
                matrix[i][j] = sc.nextInt();
            }
        }

        System.out.println("How would you like to rotate it? \n 1)clockwise \n 2)anti-clockwise");
        int choice = sc.nextInt();
        System.out.println("Original matrix:");
        print_matrix(matrix, N);
        if (choice == 1) {
            System.out.println("rotated clockwise");
            rotate_clockwise(matrix, N);
        } else {
            System.out.println("rotated anti-clockwise");
            rotate_anticlockwise(matrix, N);
        }
        print_matrix(matrix, N);

    }

}
