/****************************************************************
* Funcions per comprovar si una matriu és identitat o antidiagonal *
* Xavi Blanes curs: 25/26 *
****************************************************************/
#include <stdio.h>

int identitat(int m[10][10], int dimensio);
int antidiagonal(int m[10][10], int dimensio);

int main() {
    int matriu1[10][10] = { {1, 0, 0},
                            {0, 1, 0},
                            {0, 0, 1} };

    int matriu2[10][10] = { {0, 0, 1},
                            {0, 1, 0},
                            {1, 0, 0} };

    if(identitat(matriu1, 3))
        printf("Matriu1: Identitat\n");
    else
        printf("Matriu1: No identitat\n");

    if(antidiagonal(matriu2, 3))
        printf("Matriu2: Antidiagonal\n");
    else
        printf("Matriu2: No antidiagonal\n");

    return 0;
}

int identitat(int m[10][10], int dimensio){
    int i, j, id = 1;

    for(i = 0; i < dimensio; i++){
        for(j = 0; j < dimensio; j++){
            if(i == j)
                id = id && (m[i][j] == 1);
            else
                id = id && (m[i][j] == 0);
        }
    }

    return id;
}

int antidiagonal(int m[10][10], int dimensio){
    int i, j, ok = 1;

    for(i = 0; i < dimensio; i++){
        for(j = 0; j < dimensio; j++){
            if(i + j == dimensio - 1)
                ok = ok && (m[i][j] == 1);
            else
                ok = ok && (m[i][j] == 0);
        }
    }

    return ok;
}
