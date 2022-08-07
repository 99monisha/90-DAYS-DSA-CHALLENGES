#include <bits/stdc++.h>
using namespace std;
void modifyString(string& s, string& s1,string& s2)
{
    string ans = "";
    for (int i = 0; i < s.length(); i++) {
 int k = 0;
        if (s[i] == s1[k]
            && i + s1.length()
                   <= s.length()) {
 
            int j;
            for (j = i; j < i + s1.length(); j++) {
 
                if (s[j] != s1[k]) {
                    break;
                }
                else {
                    k = k + 1;
                }
            }
            if (j == i + s1.length()) {
                ans.append(s2);
                i = j - 1;
            }
            else {
                ans.push_back(s[i]);
            }
        }
        else {
            ans.push_back(s[i]);
        }
    }
    cout <<"Modified String : "<< ans;
}
int main()
{
    string S = "Let's Learn C";
    string S1 = "C";
    string S2 = "C++";
    cout<<"Original String : "<<S<<endl;
    modifyString(S, S1, S2);
 
    return 0;
}