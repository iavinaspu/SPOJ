#include<bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

int t;
cin >> t;
cin.ignore();
while(t--){
    string s = "";
    getline(cin, s);

    for (int i = 0; i < s.size() / 2;i++){
        if(i%2==0){
            cout << s[i];
        }
    }
    cout << endl;
}
return 0;
}