#include <vector>
#include <string.h>
#include <map>
#include <iostream>
using namespace std;

 string restoreString(string s, vector<int>& indices) {
        string result = "";
        map<int, string> bashkimi;
        for (int i = 0; i < indices.size(); i++)
        {
            bashkimi[indices[i]] = s[i];
        }
        for (int i = 0; i < indices.size(); i++)
        {
            result += bashkimi[i];
        }
        return result;
    }

int main(){

        vector<int> indices;
        string s = "codeleet";
        indices = {4, 5, 6, 7, 0, 2, 1, 3};

        string result = restoreString(s, indices);
        cout << result;

        return 0;
}