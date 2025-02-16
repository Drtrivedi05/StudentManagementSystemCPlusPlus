#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
    int age;
    string course;
    string email;
    string phone;
    string address;
    float gpa;

public:
    Student(int id, string name, int age, string course, string email, string phone, string address, float gpa) {
        this->id = id;
        this->name = name;
        this->age = age;
        this->course = course;
        this->email = email;
        this->phone = phone;
        this->address = address;
        this->gpa = gpa;
    }

    int getId() const { return id; }
    string getName() const { return name; }
    
    void display() {
        cout << "ID: " << id << "\nName: " << name << "\nAge: " << age << "\nCourse: " << course
             << "\nEmail: " << email << "\nPhone: " << phone << "\nAddress: " << address << "\nGPA: " << gpa << "\n";
    }

    void updateDetails(string name, int age, string course, string email, string phone, string address, float gpa) {
        this->name = name;
        this->age = age;
        this->course = course;
        this->email = email;
        this->phone = phone;
        this->address = address;
        this->gpa = gpa;
    }
};

class StudentDatabase {
private:
    vector<Student> students;

public:
    void addStudent() {
        int id, age;
        string name, course, email, phone, address;
        float gpa;
        cout << "Enter Student ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Course: ";
        cin.ignore();
        getline(cin, course);
        cout << "Enter Email: ";
        cin >> email;
        cout << "Enter Phone: ";
        cin >> phone;
        cout << "Enter Address: ";
        cin.ignore();
        getline(cin, address);
        cout << "Enter GPA: ";
        cin >> gpa;

        students.push_back(Student(id, name, age, course, email, phone, address, gpa));
        cout << "Student added successfully!\n";
    }

    void displayStudents() {
        if (students.empty()) {
            cout << "No students found!\n";
            return;
        }
        for (Student &s : students) {
            s.display();
            cout << "----------------------\n";
        }
    }

    void searchStudent() {
        int id;
        cout << "Enter Student ID to search: ";
        cin >> id;
        for (Student &s : students) {
            if (s.getId() == id) {
                s.display();
                return;
            }
        }
        cout << "Student not found!\n";
    }

    void updateStudent() {
        int id;
        cout << "Enter Student ID to update: ";
        cin >> id;
        for (Student &s : students) {
            if (s.getId() == id) {
                string name, course, email, phone, address;
                int age;
                float gpa;
                cout << "Enter New Name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter New Age: ";
                cin >> age;
                cout << "Enter New Course: ";
                cin.ignore();
                getline(cin, course);
                cout << "Enter New Email: ";
                cin >> email;
                cout << "Enter New Phone: ";
                cin >> phone;
                cout << "Enter New Address: ";
                cin.ignore();
                getline(cin, address);
                cout << "Enter New GPA: ";
                cin >> gpa;
                s.updateDetails(name, age, course, email, phone, address, gpa);
                cout << "Student details updated successfully!\n";
                return;
            }
        }
        cout << "Student not found!\n";
    }

    void deleteStudent() {
        int id;
        cout << "Enter Student ID to delete: ";
        cin >> id;
        for (auto it = students.begin(); it != students.end(); ++it) {
            if (it->getId() == id) {
                students.erase(it);
                cout << "Student deleted successfully!\n";
                return;
            }
        }
        cout << "Student not found!\n";
    }
};

int main() {
    StudentDatabase db;
    int choice;
    while (true) {
        cout << "\nStudent Database System\n";
        cout << "1. Add Student\n2. Display Students\n3. Search Student\n4. Update Student\n5. Delete Student\n6. Exit\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: db.addStudent(); break;
            case 2: db.displayStudents(); break;
            case 3: db.searchStudent(); break;
            case 4: db.updateStudent(); break;
            case 5: db.deleteStudent(); break;
            case 6: exit(0);
            default: cout << "Invalid choice! Try again.\n";
        }
    }
    return 0;
}
