#include <iostream>
#include <vector>
#include <string.h>
#include <map>
using namespace std;

 string restoreString(string s, vector<int>& indices) {
        map<int, string> together;
        for (int i=0; i<indices.size();i++){
            together[indices[i]] = s.at(i);
        }

        string result = "";

        for(int i =0;i<indices.size();i++){
            result += together[i];
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