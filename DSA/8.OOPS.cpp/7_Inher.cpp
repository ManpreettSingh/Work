#include <iostream>
#include <string>
using namespace std;

// Base class for all students
class Student {
protected:
    string name;
    int rollNumber;
    string department;

public:
    // Constructor for Student class
    Student(string name, int rollNumber, string department)
        : name(name), rollNumber(rollNumber), department(department) {}

    // Virtual method to display student information
    virtual void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Department: " << department << endl;
    }

    // Virtual destructor to ensure proper cleanup in derived classes
    virtual ~Student() {}
};

// Derived class for all Engineering students
class EngStudent : public Student {
protected:
    string serverAccess;

public:
    // Constructor for EngStudent class
    EngStudent(string name, int rollNumber, string department)
        : Student(name, rollNumber, department) {
        serverAccess = "EACCESS Server";  // Default for all Eng Students
    }

    // Overriding displayInfo method
    void displayInfo() override {
        Student::displayInfo();  // Call base class method
        cout << "Server Access: " << serverAccess << endl;
    }
};

// Derived class for ECE Students
class ECEStudent : public EngStudent {
public:
    // Constructor for ECEStudent class
    ECEStudent(string name, int rollNumber)
        : EngStudent(name, rollNumber, "ECE") {
        serverAccess = "TU Server";  // ECE students have their own server
    }

    // Overriding displayInfo method
    void displayInfo() override {
        EngStudent::displayInfo();  // Call EngStudent method
    }
};

// Derived class for COE Students
class COEStudent : public EngStudent {
public:
    // Constructor for COEStudent class
    COEStudent(string name, int rollNumber)
        :EngStudent(name, rollNumber, "COE") {
        // No changes needed, COE uses EACCESS by default
    }

    // Overriding displayInfo method
    void displayInfo(){
        EngStudent::displayInfo();  // Call EngStudent method
    }
};

// Derived class for CS Students
class CSStudent : public Student {
private:
    string serverAccess;

public:
    // Constructor for CSStudent class
    CSStudent(string name, int rollNumber)
        : Student(name, rollNumber, "CS") {
        serverAccess = "THights Server";  // CS students use a different server
    }

    // Overriding displayInfo method
    void displayInfo(){
        Student::displayInfo();  // Call base class method
        cout << "Server Access: " << serverAccess << endl;
    }
};

int main() {
    // Create objects for different types of students
    Student* students[4];

    // Creating ECE Student
    students[0] = new ECEStudent("Rahul", 101);

    // Creating COE Student
    students[1] = new COEStudent("Priya", 102);

    // Creating CS Student
    students[2] = new CSStudent("Ankit", 103);

    // Creating another ECE Student
    students[3] = new ECEStudent("Sonia", 104);

    // Displaying information for each student
    for (int i = 0; i < 4; i++) {
        cout << "--------------------------" << endl;
        students[i]->displayInfo();
    }

    // Clean up the dynamically allocated memory
    for (int i = 0; i < 4; i++) {
        delete students[i];
    }
    return 0;
}
