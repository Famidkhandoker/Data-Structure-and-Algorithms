#include <iostream>
#include <algorithm>
using namespace std;
struct Item {
    int value, weight;
};
bool cmp(struct Item a, struct Item b) {
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}
double fractionalKnapsack(Item arr[], int N, int size) {
    sort(arr, arr + size, cmp);
    int curWeight = 0;
    double finalValue = 0.0;
    for (int i = 0; i < size; i++) {
        if (curWeight + arr[i].weight <= N) {

            curWeight += arr[i].weight;
            finalValue += arr[i].value;
        } else {

            int remain = N - curWeight;
            finalValue += arr[i].value * ((double)remain / arr[i].weight);
            break;
        }
    }
    return finalValue;
}

int main() {
    int N;
    cout << "Enter the capacity of the knapsack: ";
    cin >> N;
    int size;
    cout << "Enter the number of items: ";
    cin >> size;
    Item arr[size];
    cout << "Enter the value and weight of each item:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i].value >> arr[i].weight;
    }
    double maxProfit = fractionalKnapsack(arr, N, size);
    cout << "Maximum value in Knapsack = " << maxProfit << endl;

    return 0;
}

