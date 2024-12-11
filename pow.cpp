#include<iostream>
using namespace std;
// forward declaration
class complex;
class calculator
{
    public:
    int add(int a,int b)
    {
        return(a+b);
    }
    int sumcomplex(complex,complex );
    int sumi(complex,complex);
   
};
class complex
{
    int a,b;
    //individually friend 
    //friend int calculator ::sumcomplex(complex o1,complex o2);
    //friend int calculator :: sumi(complex o1,complex o2);
    // entire class
friend class calculator;
    public:

    void setnumber(int n1,int n2)
    {
          a=n1;
          b=n2;
    }
  
    void printnumber()
    {
        cout<<"your number is :"<<a<<" + "<<b<<"i";
    }
};
int calculator :: sumcomplex(complex o1,complex o2)
 {
        return (o1.a+o2.a);
    }
int calculator :: sumi(complex o1,complex o2)
 {
        return (o1.b+o2.b);
    }

int main()
{
    complex c1,c2,sum;
    c1.setnumber(7,8);
    c1.printnumber();
    cout<<endl;
    c2.setnumber(9,6);
    c2.printnumber();

    calculator a;
    cout<<a.sumcomplex(c1,c2);
    cout<<a.sumi(c1,c2);
    
}
#include<iostream>
using namespace std;
int pow(int x,int n)
{
     if(n==0)
     {
        return 1;
     }
     if(n==1)
     {
        return x;
     }
     return x*pow(x,n-1);
}
int main()
{
    int x;
    int n;
    cout<<"enter the number :";
    cin>>x;
    cout<<"enter the power: ";
    cin>>n;
    cout<<pow(x,n);
}