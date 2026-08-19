Q.1. Perform noun–verb analysis on your three specifications. Present the raw candidate list,
then the surviving classes, and state which of the four filters eliminated each discarded
candidate.
Answer :-
## 1. Noun–Verb Analysis

The three selected specifications are:

1. **Submit Room and Roommate Preferences**
2. **Pay Hostel Fee**
3. **Execute Automated Allocation Algorithm**

The nouns were extracted as candidate classes, while the verbs were examined as possible responsibilities or operations.

---

## 2. Raw Candidate List

| Candidate Noun         | Source / Meaning                              |
| ---------------------- | --------------------------------------------- |
| Student                | Person using the hostel system                |
| Room                   | Hostel room                                   |
| Roommate               | Student selected as a roommate                |
| Preference             | Student's room/roommate choice                |
| Room Type              | Single, double, triple, etc.                  |
| Student ID             | Identifier of a student                       |
| Batchmate              | Another eligible student                      |
| Application            | Hostel allocation application                 |
| Database               | Stores application and room information       |
| Room Configuration     | Configuration of rooms                        |
| Allocation Window      | Period during which applications are accepted |
| Confirmation Request   | Request sent to a roommate                    |
| Hostel Fee             | Fee payable by a student                      |
| Invoice                | Generated fee invoice                         |
| Profile                | Student's system profile                      |
| Financial Ledger       | Record of payments                            |
| Receipt                | Payment receipt                               |
| Room Status            | Status of allocated room                      |
| Accounts Department    | Department handling payments                  |
| Payment Gateway        | External payment system                       |
| Payment Method         | UPI, card, NetBanking, etc.                   |
| Bank Loan              | Loan used for fee payment                     |
| Loan Sanction Letter   | Proof of loan approval                        |
| Disbursement Reference | Bank payment reference                        |
| Bank Verification      | Verification of loan payment                  |
| Allocation Engine      | System responsible for automatic allocation   |
| Deadline               | Closing time for preferences                  |
| Room Inventory         | Available rooms/beds                          |
| Vacant Room            | Unoccupied room                               |
| Roommate Group         | Group of mutually confirmed students          |
| Lottery                | Method used for allocation                    |
| Seniority Logic        | Allocation rule                               |
| Vacant Bed             | Available bed                                 |
| Room Number            | Number assigned to a student                  |
| Master Roster          | Final allocation list                         |
| Notification Email     | Allocation notification                       |
| Waitlist               | List of unallocated students                  |
| Alert Report           | Report generated for the warden               |

---

# 3. Four Filters Used

The raw candidates were filtered using four standard criteria:

1. **Duplicate Filter** – Remove nouns that represent the same concept.
2. **Irrelevant Filter** – Remove nouns that are outside the system's domain or are not useful domain concepts.
3. **Attribute Filter** – Remove nouns that are better represented as attributes of another class.
4. **Actor/External Filter** – Remove people, departments, external systems, or other entities that should be modeled as actors rather than domain classes.

---

# 4. Filtering of Candidates

