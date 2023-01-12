#include <iostream>
#include <string>
using namespace std;
string toLowerCase(string s) {
       int length = s.size();
       string dreni = "";
        for (int i = 0; i < length;i++ ){
            if (s[i] <= 90 && s[i] >= 65){
            dreni += s[i] + 32;
            } else
            dreni += s[i];
        }
        return dreni;
    }
int main(){
    string s = "DrenNimanaj";
    string result = toLowerCase(s);
    cout << result;
    return 0;
}