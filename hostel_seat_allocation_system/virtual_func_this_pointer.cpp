
#include <iostream>
#include <string>
using namespace std;

class Request {
public:
    virtual void show() {
        cout << "Original Room Request(single/double)" << endl;
    }
};

class Student : public Request {
private:
    string room;

public:
    Student(string r) {
        this->room = r;
    }

    void changeRoom(string room) {
        this->room = room;
    }

    void show() override {
        cout << "Updated Room Demand: " << room << endl;
    }
};

int main() {
    string room, newRoom;

    cout << "Enter Original Room type(single/double): ";
    cin >> room;

    Student s(room);

    Request *ptr = &s;

    cout << "\nRoom Not Available!" << endl;
    cout << "Enter New Room Demand type(single/double): ";
    cin >> newRoom;

    s.changeRoom(newRoom);

    cout << "\n--- Modified Request ---" << endl;
    ptr->show();

    return 0;
}
