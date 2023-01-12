#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a;
        for (int  i = 0; i < m+n; i++)
        {
            if(i >= m)
            {
                nums1[i] = nums2[i - m];
            }
        }
        for (int j = 0; j < m + n; j++)
        {
            for (int i = j; i < m + n; i++)
            {
                if (nums1[i] < nums1[j])
                {
                    swap(nums1[j] , nums1[i]);
                }
            }
        }
        return nums1;
    }
int main(){
    vector<int>nums1 = {1,2,3,0,0,0};
    vector <int> nums2 = {2,5,6};
    int n = 3;
    int m = 3;
    vector <int> result = merge(nums1,m,nums2,n);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    
    return 0;
}