Welcome to the Hospital Management System project!

# **Hospital Management System**

## Overview

This project is a simple hospital management system implemented in C++. It allows users to manage patient queues for different specializations in a hospital. The system can add new patients, print all patients in the queues, and retrieve the next patient for a given specialization.

## Features

1. **Add a New Patient**: Add a patient to a specific specialization queue, with the ability to mark the patient as urgent or regular.
2. **Print All Patients**: Display all patients in the queues for each specialization.
3. **Get the Next Patient**: Retrieve and remove the next patient from a specific specialization queue.
4. **Exit**: Exit the system.

## Specializations

The system manages 20 specializations, each with a queue length of up to 5 patients. The specializations are:

1. Child
2. Kidney
3. Child Surgery
4. Pharmacy Part
5. Stomach Diseases
6. Heart
7. Nose and Throat
8. Dentistry
9. Therapy
10. Women
11. Bones
12. Surgery
13. Internal
14. Dermatology
15. Anatomy
16. Emergency
17. Cardio
18. Mouth
19. Heart Surgery
20. Stomach

## How to Use

### Menu Options

- **Add a New Patient**: Choose option 1. Enter the specialization number, patient name, and status (1 for urgent, 0 for regular).
- **Print All Patients**: Choose option 2. This will print all patients in each specialization queue.
- **Get the Next Patient**: Choose option 3. Enter the specialization number to retrieve the next patient in the queue.
- **Exit**: Choose option 4 to exit the system.

### Example Usage

1. Run the program.
2. Choose an option from the menu.
3. Follow the prompts to add a patient, print all patients, or get the next patient.

### Code Structure

- **Enterface()**: Displays the menu and gets the user's choice.
- **shift_to_right()**: Shifts the queue to the right to accommodate a new urgent patient.
- **shift_to_left()**: Shifts the queue to the left to remove the next patient.
- **Addpatient()**: Adds a new patient to the queue.
- **print_patient()**: Prints all patients in a specific specialization queue.
- **print_patients()**: Prints all patients in all specialization queues.
- **get_the_next_patient()**: Retrieves and removes the next patient from a specific specialization queue.
- **l_hopital()**: Main function to handle the hospital management logic.
- **main()**: Entry point of the program.

## Development

### Prerequisites

- C++ Compiler (e.g., g++, Visual Studio)




Special thanks to Mostafa S. Ibrahim for his guidance and project inspiration.
