// O(N^2)
void BubbleSort(int *list, int len) {
    for (int i = 0; i < len; i++) {
        int flag = 0;
        for (int j = 1; j < len - i; j++) {
            if (list[j - 1] > list[j]) {
                swap(list[j - 1], list[j]);
                flag = 1;
            }
        }
        if (!flag) break;
    }
}
