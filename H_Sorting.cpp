#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;

    cin >> n;

    int a[n + 1];

    for(int i = 0; i < n; i++) {
            cin >> a[i];
    }

    sort(a, a + n);

     for(int i = 0; i < n; i++) {
            cout << a[i] << " ";
    }

    return 0;
}