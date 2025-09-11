// Find the duplicate Number in an array

// Input:  [1, 3, 4, 2, 2]
// Output: 2

int findDuplicate(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) return arr[i];
        }
    }
    return -1;
}