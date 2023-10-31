//
// Created by Shaheer Akhtar on 31/10/2023.
//

#ifndef STUDENTMANGEMENTSYSTEM_SUBJECTCONTROLLER_H
#define STUDENTMANGEMENTSYSTEM_SUBJECTCONTROLLER_H

#include "SubjectDefinition.h"

#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class SubjectController {


private:
    vector<SubjectDefinition> subjects;

public:
    //   SubjectController():subjects(){};
    void setSubjects(int num);

    vector<SubjectDefinition> getSubjects();

    void printSubjects();

    ///   modify
    void addSubjects(int num);

    void deleteSubjects(string name);

    void modifySubjects(string name);


};


#endif //STUDENTMANGEMENTSYSTEM_SUBJECTCONTROLLER_H
