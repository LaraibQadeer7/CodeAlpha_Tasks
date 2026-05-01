# 🎓 CGPA Calculator (C++)

A console-based CGPA Calculator built in C++ that allows students to calculate their **Semester GPA** and updated **Cumulative GPA (CGPA)** based on course grades and credit hours.
##  Overview
This project is designed to help students quickly compute their GPA for a semester and update their overall CGPA by including previous academic performance.

The program takes:
- Subject names
- Credit hours
- Grades (A to F scale)

And calculates:
- ✅ Semester GPA  
- ✅ Updated CGPA
- ## 🚀 Features

  1) Supports multiple subjects (up to 50)
  2) Validates credit hour input (positive integers only)
  3) Grade validation (A, A-, B+, B, B-, C+, C, C-, D, F)
  4) Accurate GPA calculation based on weighted average
  5) CGPA calculation using previous CGPA and semesters
  6) Simple and user-friendly console interface
  ##  Technologies Used

- C++
- Standard Library (`iostream`, `string`)
  ## ⚙️ How It Works

### 1. Input Phase
- Enter number of subjects
- Enter:
  - Subject name
  - Credit hours
  - Grade

### 2. GPA Calculation
- Each grade is converted into grade points:
-   
| Grade | Points |
|------|--------|
| A    | 4.0    |
| A-   | 3.7    |
| B+   | 3.3    |
| B    | 3.0    |
| B-   | 2.7    |
| C+   | 2.3    |
| C    | 2.0    |
| C-   | 1.7    |
| D    | 1.0    |
| F    | 0.0    |
GPA is calculated using:
GPA = Total Grade Points / Total Credit Hours

### 3. CGPA Calculation

The updated CGPA is calculated as:
CGPA = ((Previous CGPA × Previous Semesters) + Current GPA) / (Previous Semesters + 1)
## 👨‍💻 Author
**Laraib Qadeer**  
BS Software Engineering Student  


