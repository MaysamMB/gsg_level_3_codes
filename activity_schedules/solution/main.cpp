#include <bits/stdc++.h>
#define int long long int
using namespace std;

int n;
int cnt2 = 0;
vector<string> activities = {"Swimming", "Running", "Football"};

void rec(vector<string> cur) {
    if ((int)cur.size() == n) {
        for (string activ : cur) {
            cout << activ << " ";
        }
        cnt2++;
        cout << endl;
        return;
    }
    for (string activ : activities) {
        if (cur.size() == 0 or cur.back() != activ) {
            vector<string> temp = cur;
            temp.push_back(activ);
            rec(temp);
        }
    }
}

signed main() {

    cin >> n;
    rec({});
    cout << endl;
    cout << "=======================================" << endl << endl;
    cout << "Count: " << cnt2 << endl;


    return 0;
}
