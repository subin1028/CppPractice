#include <bits/stdc++.h>
using namespace std;

int func2(int arr[], int N){
    int harr[101] = {};
    for (int i = 0; i < N; i++){
        if(harr[arr[i]] == 1)
            return 1;
        harr[100-arr[i]]++;
    }
    return 0;
}

int main(void) {
    int arr[] = {1, 52,48};
    int result = func2(arr, 3);
    cout << result;
}