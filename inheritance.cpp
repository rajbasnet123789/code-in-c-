/*/*#include<iostream>
#include<cmath>
using namespace std;

create 2 classes:
simple claculator - take input of 2 number using a ultility function and performs +,-,*,/
scientific calculator-take input of 2 number and perform extra four scientific operation */
/*class Calculator {
      public:
         int a;
         int b;
      Calculator(int a, int b) {
          this->a = a;
          this->b = b;
      }
      int sum() {
          return a + b;
      }
      int diff() {
           return abs(a - b);
      }
      int multiply() {
           return a * b;
      }
      int divide() {
           if (b != 0)
               return a / b;
           else {
               cout << "Error: Division by zero!\n";
               return 0; // Return 0 as a safe value
           }
      }
};

class ScientificCalculator {
       public:
       int a;
       int b;
       ScientificCalculator(int a, int b) {
           this->a = a;
           this->b = b;
       }
       double cosine() {
           return cos(a);
       }
       double sine() {
           return sin(a);
       }
};
//multiple inheritance : two dad have one son
//herirachical inheritance: one dad have two son
//multilevel inheritance: derived from already derived class
//hybrid inheritance: diamond problem 
class HybridCalculator : public Calculator, public ScientificCalculator {
       public:
       HybridCalculator(int a, int b) : Calculator(a, b), ScientificCalculator(a, b) {}
       void display() {
            cout << "Simple Calculator Operations:\n";
            cout << "Addition: " << sum() << endl;
            cout << "Subtraction: " << diff() << endl;
            cout << "Multiplication: " << multiply() << endl;
            cout << "Division: " << divide() << endl;

            cout << "\nScientific Calculator Operations:\n";
            cout << "Sine: " << sine() << endl;
            cout << "Cosine: " << cosine() << endl;
       }
};

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    HybridCalculator calc(x, y);
    calc.display();

    return 0;
}*/
/*20.  Develop a simulation for an autonomous vehicle. Create a base class Vehicle with 
properties like speed and fuelLevel. Then, derive LandVehicle and FlyingVehicle, where each 
has unique attributes like wheelCount and altitude. Create a FlyingCar class that inherits from 
both LandVehicle and FlyingVehicle, demonstrating how a flying car would combine the 
capabilities of land and aerial vehicles. 
21. In a university, a University has multiple Departments. Define a University class that 
aggregates multiple Department objects. Each department has properties like name, 
facultyCount, and headOfDepartment. The university "has" departments, but departments can 
exist independently. 
Note: The University aggregates Department objects, where the departments are part of the 
university but exist independently (e.g., a department might be transferred or merged with 
another university). 
22. Demonstrate the order of execution of constructors and destructors in a multilevel 
inheritance scenario.*/
Q.20./*#include <iostream>
using namespace std;

class Vehicle {
protected:
    int speed;
    int fuelLevel;

public:
    Vehicle(int speed, int fuelLevel) : speed(speed), fuelLevel(fuelLevel) {}

    void display() {
        cout << "Fuel level: " << fuelLevel << endl;
        cout << "Speed: " << speed << endl;
    }
};

class LandVehicle : virtual public Vehicle {
public:
    LandVehicle(int speed, int fuelLevel) : Vehicle(speed, fuelLevel) {}

    void wheelCount() {
        speed += 80;
        fuelLevel -= 5;
        cout << "Driving..." << endl;
    }
};

class FlyingVehicle : virtual public Vehicle {
public:
    FlyingVehicle(int speed, int fuelLevel) : Vehicle(speed, fuelLevel) {}

    void altitude() {
        speed += 200;
        fuelLevel -= 15;
        cout << "Flying..." << endl;
    }
};

class FlyingCar : public LandVehicle, public FlyingVehicle {
public:
    FlyingCar(int speed, int fuelLevel) : Vehicle(speed, fuelLevel), LandVehicle(speed, fuelLevel), FlyingVehicle(speed, fuelLevel) {}

    void displayAll() {
        display();
    }
};

int main() {
    FlyingCar a(9, 100);
    a.display();

    a.altitude();   // Adjust speed and fuel for flying
    a.displayAll(); // Display updated stats

    a.wheelCount(); // Adjust speed and fuel for driving
    a.displayAll(); // Display updated stats

    return 0;
}
Q.21.#include <iostream>
#include <string>
using namespace std;

class Department {
public:
    string name;
    int facultyCount;
    string headOfDepartment;

    // Constructor
    Department(string name = "", int facultyCount = 0, string headOfDepartment = "") 
        : name(name), facultyCount(facultyCount), headOfDepartment(headOfDepartment) {}

    // Display department details
    void display() {
        cout << "Department Name: " << name << endl;
        cout << "Faculty Count: " << facultyCount << endl;
        cout << "Head of Department: " << headOfDepartment << endl;
    }
};

class University {
public:
    Department* arr;
    int number;

    // Constructor
    University(int number) {
        this->number = number;
        arr = new Department[number]; // Allocate an array of departments
    }

    // Destructor
    ~University() {
        delete[] arr; // Correctly delete the array
    }

    // Add department details
    void addDepartment(int index, string name, int facultyCount, string headOfDepartment) {
        if (index >= 0 && index < number) {
            arr[index] = Department(name, facultyCount, headOfDepartment);
        } else {
            cout << "Invalid Index!" << endl;
        }
    }

    // Display all departments
    void display() {
        for (int i = 0; i < number; i++) {
            cout << "Department " << (i + 1) << ":\n";
            arr[i].display();
            cout << endl;
        }
    }
};

int main() {
    int numberOfDepartments;
    cout << "Enter the number of departments in the university: ";
    cin >> numberOfDepartments;

    // Create a University object
    University uni(numberOfDepartments);

    // Add departments
    for (int i = 0; i < numberOfDepartments; i++) {
        string name, head;
        int facultyCount;
        cout << "Enter details for Department " << (i + 1) << ":\n";
        cout << "Name: ";
        cin >> ws; // To ignore leading whitespace
        getline(cin, name);
        cout << "Faculty Count: ";
        cin >> facultyCount;
        cout << "Head of Department: ";
        cin >> ws; // To ignore leading whitespace
        getline(cin, head);

        uni.addDepartment(i, name, facultyCount, head);
    }

    // Display all departments
    cout << "\nDepartments in the University:\n";
    uni.display();

    return 0;
}
//polymorphism:multiple form
//one name and multiple form
//compile time : the decision is take that which function is to be call at compile time early binding and static binding function overloading and operator overloading
// and run time :  virtual function 
//derived class pointer :Late Binding
*/
#include <iostream>
using namespace std;

class base {
public:
    int a;
    int b;

    // Base class display method
    virtual void display() { // Declare as virtual for polymorphism
        cout << "display base class" << endl;
    }
};

class derived : public base {
public:
    // Derived class display method
    void display() { // Override keyword is optional but recommended
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
