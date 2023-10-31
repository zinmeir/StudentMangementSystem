//
// Created by Shaheer Akhtar on 31/10/2023.
//

#ifndef STUDENTMANGEMENTSYSTEM_STUDENTCONTROLLER_H
#define STUDENTMANGEMENTSYSTEM_STUDENTCONTROLLER_H


#include <iostream>

#include "Student.h"

#include <iterator>
#include <algorithm>
#include <vector>
#include "SubjectData.h"
#include "SubjectDefinition.h"

using namespace std;


class StudentController {

private:
    vector<Student> students;
    //    vector<SubjectData> subjects;
public:
    const vector<Student> &getStudents();

    void setStudents1(const vector<Student> &students);

    void setStudents(int num, vector<SubjectDefinition> subsDif);

    void addStudents(int num, vector<SubjectDefinition> subsDif);

    void DeleteStudent(int benchN);

    void ModifyStudent(int benchN);

    void PrintStuWGrade();


};


#endif //STUDENTMANGEMENTSYSTEM_STUDENTCONTROLLER_H
