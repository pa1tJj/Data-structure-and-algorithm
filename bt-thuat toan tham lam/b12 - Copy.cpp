#include<bits/stdc++.h>
using namespace std;
bool check(string s1, string s2)
{
    int k = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        int ok = 0;
        for (int j = k; j < s2.size(); j++)
        {
            if (s1[i] == s2[j])
            {
                ok = 1;
                k = j + 1;
                break;
            }
        }
        if (!ok)
            return 0;
    }
    return 1;
}
int main(){
	 vector<string> f;
    for (long long i = 1; i <= 1e6; i++){
    for (long long i = 1; i <= 50; i++)
        f.push_back(to_string(i * i * i));
    	
	}
        string s, ans = "-1";
        getline(cin,s);
        for (int i = f.size() - 1; i >= 0; i--)
        {
            if ((f[i].size() < s.size() || f[i] < s) && check(f[i], s))
            {
                ans = f[i];
                break;
            }
        }
        cout << ans << endl;

}
