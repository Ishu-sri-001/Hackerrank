#include <bits/stdc++.h>
#include <string>
using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {
    for (int i=0;i<s.length();i++)
    {
        if (isupper(s[i]))
        {
            s[i]=tolower(s[i]);
        }
    }
    string str="abcdefghijklmnopqrstuvwxyz ";
    int l=s.length()>str.length()? s.length():str.length();
    for (int i=0;i<str.length();i++)
    {
        char ch=str[i];
        size_t j= s.find(ch);
        if (j== string::npos)
        return "not pangram";
        else
        continue;
    }
    return "pangram";
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
