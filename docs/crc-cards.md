Q.2. Complete one CRC card per surviving class: class name, responsibilities, collaborators.
Answer:-
CRC stands for **Class–Responsibilities–Collaborators**.
The following CRC cards are prepared for each surviving class identified in Question 1.

---

## 1. Student

**Responsibilities**

* Submit hostel application
* Select room and roommate preferences
* Pay hostel fees
* View application and allocation status

**Collaborators**

* Application
* Preference
* Roommate
* HostelFee
* Room
* Waitlist

---

## 2. Room

**Responsibilities**

* Store room details
* Maintain room type and capacity
* Track room availability
* Store allocation status

**Collaborators**

* Student
* RoomInventory
* Application
* MasterRoster

---

## 3. Roommate

**Responsibilities**

* Store selected roommate information
* Participate in roommate preference
* Confirm roommate requests

**Collaborators**

* Student
* Preference
* ConfirmationRequest
* RoommateGroup

---

## 4. Preference

**Responsibilities**

* Store preferred room type
* Store preferred roommate information
* Maintain student's allocation preferences

**Collaborators**

* Student
* Roommate
* Application
* Room

---

## 5. Application

**Responsibilities**

* Store hostel application details
* Maintain application status
* Store student preferences
* Track application for allocation

**Collaborators**

* Student
* Preference
* Room
* Waitlist
* MasterRoster

---

## 6. ConfirmationRequest

**Responsibilities**

* Send roommate confirmation request
* Track confirmation status
* Accept or reject roommate pairing

**Collaborators**

* Student
* Roommate
* RoommateGroup
* Preference

---

## 7. HostelFee

**Responsibilities**

* Store hostel fee details
* Track fee amount and payment status
* Maintain outstanding dues

**Collaborators**

* Student
* Invoice
* FinancialLedger
* Receipt
* BankLoan

---

## 8. Invoice

**Responsibilities**

* Generate hostel fee invoice
* Store fee details
* Maintain invoice status

**Collaborators**

* Student
* HostelFee
* FinancialLedger
* Receipt

---

## 9. FinancialLedger

**Responsibilities**

* Record hostel fee transactions
* Update payment status
* Maintain student payment history

**Collaborators**

* Student
* HostelFee
* Invoice
* Receipt
* BankLoan

---

## 10. Receipt

**Responsibilities**

* Generate payment receipt
* Store payment confirmation
* Provide proof of payment

**Collaborators**

* Student
* HostelFee
* Invoice
* FinancialLedger

---

## 11. BankLoan

**Responsibilities**

* Store bank loan payment information
* Track loan-based fee payment
* Maintain bank verification status

**Collaborators**

* Student
* HostelFee
* FinancialLedger
* Invoice

---

## 12. RoomInventory

**Responsibilities**

* Maintain available rooms
* Track vacant and occupied rooms
* Provide room availability information
* Update room inventory after allocation

**Collaborators**

* Room
* Application
* MasterRoster
* Student

---

## 13. RoommateGroup

**Responsibilities**

* Maintain mutually confirmed roommate groups
* Store group members
* Support group-based room allocation

**Collaborators**

* Student
* Roommate
* Preference
* ConfirmationRequest
* Room

---

## 14. MasterRoster

**Responsibilities**

* Store final room allocations
* Maintain student-room assignments
* Provide the final allocation record

**Collaborators**

* Student
* Room
* Application
* RoomInventory
* Waitlist

---

## 15. Waitlist

**Responsibilities**

* Store students who could not be allocated rooms
* Maintain waiting order
* Track students until rooms become available

**Collaborators**

* Student
* Application
* Room
* RoomInventory
* MasterRoster

---

## CRC Summary

| Class               | Main Responsibility                        | Main Collaborators           |
| ------------------- | ------------------------------------------ | ---------------------------- |
| Student             | Apply and manage hostel preferences        | Application, Room, HostelFee |
| Room                | Maintain room information and availability | Student, RoomInventory       |
| Roommate            | Manage roommate selection                  | Student, ConfirmationRequest |
| Preference          | Store room/roommate choices                | Student, Roommate            |
| Application         | Manage hostel application                  | Student, Preference          |
| ConfirmationRequest | Manage roommate confirmation               | Student, Roommate            |
| HostelFee           | Manage hostel fees                         | Student, Invoice             |
| Invoice             | Generate fee invoice                       | HostelFee, Student           |
| FinancialLedger     | Record payments                            | HostelFee, Receipt           |
| Receipt             | Provide payment proof                      | Student, HostelFee           |
| BankLoan            | Manage loan-based payment                  | Student, HostelFee           |
| RoomInventory       | Track available rooms                      | Room, MasterRoster           |
| RoommateGroup       | Manage confirmed groups                    | Student, Roommate            |
| MasterRoster        | Store final allocation                     | Student, Room                |
| Waitlist            | Manage unallocated students                | Student, RoomInventory       |
