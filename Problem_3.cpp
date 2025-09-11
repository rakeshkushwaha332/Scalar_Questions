// left Rotate the given array
// Input:  arr = [1, 2, 3, 4, 5], d = 2
// Output: [3, 4, 5, 1, 2]



#include <algorithm>  

void leftRotate(vector<int>& arr, int d) {
    int n = arr.size();
    d = d % n;

    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
    reverse(arr.begin(), arr.end());
}