
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    virtual void demand(string room) {
        cout << "Student demands " << room << endl;
    }
};

class Hostel : public Student {
public:
    void demand(string room) override {
        cout << "Hostel demand: " << room << endl;
    }

    void demand(string room, int number) {
        cout << "Room Type: " << room << endl;
        cout << "Preferred Room No: " << number << endl;
    }
};

int main() {
    Hostel h;
    string room;
    int number;

    cout << "Enter Room Type (Single/Double): ";
    cin >> room;

    cout << "Enter Preferred Room Number: ";
    cin >> number;

    cout << "\n--- Student Demand ---" << endl;

    h.demand(room);
    h.demand(room, number);

    return 0;
}
