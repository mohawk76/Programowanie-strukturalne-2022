#include <stdlib.h>

int ***generate(int n, int m, int l) {
    int ***arr = (int ***) malloc(n * sizeof(int **));
    for (int i = 0; i < n; ++i) {
        arr[i] = (int **) malloc(m * sizeof(int *));
        for (int j = 0; j < m; ++j) {
            arr[i][j] = (int *) malloc(l * sizeof(int));
        }
    }

    return arr;
}

void delete_arr(int ***arr, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            free(arr[i][j]);
        }
        free(arr[i]);
    }
    free(arr);
}

int main() {
    int ***arr = generate(3, 3, 3);
    delete_arr(arr, 3, 3);
    return 0;
}