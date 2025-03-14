#include <iostream>
#include <string>

using namespace std;


struct Student {
    int id;
    string name;
    float marks;
};


void addStudents(Student students[], int &count, int maxStudents) {
    if (count >= maxStudents) {
        cout << "Cannot add more students. Maximum limit reached!\n";
        return;
    }
    
    cout << "Enter Student ID: ";
    cin >> students[count].id;
    cout << "Enter Student Name: ";
    cin.ignore();
    getline(cin, students[count].name);
    cout << "Enter Student Marks: ";
    cin >> students[count].marks;
    
    count++;
    cout << "Student added successfully!\n";
}


void displayStudents(Student students[], int count) {
    if (count == 0) {
        cout << "No students to display!\n";
        return;
    }
    
    cout << "\nList of Students:\n";
    for (int i = 0; i < count; i++) {
        cout << "ID: " << students[i].id << ", Name: " << students[i].name << ", Marks: " << students[i].marks << "\n";
    }
}

void searchStudent(Student *students, int count) {
    int searchId;
    cout << "Enter Student ID to search: ";
    cin >> searchId;
    
    for (int i = 0; i < count; i++) {
        if ((students + i)->id == searchId) {
            cout << "Student Found!\n";
            cout << "ID: " << (students + i)->id << ", Name: " << (students + i)->name << ", Marks: " << (students + i)->marks << "\n";
            return;
        }
    }
    
    cout << "Student not found!\n";
}

int main() {
    const int maxStudents = 100;
    Student students[maxStudents];
    int count = 0;
    int choice;

    while (true) {
        cout << "\nStudent Management System";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudents(students, count, maxStudents);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3:
                searchStudent(students, count);
                break;
            case 4:
                cout << "Exiting program...\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}

