/*#include <iostream>
using namespace std;

// Base class
class Person {
public:
   virtual void greet() {
        cout << "Hello from Person!" << endl;
    }
     virtual ~Person(){
        cout<<"destructor of base class divyanka fuck off anal"<<endl;
    } 

};



// Derived class from Student and Teacher
class AssistantTeacher : public Person {
public:
    void greet() {
        cout << "Hello from AssistantTeacher!" << endl;
    }
    ~AssistantTeacher(){
        cout<<"destructor of derived class akriti fuck off anal"<<endl;
    } 

};

int main() {
    AssistantTeacher a;
  Person *p=&a;
  p->greet();
  delete p;
    return 0;
}*/
#include<iostream>
using namespace std;

// Base class
class Person {
public:
    virtual void greet()=0;

};



// Derived class from Student and Teacher
class AssistantTeacher : public Person {
public:
    void greet() {
        cout<<"hi";
    }
        

};

int main() {
    AssistantTeacher a;
  Person *p=&a;
  p->greet();
  delete p;
    return 0;
}
