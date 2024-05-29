#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#define random(min, max) min + rand() % (max - min + 1)
using namespace std;

struct Student {
    string name;
    int age;
    float avg;
    int id;
};

void print(Student student) {
    cout << "Name: " << student.name << "\nAge: " << student.age << "\navg: " << student.avg << "\nid: " << student.id << "\n\n";
}

void printAll(Student* students, int size) {
    cout << "Students info: \n";
    for (int i = 0; i < size; i++) {
        print(students[i]);
    }
}

void deleteStudentId(Student*& students, int& size, int id) {
    int index = -1;
    for (int i = 0; i < size; i++) {
        if (students[i].id == id) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "студент с id " << id << " не найден\n";
        return;
    }

    for (int i = index; i < size - 1; i++) {
        students[i] = students[i + 1];
    }

    size--;
    Student* newStudents = new Student[size];
    for (int i = 0; i < size; i++) {
        newStudents[i] = students[i];
    }

    delete[] students;
    students = newStudents;
}

void addStudent(Student*& students, int& size, const Student& newStudent) {
    Student* newStudents = new Student[size + 1];
    for (int i = 0; i < size; i++) {
        newStudents[i] = students[i];
    }
    newStudents[size] = newStudent;
    size++;
    delete[] students;
    students = newStudents;
}

void updateStudent(Student* students, int size, int id) {
    for (int i = 0; i < size; i++) {
        if (students[i].id == id) {
            cout << "Введите новое имя: ";
            cin.ignore();
            getline(cin, students[i].name);
            cout << "Введите новый возраст: ";
            cin >> students[i].age;
            cout << "Введите новый средний балл: ";
            cin >> students[i].avg;
            cout << "Данные студента обновлены.\n";
            return;
        }
    }
    cout << "Студент с id " << id << " не найден\n";
}

int main() {
    srand(time(NULL));
    setlocale(LC_ALL, "rus");

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int size = 3;
    Student* students = new Student[size];

    students[0] = Student{ "mike", 10, 3.4, 1 };
    students[1] = Student{ "john", 12, 4.8, 2 };
    students[2] = Student{ "tom", 13, 4.9, 3 };

    printAll(students, size);

    int choice;

    while (true) {
        cout << "Сделайте выбор:\n";
        cout << "1. Добавить студента\n";
        cout << "2. Удалить студента по id\n";
        cout << "3. Обновить данные студента\n";
        cout << "0. Выход\n";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1: {
            Student newStudent;
            cout << "Введите имя: ";
            getline(cin, newStudent.name);
            cout << "Введите возраст: ";
            cin >> newStudent.age;
            cout << "Введите средний балл: ";
            cin >> newStudent.avg;
            cout << "Введите id: ";
            cin >> newStudent.id;
            addStudent(students, size, newStudent);
            printAll(students, size);
            break;
        }

        case 2: {
            int id;
            cout << "Введите id студента для удаления: ";
            cin >> id;
            deleteStudentId(students, size, id);
            printAll(students, size);
            break;
        }

        case 3: {
            int id;
            cout << "Введите id студента для обновления данных: ";
            cin >> id;
            updateStudent(students, size, id);
            printAll(students, size);
            break;
        }

        case 0:
            cout << "Выход\n";
            return 0;

        default:
            cout << "Error.\n";
            break;
        }
    }
}
