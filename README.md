# Student Record Management System

This project is a simple Student Record Management System implemented in C++. It allows users to manage student records through a menu-driven interface.

## Features

- **Add Student:** Enter student ID, name, and marks to add a new record.
- **Display All:** View all student records in a tabular format.
- **Search by ID:** Find a student record using their ID.
- **Sort by Marks:** Sort and display students by marks in descending order.
- **Exit:** Quit the application.

## How to Build and Run

1. **Open Command Prompt** and navigate to your project directory:
   ```
   cd path\to\student-record-management
   ```
2. **Build the project** (if using Makefile):
   ```
   make
   ```
   Or, compile manually:
   ```
   g++ src\main.cpp src\student.cpp src\utils.cpp -o student-record-management
   ```
3. **Run the application:**
   ```
   student-record-management.exe
   ```

## Sample Output

```
Student Record Management
1. Add student
2. Display all
3. Search by ID
4. Sort by marks
5. Exit
Choose: 1
Enter ID: 101
Enter name: Rahul
Enter marks: 78
Student added.

Choose: 1
Enter ID: 102
Enter name: Priyanka
Enter marks: 45
Student added.

Choose: 2
ID    Name    Marks
101   Rahul   78
102   Priyanka   45

Choose: 4
Sorted by marks (high to low)
ID    Name    Marks
102   Priyanka   45
101   Rahul   78
```

## License

This project is open-source and available for modification and distribution.
