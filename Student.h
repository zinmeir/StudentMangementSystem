//
// Created by Shaheer Akhtar on 31/10/2023.
//

#ifndef STUDENTMANGEMENTSYSTEM_STUDENT_H
#define STUDENTMANGEMENTSYSTEM_STUDENT_H

#include <iostream>
#include <vector>
#include "SubjectData.h"

using namespace std;

class Student {
private:
    string FirstName;
    string LastName;
    int Age;
    int BenchNumber;
    vector<SubjectData> Subjects;

    void SetGradeStudentController(int G, string N);

public:
    Student();

    Student(string first, string last, int age, int benchNum, vector<SubjectData> subjects);

    const string &getFirstName() const;

    const string &getLastName() const;

    int getAge() const;

    int getBenchNumber() const;

    const vector<SubjectData> &getSubjects() const;

    void setFirstName(const string &firstName);

    void setLastName(const string &lastName);

    void setAge(int age);

    void setBenchNumber(int phoneNumber);

    void setSubjects(const vector<SubjectData> &subjects);

    void printReport();

    void CalculatePercentage();

    friend class StudentController;

    //    void SetGradeStudentController(int G, string N);


};


#endif //STUDENTMANGEMENTSYSTEM_STUDENT_H
