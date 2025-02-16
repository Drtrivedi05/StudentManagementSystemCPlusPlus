"# StudentManagementSystemCPlusPlus" 

Student Database System

Overview
The Student Database System is a console-based C++ application that allows users to manage student records. It provides functionalities to add, search, update, delete, and display student information in an efficient manner.

Features
- Add Student: Add new student records with details like ID, name, age, course, email, phone, address, and GPA.
- Display Students: View all stored student records.
- Search Student: Search for a student by their unique ID.
- Update Student: Modify the details of an existing student.
- Delete Student: Remove a student record from the system.
- User-Friendly Interface: Simple menu-driven interface for easy navigation.

Installation & Usage
#Prerequisites
- A C++ compiler (GCC, MSVC, or Clang)
- Any terminal or command prompt

Compilation
To compile the program, run the following command:
```sh
 g++ student_database.cpp -o student_database
```

Running the Program
Execute the compiled program with:
```sh
 ./student_database
```

How to Use
1. Run the program.
2. Select an option from the menu:
   - 1: Add a new student
   - 2: Display all students
   - 3: Search for a student
   - 4: Update student details
   - 5: Delete a student record
   - 6: Exit the program
3. Follow the on-screen prompts to enter details.

Example Usage
```
Student Database System
1. Add Student
2. Display Students
3. Search Student
4. Update Student
5. Delete Student
6. Exit
Enter your choice: 1
Enter Student ID: 101
Enter Name: John Doe
Enter Age: 20
Enter Course: Computer Science
Enter Email: john@example.com
Enter Phone: 1234567890
Enter Address: 123 Street, City
Enter GPA: 3.8
Student added successfully!
```

Future Enhancements
- File Storage: Implement file handling to save student records persistently.
- GUI Interface: Develop a graphical user interface for better usability.
- Sorting & Filtering: Add options to sort and filter student records.

License
This project is open-source and available under the MIT License.

Author
Developed by Dhrumil
