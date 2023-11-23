#include<bits/stdc++.h>
using namespace std;
int main(){
    string num;
    getline(cin,num);

    map<string,int> WordCount;
    stringstream ss(num);
    string Word;
    while(ss >> Word){
        WordCount[Word]++;
    }
    for (const auto& pair : WordCount) {
        cout << pair.first << " " << pair.second << std::endl;
    }
    return 0;
}