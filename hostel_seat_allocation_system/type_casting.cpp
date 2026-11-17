
#include <iostream>
using namespace std;

class Hostel {
public:
    int emptyRooms;

    Hostel(int r) {
        emptyRooms = r;
    }
};

class WaitingStudent {
public:
    int students;

    WaitingStudent(int s) {
        students = s;
    }

    // Class to Basic Typecasting
    operator int() {
        return students;
    }
};

// Class to Class Typecasting
class Allocation {
public:
    int allocated;

    Allocation(Hostel h, WaitingStudent w) {
        int waiting = w;
        allocated = (h.emptyRooms < waiting)
                    ? h.emptyRooms : waiting;
    }

    void show() {
        cout << "Students Allocated: " << allocated << endl;
    }
};

int main() {
    int rooms, students;

    cout << "Enter Empty Rooms: ";
    cin >> rooms;

    cout << "Enter Waiting Students: ";
    cin >> students;

    Hostel h(rooms);
    WaitingStudent w(students);

    Allocation a(h, w);

    cout << "\n--- Hostel Allocation ---" << endl;
    a.show();

    cout << "Waiting Students Remaining: "
         << students - a.allocated << endl;

    return 0;
}
