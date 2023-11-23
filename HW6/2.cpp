#include <bits/stdc++.h>
using namespace std;
string addLargeNumbers(string num1, string num2) {
    int n1 = num1.length();
    int n2 = num2.length();
    int maxLength = max(n1, n2);
    string result(maxLength, '0');
    int carry = 0;
    for (int i = 0; i < maxLength; i++) {
        int digit1 = (i < n1) ? (num1[n1 - 1 - i] - '0') : 0;
        int digit2 = (i < n2) ? (num2[n2 - 1 - i] - '0') : 0;
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        result[maxLength - 1 - i] = '0' + (sum % 10);
    }
    if (carry > 0) {
        result = "1" + result;
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        string sum = addLargeNumbers(a, b);
        cout << sum << endl;
    }

    return 0;
}
