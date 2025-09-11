//  Array contain the element form 1 to n  exactly 1 elements is missiong from that array 
//  you have to find that 

//  Input:  [1, 2, 4, 5]   (n = 5)
// Output: 3

#include <iostream>
#include <vector>
using namespace std;

int findMissing(vector<int>& arr, int n) {
    for (int i = 1; i <= n; i++) {
        bool found = false;
        for (int j = 0; j < arr.size(); j++) {
            if (arr[j] == i) {
                found = true;
                break;
            }
        }
        if (!found) return i;
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 2, 4, 5};
    int n = 5;
    cout << "Missing number: " << findMissing(arr, n) << endl;
}
