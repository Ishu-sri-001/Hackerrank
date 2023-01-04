#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'minimumNumber' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING password
 */

int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    int d=0,u=0,l=0,s=0;
    int n1=0,n2=0;
    if (n<6)
    n2=6-n;
    int len=password.size();
        for (int i=0;i<len;i++)
        {
            if (password.at(i)>='0' && password.at(i)<='9')
            d++;
            else if (password.at(i)>='a' && password.at(i)<='z')
            l++;
            else if (password.at(i)>='A' && password.at(i)<='Z')
            u++;
            else
             s++;   }
             if (d==0)
             n1++;
             if (u==0)
             n1++;
             if (l==0)
             n1++;
             if (s==0)
             n1++;
            int m=max(n1,n2);
           // cout<<d<<" "<<u<<" "<<l<<" "<<s;
            return m;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
