#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
string remove_dup_lexi(string &str) {
    if (str == "") return str;
    int len = str.length();
    vector<bool> is_last(len, true);
    bool visited[26]={0};
    for (int i=str.length()-1; i>=0; i--) {
        if (visited[str[i]-'a']) is_last[i] = false;
        visited[str[i]-'a'] = true;
    }
    bool ok[26]={0};
    string result;
    for (int i=0; i<str.length(); i++) {
        if (ok[str[i]-'a']) continue;
        bool has_better = false;
        for (int j=i; j<str.length(); j++) {
            if (ok[str[j]-'a']) continue;
            if (str[j] >= str[i] && is_last[j]) break;
            if (str[j] < str[i]) {
                has_better = true;
                break;
            }
        }
        if (!has_better) {
            result += str[i];
            ok[str[i]-'a'] = true;
        }
    }
    return result;
}
int main() {
	//code

	string s;
	cin>>s;
	cout<<remove_dup_lexi(s)<<endl;









}
