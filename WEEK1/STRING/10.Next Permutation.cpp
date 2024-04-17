Next Permutation
link:https://www.geeksforgeeks.org/problems/next-permutation5226/1

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> nextPermutation(int N, vector<int> arr) {
        int i = arr.size() - 2;
        while (i >= 0 && arr[i] >= arr[i + 1]) {
            i--;
        }
        
        if (i >= 0) {
            int j = arr.size() - 1;
            while (j >= 0 && arr[j] <= arr[i]) {
                j--;
            }
            swap(arr, i, j);
        }
        
        reverse(arr, i + 1);
        return arr; // Added return statement
    }
    
    void swap(vector<int>& arr, int i, int j) { // Pass vector by reference
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
    void reverse(vector<int>& arr, int start) { // Corrected signature
        int end = arr.size() - 1; // Initialize end index
        while (start < end) {
            swap(arr, start, end);
            start++;
            end--;
        }
    }
};


or


class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        next_permutation(arr.begin(),arr.end());
        return arr;
    }
};
