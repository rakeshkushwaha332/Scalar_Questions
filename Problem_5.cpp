// You have to find the how many number is repating in the array 

// Input:  [1, 2, 3, 2, 4, 5, 1, 1]
// Output:
// 1 → 3 times
// 2 → 2 times

#include <iostream>
#include <vector>
using namespace std;

void findRepeating(vector<int>& arr) {
    int n = arr.size();

    cout << "Repeating numbers:\n";
    for (int i = 0; i < n; i++) {
        int count = 1;

        // check if this element was already counted before
        bool alreadyChecked = false;
        for (int k = 0; k < i; k++) {
            if (arr[k] == arr[i]) {
                alreadyChecked = true;
                break;
            }
        }
        if (alreadyChecked) continue;

        // count frequency of arr[i]
        for (int j = i + 1; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }

        if (count > 1) {
            cout << arr[i] << " → " << count << " times\n";
        }
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 2, 4, 5, 1, 1};
    findRepeating(arr);
    return 0;
}