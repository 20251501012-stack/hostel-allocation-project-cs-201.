4. Write full use case specifications for THREE use cases: primary actor, stakeholders,
preconditions, postconditions, trigger, main flow, and at least two alternate flows each.

               Use Case 1: Submit Room and Roommate   Preferences
	Primary Actor: Student
	Stakeholders:
	Student: Wants to secure their preferred room type and live with their chosen batchmate.
	Hostel Warden: Needs structured, accurate data to prevent allocation conflicts.
	Preconditions: The student is securely logged into the portal, and the room allocation time window is currently open.
	Postconditions: The student's room type and roommate choices are recorded in the database, awaiting final allocation.
	Trigger: The student navigates to the "Room Selection" tab and clicks "Create Application".
	Main Flow:
	The system displays available room configurations (e.g., single, double, triple occupancy).
	The student selects their preferred room type.
	The system prompts the user to enter the Student ID of their preferred roommate(s).
	The student enters a batchmate's Student ID.
	The system verifies that the entered ID belongs to an active, eligible student who has not already submitted a conflicting preference.
	The system saves the application and sends a confirmation request to the requested roommate.
	Alternate Flows:
	1a. Invalid or Unavailable Batchmate ID: If the student enters an ID that does not exist, or belongs to a student who has already locked in a different group, the system displays an error message ("Student ID invalid or unavailable") and clears the input field for a retry.
	1b. System Timeout/Deadline Passed: If the allocation window closes while the student is filling out the form, the system prevents submission, grays out the 'Submit' button, and displays a "Registration Window Closed" notice.


         Use Case 2: Pay Hostel Fee

	Primary Actor: Student
	Stakeholders:
	Student: Needs to clear dues to confirm their physical room key handover.
	Accounts Department: Requires accurate tracking of incoming payments and verified financial records.
	Preconditions: A room has been successfully allocated to the student, and a fee invoice has been generated on their profile.
	Postconditions: The student's financial ledger is updated, a receipt is generated, and the room status changes to "Confirmed".
	Trigger: The student clicks "Pay Dues" on their financial dashboard.
	Main Flow:
	The system displays a breakdown of the current semester's hostel and mess fees.
	The student clicks "Proceed to Payment".
	The system presents various payment options (Credit/Debit, NetBanking, UPI).
	The student selects a standard digital payment method and is redirected to the payment gateway.
	The transaction completes successfully.
	The system instantly generates a downloadable receipt and updates the hostel dashboard.
	Alternate Flows:
	2. Payment via Bank Loan Disbursement: At step 3, the student selects "Educational Bank Loan" as the payment method. The system prompts the student to upload their bank loan sanction letter and provide the branch manager's disbursement reference details. The system accepts the submission and marks the fee status as "Pending Bank Verification" until the college accounts team manually clears it.
	3. Gateway Transaction Failure: If the payment gateway times out or the bank declines the transaction, the system redirects the student back to the dashboard, logs the attempt as "Failed," and leaves the outstanding balance unchanged, prompting the user to try again.
	
         Use Case 3: Execute Automated Allocation Algorithm

	Primary Actor: Allocation Engine (Time-Triggered System)
	Stakeholders:
	Hostel Warden: Relies on the system to handle the bulk of allocations without manual labor.
	Students: Expect a fair and unbiased assignment of rooms based on their inputs.
	Preconditions: The deadline for preference submissions has passed, and the room inventory database is fully updated.
	Postconditions: All eligible applicants are assigned a specific room number, and the master roster is generated.
	Trigger: The internal system clock reaches the exact deadline time (e.g., 11:59 PM on the final day of registration).
	Main Flow:
	The Allocation Engine locks the student submission portal to prevent new entries.
	The system retrieves all submitted preferences and the current list of vacant rooms.
	The system processes mutually confirmed roommate groups first, assigning them to their preferred room types based on a randomized lottery or seniority logic.
	The system assigns remaining individual students to leftover vacant beds.
	The system updates the database with the final room numbers and triggers an automated notification email to all allocated students.
	
                                            Alternate Flows:
	4. Insufficient Room Inventory: If the number of applicants exceeds the available beds, the system allocates rooms until capacity is reached. It then flags the remaining unallocated students as "Waitlisted" and generates an urgent alert report for the Hostel Warden to review.
	
	5. Unconfirmed Roommate Requests: If a student requested a batchmate, but that batchmate never logged in to approve the pairing before the deadline, the system dissolves the pending request and processes both students as separate, individual applicants.
	
