// Group B, 3(c) final question
#include <iostream>
#include <string>

using namespace std;

// Base class representing the first employee
class EmployeeBase {
protected:
    int id;
    string name;

public:
    // Constructor to initialize id and name
    EmployeeBase(int employeeId,  string employeeName) {
         id = employeeId;
         name = employeeName;
    }
};

// Derived class representing the second employee, inheriting from the first employee
class EmployeeDerived : public EmployeeBase {
public:
    // Constructor to initialize id and name using the base class constructor
    EmployeeDerived(int employeeId, string employeeName) : EmployeeBase(employeeId, employeeName) {}

    // Function to display the name and id of the second employee
    void displayInfo() {
        // Accessing the id and name variables from the base class
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
    }
};

int main() {
    // Creating an instance of the second employee
    EmployeeDerived secondEmployee(101, "Efaz");

    // Displaying the name and id of the second employee using the displayInfo function
    secondEmployee.displayInfo();

    return 0;
}