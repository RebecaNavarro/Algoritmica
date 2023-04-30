#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;


int main() {
    string s;
    cin >> s;

    stack<int> stk; // Usaremos una pila para llevar el índice de los paréntesis que no tienen pareja
    int cnt = 0; // Contador de paréntesis sin pareja

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            stk.push(i);
        } else if (s[i] == ')') {
            if (!stk.empty()) {
                stk.pop();
            } else {
                cnt++;
            }
        }
    }

    if (cnt == 0 && stk.empty()) {
        cout << "possible" << endl;
    } else if (cnt == 1 && !stk.empty()) {
        int idx = stk.top();
        if (idx > 0 && s[idx - 1] == ')' && s[idx] == '(' && s[idx + 1] == ')') {
            cout << "possible" << endl;
        } else {
            cout << "impossible" << endl;
        }
    } else {
        cout << "impossible" << endl;
    }

    return 0;
}
