
#include <iostream>
using namespace std;

class Admin {
private:
    static int availableSeats;

public:
    friend void checkRoom(Admin a);

    static void showSeats() {
        cout << "Available Seats: " << availableSeats << endl;
    }
};

int Admin::availableSeats = 2;

void checkRoom(Admin a) {
    int demand;

    cout << "Enter request for total seats: ";
    cin >> demand;

    if (demand <= Admin::availableSeats && demand > 0) {
        cout << "Room Available!" << endl;
        cout << "Seat Allocated Successfully." << endl;
        Admin::availableSeats--;
    }
    else {
        cout << "Room Not Available!" << endl;
        cout << "Request Put On Hold." << endl;
    }
}

int main() {
    Admin a;

    cout << "--- Admin Panel ---" << endl;
    Admin::showSeats();

    checkRoom(a);

    cout << "\n--- Updated Availability ---" << endl;
    Admin::showSeats();

    return 0;
}
