#include <bits/stdc++.h> 

using namespace std;

 

int firstOccurrence(vector<int>& arr, int n, int k) {

    int start = 0;

    int end = n - 1;

    int mid;

    

    while (start <= end) {

        mid = start + (end - start) / 2;

        

        if (arr[mid] == k) {

            if (mid == 0 || arr[mid - 1] != k) {

                return mid;

            } else {

                end = mid - 1;

            }

        } else if (k < arr[mid]) {

            end = mid - 1;

        } else {

            start = mid + 1;

        }

    }

    

    return -1;  // Element not found

}

 

int lastOccurrence(vector<int>& arr, int n, int k) {

    int start = 0;

    int end = n - 1;

    int mid;

    

    while (start <= end) {

        mid = start + (end - start) / 2;

        

        if (arr[mid] == k) {

            if (mid == n - 1 || arr[mid + 1] != k) {

                return mid;

            } else {

                start = mid + 1;

            }

        } else if (k < arr[mid]) {

            end = mid - 1;

        } else {

            start = mid + 1;

        }

    }

    

    return -1;  // Element not found

}

 

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {

    int first = firstOccurrence(arr, n, k);

    int last = lastOccurrence(arr, n, k);

    

    return make_pair(first, last);

}

 

