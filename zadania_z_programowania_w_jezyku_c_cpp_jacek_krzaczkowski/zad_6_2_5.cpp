int ***generate(int n, int m, int l) {
    int ***arr = new int **[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = new int *[m];
        for (int j = 0; j < m; ++j) {
            arr[i][j] = new int[l];
        }
    }

    return arr;
}

void delete_arr(int ***arr, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            delete[] arr[i][j];
        }
        delete[] arr[i];
    }
    delete[] arr;
}

int main() {
    int ***arr = generate(3, 3, 3);
    delete_arr(arr, 3, 3);
    return 0;
}