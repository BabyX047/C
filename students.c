#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_GRADES 5

struct Student {
    char name[50];
    int id;
    float grades[MAX_GRADES];
    float average;
};

// Function prototypes
void addStudent(struct Student students[], int *numStudents);
void displayStudents(struct Student students[], int numStudents);
void updateGrades(struct Student students[], int numStudents);
void calculateAverage(struct Student *student);
void findTopStudent(struct Student students[], int numStudents);

int main() {
    struct Student students[MAX_STUDENTS];
    int numStudents = 0;
    int choice;

    do {
        printf("\nStudent Grade Management System\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Update Grades\n");
        printf("4. Find Top Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &numStudents);
                break;
            case 2:
                displayStudents(students, numStudents);
                break;
            case 3:
                updateGrades(students, numStudents);
                break;
            case 4:
                findTopStudent(students, numStudents);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

// Function to add a student
void addStudent(struct Student students[], int *numStudents) {
    struct Student *student = &students[*numStudents];

    printf("\nEnter Student Name: ");
    scanf("%s", student->name);
    printf("Enter Student ID: ");
    scanf("%d", &student->id);

    for (int i = 0; i < MAX_GRADES; i++) {
        printf("Enter grade %d: ", i + 1);
        scanf("%f", &student->grades[i]);
    }

    calculateAverage(student);
    (*numStudents)++;
}

// Function to display all students
void displayStudents(struct Student students[], int numStudents) {
    printf("\nList of Students:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("ID: %d\n", students[i].id);
        printf("Grades: ");
        for (int j = 0; j < MAX_GRADES; j++) {
            printf("%.2f ", students[i].grades[j]);
        }
        printf("\nAverage: %.2f\n", students[i].average);
    }
}

// Function to update student grades
void updateGrades(struct Student students[], int numStudents) {
    int id;
    printf("\nEnter Student ID to update grades: ");
    scanf("%d", &id);

    for (int i = 0; i < numStudents; i++) {
        if (students[i].id == id) {
            for (int j = 0; j < MAX_GRADES; j++) {
                printf("Enter new grade %d: ", j + 1);
                scanf("%f", &students[i].grades[j]);
            }
            calculateAverage(&students[i]);
            printf("Grades updated successfully!\n");
            return;
        }
    }
    printf("Student ID not found!\n");
}

// Function to calculate the average of a student
void calculateAverage(struct Student *student) {
    float sum = 0;
    for (int i = 0; i < MAX_GRADES; i++) {
        sum += student->grades[i];
    }
    student->average = sum / MAX_GRADES;
}

// Function to find and display the top student
void findTopStudent(struct Student students[], int numStudents) {
    if (numStudents == 0) {
        printf("No students available.\n");
        return;
    }

    int topIndex = 0;
    for (int i = 1; i < numStudents; i++) {
        if (students[i].average > students[topIndex].average) {
            topIndex = i;
        }
    }

    printf("\nTop Student:\n");
    printf("Name: %s\n", students[topIndex].name);
    printf("ID: %d\n", students[topIndex].id);
    printf("Average: %.2f\n", students[topIndex].average);
}

