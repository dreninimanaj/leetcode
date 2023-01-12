#include <iostream>
#include <vector>
#include <array>
using namespace std;
int finalValueAfterOperations(vector<string>& operations) {
        int count = 0;

        for (int i=0;i<operations.size();i++){
            if (operations[i] == "X++" || operations[i] == "++X") {
                count++;
            } else if (operations[i] == "X--" || operations[i] == "--X"){
                count--;
            }
        }
        return count;
    }

int main(){

        vector<string> operations;
        operations = {"--X", "X++", "X++"};
        int result = finalValueAfterOperations(operations);
        cout << result;
        return 0;
}