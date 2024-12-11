#include<iostream>
using namespace std;
bool palindrome(string s,int in,int j)
{
    if(in>j)
    {
        return true;
    }
    if(s[in]!=s[j])
    {
       return false;
    }
   return palindrome(s,in+1,j-1);

}
int main()
{
    string s;
    cin>>s;
    if(palindrome(s,0,s.length()-1))
    {
        cout<<"true";
    }
    else
    {
         cout<<"false";
    }
}