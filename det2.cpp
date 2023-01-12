#include <iostream>
#include <array>
#include <vector>
using namespace std;

int numIdenticalPairs(vector<int>& nums) {
        int result=0;

        for (int i=0;i<nums.size()-1;i++){
            for (int j=i+1;j<nums.size();j++){
                if (nums[i]==nums[j]){
                    result++;
                }
            }
        }
        return result;
    }

int main(){

        vector<int> numrat;
        numrat = {1, 2, 3, 1, 1, 3};
        int result = numIdenticalPairs(numrat);
        cout << result;
        return 0;
}