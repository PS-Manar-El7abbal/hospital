Hospital Management System

OverviewThis project is a simple hospital management system implemented in C++.
It allows users to manage patient queues for different specializations in a hospital.
The system can add new patients, print all patients in the queues, and retrieve the next patient for a given specialization.

##Features

Add a New Patient: Add a patient to a specific specialization queue, with the ability to mark the patient as urgent or regular.
Print All Patients: Display all patients in the queues for each specialization.
Get the Next Patient: Retrieve and remove the next patient from a specific specialization queue.
Exit: Exit the system.

SpecializationsThe system manages 20 specializations, each with a queue length of up to 5 patients.

##How to UseMenu OptionsAdd a New Patient: 
Choose option 1. Enter the specialization number, patient name, and status (1 for urgent, 0 for regular).Print All Patients:
Choose option 2. This will print all patients in each specialization queue.Get the Next Patient:
Choose option 3. Enter the specialization number to retrieve the next patient in the queue.Exit: 
Choose option 4 to exit the system.

#Example usage

Run the program.
Choose an option from the menu.
Follow the prompts to add a patient, print all patients, or get the next patient.

##Code Structure
Enterface(): Displays the menu and gets the user's choice.
shift_to_right(): Shifts the queue to the right to accommodate a new urgent patient.
shift_to_left(): Shifts the queue to the left to remove the next patient.
Addpatient(): Adds a new patient to the queue.
print_patient(): Prints all patients in a specific specialization queue.
print_patients(): Prints all patients in all specialization queues.
get_the_next_patient(): Retrieves and removes the next patient from a specific specialization queue.
l_hopital(): Main function to handle the hospital management logic.
main(): Entry point of the program.

##Development:

Prerequisites
C++ Compiler (e.g., g++, Visual Studio).

Special thanks to Mostafa S. Ibrahim for his guidance and project inspiration.