| Candidate              | Decision     | Filter / Reason                                          |
| ---------------------- | ------------ | -------------------------------------------------------- |
| Student                | **Survives** | Important domain entity                                  |
| Room                   | **Survives** | Important domain entity                                  |
| Roommate               | **Survives** | Represents a student's roommate relationship/choice      |
| Preference             | **Survives** | Stores room and roommate preferences                     |
| Room Type              | Discarded    | **Attribute Filter** – attribute/type of Room            |
| Student ID             | Discarded    | **Attribute Filter** – attribute of Student              |
| Batchmate              | Discarded    | **Duplicate Filter** – another Student                   |
| Application            | **Survives** | Represents a student's allocation application            |
| Database               | Discarded    | **Irrelevant Filter** – implementation detail            |
| Room Configuration     | Discarded    | **Duplicate Filter** – represented by Room/Room Type     |
| Allocation Window      | Discarded    | **Irrelevant Filter** – system constraint/time period    |
| Confirmation Request   | **Survives** | Represents roommate confirmation                         |
| Hostel Fee             | **Survives** | Important financial entity                               |
| Invoice                | **Survives** | Represents the fee invoice                               |
| Profile                | Discarded    | **Duplicate Filter** – information belongs to Student    |
| Financial Ledger       | **Survives** | Maintains payment records                                |
| Receipt                | **Survives** | Represents proof of payment                              |
| Room Status            | Discarded    | **Attribute Filter** – attribute of Room/Allocation      |
| Accounts Department    | Discarded    | **Actor/External Filter** – external stakeholder         |
| Payment Gateway        | Discarded    | **Actor/External Filter** – external system              |
| Payment Method         | Discarded    | **Attribute Filter** – attribute of Payment              |
| Bank Loan              | **Survives** | Represents a payment source                              |
| Loan Sanction Letter   | Discarded    | **Attribute Filter** – supporting document               |
| Disbursement Reference | Discarded    | **Attribute Filter** – identifier/reference              |
| Bank Verification      | Discarded    | **Irrelevant Filter** – verification activity            |
| Allocation Engine      | Discarded    | **Actor/External Filter** – system/time-triggered actor  |
| Deadline               | Discarded    | **Irrelevant Filter** – scheduling constraint            |
| Room Inventory         | **Survives** | Represents available hostel resources                    |
| Vacant Room            | Discarded    | **Duplicate Filter** – a Room with an availability state |
| Roommate Group         | **Survives** | Represents a group of mutually confirmed students        |
| Lottery                | Discarded    | **Irrelevant Filter** – allocation algorithm/rule        |
| Seniority Logic        | Discarded    | **Irrelevant Filter** – allocation rule                  |
| Vacant Bed             | Discarded    | **Duplicate Filter** – resource within Room              |
| Room Number            | Discarded    | **Attribute Filter** – attribute of Room                 |
| Master Roster          | **Survives** | Represents the final allocation record/list              |
| Notification Email     | Discarded    | **Irrelevant Filter** – communication mechanism          |
| Waitlist               | **Survives** | Represents students waiting for allocation               |
| Alert Report           | Discarded    | **Irrelevant Filter** – generated report                 |

---

# 5. Surviving Classes

After applying all four filters, the following classes survive:

1. **Student**
2. **Room**
3. **Roommate**
4. **Preference**
5. **Application**
6. **ConfirmationRequest**
7. **HostelFee**
8. **Invoice**
9. **FinancialLedger**
10. **Receipt**
11. **BankLoan**
12. **RoomInventory**
13. **RoommateGroup**
14. **MasterRoster**
15. **Waitlist**

These classes represent meaningful concepts that have data and/or behavior within the Hostel Room Allocation System.

---

# 6. Verb Analysis

The important verbs from the three specifications indicate possible operations/responsibilities of the surviving classes.

| Verb     | Possible Responsibility                           |
| -------- | ------------------------------------------------- |
| Apply    | Student creates an Application                    |
| Select   | Student selects a Preference                      |
| Enter    | Student provides information                      |
| Verify   | System verifies Student eligibility               |
| Save     | Application stores Preference                     |
| Confirm  | Roommate confirms a request                       |
| Pay      | Student pays HostelFee                            |
| Generate | System generates Invoice/Receipt                  |
| Update   | FinancialLedger and Room status are updated       |
| Process  | Payment/Allocation is processed                   |
| Retrieve | Allocation system retrieves preferences and rooms |
| Assign   | Allocation system assigns Room                    |
| Allocate | Room is allocated to Student                      |
| Notify   | System sends allocation notification              |
| Waitlist | Student is placed on Waitlist                     |

---

## Final Result

The noun–verb analysis identifies the main domain classes and their responsibilities. The most important surviving classes are **Student, Room, Preference, Application, HostelFee, Invoice, FinancialLedger, RoomInventory, RoommateGroup, MasterRoster, and Waitlist**. The discarded nouns were removed because they were duplicates, irrelevant concepts, attributes of other classes, or actors/external systems.

