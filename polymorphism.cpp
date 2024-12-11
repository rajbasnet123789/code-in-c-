//polymorphism:multiple form
//one name and multiple form
//compile time : the decision is take that which function is to be call at compile time early binding and static binding function overloading and operator overloading
// and run time :  virtual function 
//derived class pointer :Late Binding
#include <iostream>
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
}
