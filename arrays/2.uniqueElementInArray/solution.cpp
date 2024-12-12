#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

// XOR APPROACH
int findUnique(vectot<int> &arr){
    int res = 0;
    for(int ele : arr){
        res = res ^ ele;
    }
    return res;
}

int findUnique2(vector<int> &arr){
    unordered_set<int> us;
    int uniqueSum = 0;
    int totalSum = 0;

    for(int ele : arr){
        if(us.find(ele) == us.end()){
            us.insert(ele);
            uniqueSum += ele;
        }
        totalSum += ele;
    }

    return 2*uniqueSum - totalSum;

}

