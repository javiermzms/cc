#include <stdio.h>

int identitat(int m[10][10], int dimensio);
int antidiagonal(int m[10][10], int dimensio);

int main() {
    int matriu[10][10] = { {0, 0, 0, 1}, {0, 0, 1, 0}, {1, 0, 0, 0} };
    if(antidiagonal(matriu, 4)) printf("Antidiagonal\n");
    else printf("No diagonal\n");
    return 0;
}

int identitat(int m[10][10], int dimensio){
    int i, j, id;
    id = 1;
    for(i = 0; i < dimensio; i++)
        for(j = 0; j < dimensio; j++)
            if(i == j) id = id && ((m[i][i]) == 1);
            else id = id && (m[i][j] == 0);
    return id;
}

int antidiagonal(int m[10][10], int dimensio){
    int i, j, id;
    id = 1;
    for(i = 0; i < dimensio; i++)
        for(j = 0; j < dimensio; j++)
            if(i == (dimensio - 1) - j) id = id && (m[i][j] == 1);
    return id;
}
