#include <iostream>
#include <vector>
#include <array>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       int n = nums.size();
        vector <int> result (n,0);
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

        vector<int> numrat;
        numrat = {8, 1, 2, 2, 3};
        vector<int> result;
        result = smallerNumbersThanCurrent(numrat);
        cout << "{";
        for (int i = 0; i < result.size(); i++)
        {
            string lidhesa = (i == result.size() - 1) ? "}": ",";
            cout << result[i] << lidhesa;
        }
        
        return 0;
    }