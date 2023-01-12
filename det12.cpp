#include <iostream>
#include <vector>
using namespace std;
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int j = 0;
        int max = j;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i]==1)
            {
               j++;
            }
            else if(nums[i] == 0)
            {
                j = 0;
            }
            if (j > max)
            {
                max = j;
            }
        }
        return max;
    }

int main(){
    vector <int> nums = {1,1,0,1,1,1};
    int result = findMaxConsecutiveOnes(nums);
    cout << result;
    return 0;
}
