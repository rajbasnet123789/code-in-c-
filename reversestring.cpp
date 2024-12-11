#include<iostream>
using namespace std;
void reversestring(string s,int in)
{
    if(in>=s.length())
    {
        return;
    }
    reversestring(s,in+1);
    printf("%c",s[in]);
}
int main()
{
    string s;
    cin>>s;
    reversestring(s,0);
}