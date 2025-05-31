#include<bits/stdc++.h>
using namespace std;


void selection_sort(int n, vector<int> &array){
    for(int i = 0; i < n-1; i++){
        int min = i; // let's take the first element as smallest
        for(int j = i; j < n; j++){
            if(array[j] < array[min]) min = j;
        }

        // swap elements
        int temp = array[min];
        array[min] = array[i];
        array[i] = temp;
    }
}

int main(){
    int n, num;
    vector<int> array;

    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> num;
        array.push_back(num);
    }

    // sorting function
    selection_sort(n, array);

    // print the array
    for(auto it = array.begin(); it != array.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
