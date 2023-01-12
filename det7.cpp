#include <iostream>
#include <string>
using namespace std;

int percentageLetter(string s, char letter) {

    double count = 0;
    double length = s.size();
    double result;
    for (int i = 0; i < length; i++)
    {
        if (s[i] == letter)
        {
            count++;
        }
        
    }
    result = (count / length);
    return result * 100;
        }

int main(){
    string s = "foobar";
    char letter = 'o';

    int result = percentageLetter(s, letter);
    cout << result;
    return 0;
}