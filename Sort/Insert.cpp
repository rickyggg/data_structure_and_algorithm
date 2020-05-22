// O(N^2)
void InsertSort(int *list, int len) {
    int j;
    int temp;
    for (int i = 1; i < len; i++) {
        temp = list[i];
        for (j = i - 1; j >= 0 && list[j] > temp; j--)
            list[i] = list[j];
        list[j + 1] = temp;
    }
}
