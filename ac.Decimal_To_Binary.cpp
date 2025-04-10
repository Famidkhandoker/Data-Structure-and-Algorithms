#include <iostream>
using namespace std;

int decToBinary(int decNum) {
    int ans = 0;
    int pow = 1;

    while (decNum > 0) {
        int rem = decNum % 2;
        decNum=decNum /2;
        ans =ans + (rem * pow);
        pow *= 10;
    }

    return ans;//binary form
}

int main() {
    int decNum = 50;
    cout << "Binary of " << decNum << " is: " << decToBinary(decNum) << endl;//Binary of 50 is: 110010
    return 0;
}

