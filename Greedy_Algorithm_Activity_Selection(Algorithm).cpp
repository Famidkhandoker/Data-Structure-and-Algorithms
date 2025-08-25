#include <iostream>
#include <algorithm>
using namespace std;
struct Activity {
    int start, finish;
};
bool activityCompare(Activity s1, Activity s2) {
    return (s1.finish < s2.finish);
}
void printMaxActivities(Activity arr[], int n) {
    sort(arr, arr + n, activityCompare);
    cout << "Following activities are selected :\n";
    int i = 0;
    cout << "(" << arr[i].start << ", " << arr[i].finish << ")";
    for (int j = 1; j < n; j++) {
        if (arr[j].start >= arr[i].finish) {
            cout << ", (" << arr[j].start << ", " << arr[j].finish << ")";
            i = j;
        }
    }
    cout << endl;
}
int main() {
    int n;
    cout << "Enter the number of activities: ";
    cin >> n;

    Activity arr[n];
    cout << "Enter start and finish times of activities:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i].start >> arr[i].finish;
    }
    printMaxActivities(arr, n);
    return 0;
}
/*Enter the capacity of the knapsack: 60
Enter the number of items: 4
Enter the value and weight of each item:
100 10
280 40
120 20
130 24
Maximum value in Knapsack = 440*/

