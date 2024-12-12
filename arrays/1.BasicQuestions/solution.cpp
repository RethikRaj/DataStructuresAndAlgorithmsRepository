#include <iostream>
#include <vector>

using namespace std;

class Solution{
    void countZeroesAndOnes(vector<int> &arr){
        int countZeroes = 0;
        int countOnes = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i] == 0){
                countZeroes++;
            }else{
                countOnes++;
            }
        }
        cout << "Number of zeroes: " << countZeroes << endl;
        cout << "Number of ones: " << countOnes << endl;
    }

    void maxMin(vector<int> &arr){
        int max = INT_MIN;
        int min = INT_MAX;

        for(int ele : arr){
            if(ele > max){
                max = ele;
            }
            if(ele < min){
                min = ele;
            }
        }
        cout << "Max: " << max << endl;
        cout << "Min: " << min << endl;
    }

    void secondSmallest(vector<int> &arr){
        int firstMin = INT_MAX;
        int secondMin = INT_MAX;
        for(int i=0;i<size;i++){
            if(arr[i] < firstMin){
                secondMin = firstMin;
                firstMin = arr[i];
            }else if(arr[i] < secondMin && arr[i] != firstMin){ // IMPORTANT : arr[i] != firstMIN DONT FORGET => DUPLICATE ELEMENTs
                secondMin = arr[i];
            }
        }
        
        return secondMin;
    }

    void secondLargest(vector<int> &arr){
        int firstMax = INT_MIN;
        int secondMax = INT_MIN;

        for(int ele : arr){
            if(ele > firstMax){
                secondMax = firstMax;
                firstMax = ele;
            }else if(ele > secondMax && ele != firstMax){
                secondMax = ele;
            }
        }
        return secondMax;
    }

    void extremePrint(vector<int> &arr){
        int start = 0;
        int end = arr.size() - 1;

        while(start <= end){
            cout << arr[start] << " ";
            start++;
            if(start <= end){
                cout << arr[end] << " ";
                end--;
            }
        }
    }

    void reverseAnArray(vector<int> &arr){
        int start = 0;
        int end = arr.size() - 1;

        while(start <= end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
}
