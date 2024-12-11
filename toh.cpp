#include<iostream>
using namespace std;
void toh(int n,char from,char to,char aux)
{
    if(n==0){
        return;
    }
    toh(n-1,from,aux,to);
    cout<<"MOVE DISK "<<n<<" " << from <<" to"<<" "<< to <<endl;
    toh(n-1,aux,from,to);
}
int main()
{
    int n;
    cin>>n;
    toh(n,'A','C','B');
}