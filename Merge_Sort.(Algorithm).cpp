#include<iostream>
using namespace std;
void Merge(int arr[], int start, int mid, int end) {
    int len1 = mid - start + 1;
    int len2 = end - mid;

    int leftArr[len1], rightArr[len2];

    for (int i = 0; i < len1; i++) {
        leftArr[i] = arr[start + i];
    }
    for (int j = 0; j < len2; j++) {
        rightArr[j] = arr[mid + 1 + j];
    }

    int x = 0, y = 0, k = start;

    while (x < len1 && y < len2) {
        if (leftArr[x] <= rightArr[y]) {
            arr[k] = leftArr[x];
            x++;
        } else {
            arr[k] = rightArr[y];
            y++;
        }
        k++;
    }

    while (x < len1) {
        arr[k] = leftArr[x];
        x++;
        k++;
    }
    while (y < len2) {
        arr[k] = rightArr[y];
        y++;
        k++;
    }
}
void Merge_sort(int arr[], int start, int end) {
    if (start < end) {
        int mid = start + (end - start) / 2;
        Merge_sort(arr, start, mid);
        Merge_sort(arr, mid + 1, end);
        Merge(arr, start, mid, end);
    }
}
void PRINT_ARRAY(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << " " << arr[i];
    }
}
int main() {
    int arr[] = {3, 12, 7, 6, 22, 1, 17, 33};
    int n = sizeof(arr) / sizeof(arr[0]);
    PRINT_ARRAY(arr, n);
    Merge_sort(arr, 0, n - 1);
    cout<<endl;
    cout << "After sorting array:";
    PRINT_ARRAY(arr, n);
    return 0;
}
