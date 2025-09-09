// An array is already sorted in ascending order except the last element.

// We need to insert this last element into its correct position to make the whole array sorted.

// i/p 1,2,3,4,5,7,8,6 
//  o/p 1,2,3,4,5,6,7,8


#include <iostream>
#include <vector>
using namespace std;

void insertLastElement(vector<int>& arr) {
    int n = arr.size();
    int last = arr[n - 1]; 
    int j;

   
    for (j = n - 2; j >= 0 && arr[j] > last; j--) {
        arr[j + 1] = arr[j]; 
    }

    
    arr[j + 1] = last;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 7, 8, 6};

    insertLastElement(arr);

    cout << "Sorted array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}