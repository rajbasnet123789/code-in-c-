//polymorphism:multiple form
//one name and multiple form
//compile time : the decision is take that which function is to be call at compile time early binding and static binding function overloading and operator overloading
// and run time :  virtual function 
//derived class pointer :Late Binding
/*#include <iostream>
using namespace std;

class base {
public:
    int a;
    int b;

    // Base class display method
     void display() { // Declare as virtual for polymorphism
        cout << "display base class" << endl;
    }
};

class derived : public base {
public:
    // Derived class display method
    void display(){ // Override keyword is optional but recommended
        cout << "display base class" << endl;
        cout << "display derived class" << endl;
    }
};

int main() {
    base* a;       // Base class pointer
    derived b;     // Derived class object
    a = &b;        // Base class pointer pointing to derived class object
    a->display();  // Call display; polymorphism ensures derived class's display is called
    return 0;
}*/
#include<iostream>
using namespace std;
class Ride{
      public:
      int ride;
      int fare;
      Ride(int ride,int fare): ride(ride),fare(fare) {}
      virtual int calculateFare()=0;
      virtual void display(){
        cout<<"total fare is:"<<calculateFare()<<endl;
      }
        
};
class StandardRide:public Ride{
    public:
      StandardRide(int ride,int fare):Ride(ride,fare) {}
    int calculateFare() override{
          return fare+(ride*10);
    }
};
class premiumRide:public Ride{
    public:
      premiumRide(int ride,int fare):Ride(ride,fare) {}
    int calculateFare() override{
          return fare+(ride*50);
    }
};
class carpoolRide:public Ride{
    public:
      carpoolRide(int ride,int fare):Ride(ride,fare) {}
    int calculateFare() override{
          return fare+(ride*100);
    }
};
int main(){
      Ride *r;
       StandardRide s(10, 50);  // 10 km ride, base fare 50
    r = &s;
    r->display();

    // Premium Ride
    premiumRide p(10, 100);  // 10 km ride, base fare 100
    r = &p;
    r->display();

    // Carpool Ride
    carpoolRide c(10, 20);  // 10 km ride, base fare 20
    r = &c;
    r->display();

    return 0;
}



