#include <iostream>
#include <string>

using namespace std;


string defangIPaddr(string address) {
        string ans = "";
        for (int i=0; i< address.length();i++){
            if (address.at(i) == '.')   
            {
                ans += "[.]";
            } else {
                ans += address.at(i);
            }
            
        }
        return ans;
        
    }

int main(){

     string address = "1.1.1.1";
        string result = defangIPaddr(address);
        cout << result;

        return 0;
}