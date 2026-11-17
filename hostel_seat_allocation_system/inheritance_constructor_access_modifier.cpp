
#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int roll;
    string name;

public:
    Student(int r, string n) {
        roll = r;
        name = n;
    }

    void showStudent() {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

class Hostel : public Student {
private:
    int age;
    string branch;

public:
    Hostel(int r, string n, int a, string b)
        : Student(r, n) {
        age = a;
        branch = b;
    }

    void display() {
        cout << "\n--- Student Registration ---" << endl;
        showStudent();
        cout << "Age: " << age << endl;
        cout << "Branch: " << branch << endl;
    }
};

int main() {
    int roll, age;
    string name, branch;

    cout << "Enter Roll No: ";
    cin >> roll;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Branch: ";
    cin >> branch;

    Hostel h(roll, name, age, branch);
    h.display();

    return 0;
}
