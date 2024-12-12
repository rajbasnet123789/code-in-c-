//try:it represent a block of clock that may throw a exception placee inside the try bloc
//catch:it represent a block of code that is executed when a particular exception ids thrown from the try bloc
//throw:an exception can be thrown in c++ using throw keyword

/*class customer{
    string name;
    int balance,account_number;
    public:
    customer(string name,int balance,int account_number):name(name),balance(balance),account_number(account_number){}
    void deposit(int amount){
        if(amount<0){
             throw "amount should be greater than 0\n";
        }
            balance+=amount;
            cout<<"Amount is credited"<<endl;
    }
    void withdraw(int amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
            cout<<"withdraw";
        }
        else if(amount==0){
             throw "amount be greater than 0";
        }
        else{
             throw "your balance is low";
        }
    }
};
int main(){
     customer c("rohit",5000,100);
     try{
     c.deposit(100);
     c.withdraw(6000);
     c.deposit(100);
     }
     catch(const char*e)
     {
         cout<<"Exception occur: "<<e;
     }

}
int main(){
     int a,b;
     cin>>a>>b;
     int c;
    
     try{
         if(b==0){
         throw "ZERO CANT DIVIDE ANYTHING leads to infinite";
     }
     c=a/b;
     cout<<c<<endl;
     }catch(const char*e){
         cout<<"EXCEPTION:"<<e<<endl;
     }
  
}
#include <iostream>
#include <exception>  // For std::exception and std::bad_alloc
using namespace std;

int main() {
    try {
        int* p = new int[100000000000];  // Attempt to allocate a large amount of memory
        cout << "MEMORY ALLOCATED" << endl;

        // Free the allocated memory
        delete[] p;
    } 
    catch (const exception& e) {
        // Catch all exceptions derived from std::exception
        cout << "EXCEPTION occurred due to line 9: " << e.what() << endl;
    }

    return 0;
}
#include <iostream>
#include <exception>
#include <string>

using namespace std;

// Custom runtime_error class
class runtime_error2 : public exception {
    const char* s; // Pointer to store the error message
public:
    runtime_error2(const char* msg) : s(msg) {} // Constructor to initialize the message

    const char* what() const noexcept override{ 
        return s;
    }
};

class customer {
    string name;
    int balance, account_number;

public:
    customer(string name, int balance, int account_number) 
        : name(name), balance(balance), account_number(account_number) {}

    void deposit(int amount) {
        if (amount <= 0) {
            throw "Amount should be greater than 0\n";
        }
        balance += amount;
        cout << "Amount is credited" << endl;
    }

    void withdraw(int amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn successfully" << endl;
        } else if (amount == 0) {
            throw runtime_error2("Amount must be greater than 0");
        } else {
            throw runtime_error2("Your balance is low");
        }
    }
};

int main() {
    customer c("rohit", 5000, 100);

    try {
        c.deposit(0); // Will throw a const char* exception
        c.withdraw(6000); // Will throw a runtime_error exception
        c.deposit(0); // This line won't execute due to the previous exception
    } catch (const char* msg) {
        cout << "Exception occurred: " << msg << endl;
    } catch (const runtime_error2& e) {
        cout << "Exception occurred 1: " << e.what() << endl;
    }

    return 0;
}
#include<iostream>
#include<exception>
using namespace std;
class InvalidAge:public exception{
    public:
      int n;
    InvalidAge(int n):n(n) {};
    const char* what(){
          return "NO VALID AGE";
    }
};
int main(){
      int n;
      cin>>n;
      try{
          if(n>18){
            cout<<"valid";
          }
          else{
            throw InvalidAge(n);
          }
      }
      catch(InvalidAge &e){
          cout<<"EXCEPTION:"<<e.what()<<endl;
      }
}*/
#include<iostream>

using namespace std;
void m1(int i){
    try{
        if(i<0){
            throw i;
        }
    }
    catch(...){
          cout<<"throw from m1";
          throw i;
    }
}
int main(){
      try {
         m1(-4);
      }
      catch(...){
        cout<<"in main";
      }
}
