Question 1. Write a one-page problem statement for your chosen domain, in the language a user of the system would use.
Answer. Our college provides hostel accommodation for students who need a safe and convenient place to stay. Every academic year, many students apply for hostel rooms. The current process may involve paper forms, manual verification, long queues, and repeated visits to the hostel office. Students may also find it difficult to know room availability and application status.
We need a Hostel Room Allocation System that allows students to apply for hostel accommodation online. Students should be able to view available hostels, room types, capacity, and facilities before submitting an application. They can enter their personal and academic details, select their preferences, and receive an application number. Students should also be able to track their application status.
Hostel wardens should be able to verify applications, check student eligibility, view available rooms, and allocate rooms or beds. The system should update room occupancy and prevent duplicate allocations. If no suitable room is available, eligible students can join a waiting list.
The hostel administrator should manage hostel, room, capacity, and availability information. Students should receive notifications about approval, allocation, rejection, or waiting-list status.
The main goal is to make hostel allocation faster, fairer, and more transparent while reducing manual work, errors, and duplicate room assignments.

Question 2. Identify all actors, including any external systems and any scheduled or time-triggered actors.
Answer. 
Actor	- Type -	Role
Student -	Human actor	- Applies for hostel accommodation, views status, pays fees, and requests changes
Hostel Warden -	Human actor -	Verifies applications and allocates rooms
Hostel Administrator -	Human actor -	Manages hostels, rooms, room availability, and reports
Payment Gateway	- External system	Processes - hostel fee payments
Notification Service -	External system -	Sends application, allocation, and payment notifications
Allocation Scheduler	Time-triggered actor -	Periodically checks waiting-list applications and available rooms

