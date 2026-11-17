
#include <iostream>
using namespace std;

class Hostel {
public:
    class Admin {
    public:
        int availableRoom;

        Admin(int r) {
            availableRoom = r;
        }

        void check(int demand) {
            if (demand == availableRoom) {
                cout << "Room Allocated Successfully!" << endl;
            }
            else {
                cout << "Room Not Available!" << endl;
                cout << "Student Request On Hold." << endl;
            }
        }
    };
};

int main() {
    int available, demand, change;

    cout << "Enter Available Room Number: ";
    cin >> available;

    Hostel::Admin a(available);

    cout << "Enter Student Requested Room: ";
    cin >> demand;

    cout << "\n--- Final Allocation ---" << endl;
    a.check(demand);

    if (demand != available) {
        cout << "\nEnter Modified Room Demand: ";
        cin >> change;

        a.check(change);
    }

    cout << "\nAvailable Room: " << available << endl;

    return 0;
}
