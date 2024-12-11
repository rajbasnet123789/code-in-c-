#include<iostream>
using namespace std;
class telcall1
{
    public:
    int phno;
    string sname;
    int n;
    float amt;
    telcall1(int phno,string sname,int n)
    {
         this->phno=phno;
         this->sname=sname;
         this->n=n;
         this->amt=0;
    }
    void compute()
    {
         if(n<=100)
         {
             this->amt=500;
         }
         else if(n<=200)
         {
            this->amt=500+(n-100)*1;
         }
         else if(n<=300)
         {
            this->amt=500+100*1+(n-200)*1.20;
         }
         else 
         {
            this->amt=500+100*1+100*1.20+(n-300)*1.50;
         }
    }
    void display()
    {
        cout<<this->amt;
    }
};
int main()
{
    int n;
    cout<<"enter number of units:";
    cin>>n;
    telcall1 a(98637,"Raj",n);  
    a.compute();
    a.display();
}