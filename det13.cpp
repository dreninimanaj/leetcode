#include <iostream>
#include <vector>
using namespace std;
    int findNumbers(vector<int>& nums) {
        int even = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int shifra = 0;
            while(nums[i] > 0)
            {
              nums[i]/=10;
              shifra++;
            }
            if (shifra % 2 == 0)
            even++;
        }
        return even;
    }

int main(){
    vector <int> nums = {12,345,2,6,7896};
    int result = findNumbers(nums);
    cout << result;
    return 0;
}
