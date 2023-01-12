#include <iostream>
#include <vector>

using namespace std;
vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector <int> result (n);
        int counter;
        for (int i =0;i<n;i++){
            counter = 0;
            for (int j=0;j<n;j++){
                if (i!=j && nums[i]>nums[j]){
                    counter++;
                }

            }
            result[i] = counter;

        }

        return result;
    }
int main(){
    vector <int> nums = {8,1,2,2,3};
   vector <int> result = smallerNumbersThanCurrent(nums);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    
    return 0;
}