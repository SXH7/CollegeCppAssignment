#include<iostream>
using namespace std;

void matmult(int a[][3], int b[][3], int x1, int x2, int y1, int y2){
    int final[x2][y1];

    for(int i = 0; i < x1; ++i)
        for(int j = 0; j < y2; ++j)
            for(int k = 0; k < x2; ++k)
            {
                final[i][j] += a[i][k] * b[k][j];
            }

    for(int p=0; p<x2; p++){
        for(int q = 0; q<y1; q++){
            cout << final[p][q] << " ";
        }
        cout << endl;
    }

}

void matadd(int a[][3], int b[][3], int x, int y){
    int final[x][y];
    for(int p=0; p<x; p++){
        for(int q = 0; q<y; q++){
            final[p][q] = a[p][q]+b[p][q];
        }
    }

    for(int p=0; p<x; p++){
        for(int q = 0; q<y; q++){
            cout << final[p][q] << " ";
        }
        cout << endl;
    }

}

int main(){
    int mat1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[3][3] = {{1, 2, 3}, {2, 4, 6}, {3, 6, 9}};

    //matadd(mat1, mat2, 3, 3);
    matmult(mat1, mat2, 3, 3, 3, 3);
}
