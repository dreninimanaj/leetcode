#include <iostream>
#include <vector>

using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
    int result = 0;

    int rreshti = accounts.size(); // 3
    int kolona = accounts[0].size(); // 2

    for (int i=0;i<rreshti;i++){
     int shuma = 0;
      for (int j=0;j<kolona;j++){
        shuma += accounts[i][j];
      }
    result = max(result, shuma);
    }
    return result;
    }

int main(){

    vector<vector<int>> accounts;
    accounts = {{1, 2, 3}, {3, 2, 1}};
    int result = maximumWealth(accounts);
    cout << result;

    return 0;
}