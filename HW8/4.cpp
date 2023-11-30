#include<bits/stdc++.h>
using namespace std;
int main() {
    string line;
    getline(cin, line);
    for (size_t i = 0; i < line.length(); ) {
        if (isalpha(line[i])) {  
            size_t start = i;
            while (i < line.length() && isalpha(line[i])) { 
                i++;
            }
            reverse(line.begin() + start, line.begin() + i);  
        } else {
            i++; 
        }
    }
    cout << line << endl;
    return 0;
}