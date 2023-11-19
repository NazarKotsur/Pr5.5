#include <iostream>
using namespace std;
int countOnes(int n, int& recursionDepth) {
    if (n == 0) {
        return 0;
    }
    else {
        recursionDepth++;
        int smallerValue = n & (n - 1);
        return 1 + countOnes(smallerValue, recursionDepth);
    }
}

int main() {
    int number;
    cout << "number: ";
    cin >> number;

    int recursionDepth = 0;
    int onesCount = countOnes(number, recursionDepth);

    cout << "Count 1 in: " << number << ": " << onesCount << std::endl;
    cout << "Depth: " << recursionDepth << std::endl;

    return 0;
}