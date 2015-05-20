#include <iostream>
using namespace std;

const int row = 3, col = 4;
int matrix[row][col] = {
  { 1,  2,  3,  4 },
  { 5,  6,  7,  8 },
  { 9, 10, 11, 12 }
};
int transpose[col][row];

int main()
{
    // Transpose Matrix
    for(int i=0; i<row; i++) {
        for (int j=0; j<col; j++){
            transpose[j][i] = matrix[i][j];
        }
    }

    /* Print Matrix */
    for(int i=0; i<col; i++) {
        for (int j=0; j<row; j++) {
            cout<<transpose[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
