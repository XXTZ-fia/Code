#include<bits/stdc++.h>
using namespace std;
const int MAX_WORDS = 1000;
string toLower(const string &s);
int main() {
    string words[MAX_WORDS];
    int count[MAX_WORDS] = {0};
    int wordIndex = 0;
    string line, word;
    
    while (getline(cin, line)) {
        for(int i = 0; i < line.length(); i++){
            if(line[i] < 'A' || (line[i] > 'Z' && line[i] < 'a') || line[i] > 'z'){
                    line[i] = ' ';
            }
        }
        stringstream ss(toLower(line));
        while (ss >> word) {

            bool found = false;
            for (int i = 0; i < wordIndex; ++i) {
                if (words[i] == word) {
                    count[i]++;
                    found = true;
                    break;
                }
            }

            if (!found && wordIndex < MAX_WORDS) {
                words[wordIndex] = word;
                count[wordIndex]++;
                wordIndex++;
            }
        }
    }

    int maxCount = 0;
    string mostFrequentWord = "";
    for (int i = 0; i < wordIndex; ++i) {
        if (count[i] > maxCount || (count[i] == maxCount && words[i] > mostFrequentWord)) {
            maxCount = count[i];
            mostFrequentWord = words[i];
        }
    }

    cout << mostFrequentWord << " " << maxCount << endl;

    return 0;
}

// 将字符串转换为小写
string toLower(const string &s) {
    string result = s;
    transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}