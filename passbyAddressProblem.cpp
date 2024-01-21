#include <iostream>
using namespace std;

void firstlastindex(string s, char c, int *first, int *last)
{
    for (int i = 0; i<s.size(); i++)
    {
        if (s[i] == c){
            *first = i;
            break;
        }
    }

    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == c){
            *last =i;
            break;
        }
    }
}

int main()
{
    string s = "aaabac";
    char c = 'a';
    int first = -1;
    int last = -1;

    firstlastindex(s, c, &first, &last);
    cout << first << endl;
    cout << last << endl;

    return 0;
}
