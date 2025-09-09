// Reverse the given array
// I/p  arr[]= {1,2,3,4,5,6}
// O/P  arr[]= {6,5,4,3,2,1}

#include <iostream>
using namespace std;
   void reverse(vecotr <int>& arr){
    for(int i = 0; i < arr.size()/2;i++){
        swap (arr((n-1)-i), arr[i]);

    }
 
   }

int main(){

    vector<int> arr   = {1,2,3,4,5,6};
   
    reverse(arr);
    cout << "reversed array is ";
    for(auto x : arr){
        cout << x << " ";
    }
    cout << endl;
    return 0;



   
}
