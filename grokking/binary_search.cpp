#include<bits/stdc++.h>
using namespace std;


int binary_search(vector<int> &nums, int target) {
    int n = nums.size();
    int low = 0, high = n - 1;

    // while we haven't narrowed it down to one element
    while (low <= high){
        int mid = (low + high ) / 2;
        int guess = nums[mid]; // middle item
        if(guess == target) return mid;
        else if(target < guess) high = mid - 1;
        else if(target > guess) low = mid + 1;
    }
    return -1;
}

int main() {
    vector<int> array = {1, 3, 5, 7, 9};
    int target;
    cout << "Enter the target: ";
    cin >> target;
    int result = binary_search(array, target);
    if(result == -1) cout << "There is no such element" << endl;
    else if(result) cout << "The position of element is: " << result << endl;
    return 0;
}

/*
* suppose we do have 128 names so the total naumber of steps it would take log2(n)
* steps = log2(128) => 7 steps
*/
