// 1. Classes and Objects
// Class: A blueprint for creating objects, defining attributes (member variables) and behaviors (member functions or methods).
// Object: An instance of a class with specific values for its attributes.

// class student

// basic structure flow = class
// product from flow object
// example school system teacher entity  properties name subject function change department
#include <iostream>
#include <string>
using namespace std;
class teacher
{
  // access modifiers public, private,protected
private:
  double salary;
  // properties //attributes
public:
  string name;
  string dept;
  string subject;

  // methods //member function
  void changedept(string newdept)
  {
    dept = newdept;
  }

  // setter and getter for private attributes
  void setsalary(int s)
  {
    salary = s;
  }
  double getsalary()
  {
    return salary;
  }
};

int main()
{
  teacher t1;
  t1.name = "harsh";
  t1.setsalary(2000);
  cout << t1.getsalary();
}