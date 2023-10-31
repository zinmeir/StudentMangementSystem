//
// Created by Shaheer Akhtar on 31/10/2023.
//

#include "SubjectData.h"
#include <iostream>
#include "SubjectDefinition.h"

using namespace std;

int SubjectData::getGrade() const {
    return grade;
}

void SubjectData::setGrade(int grade) {
    SubjectData::grade = grade;
    //    subDefinition.
}

SubjectData::SubjectData(int g, SubjectDefinition subDef) {
    setGrade(g);
    subDefinition = subDef;
}

const SubjectDefinition &SubjectData::getSubDefinition() const {
    return subDefinition;
}

void SubjectData::setSubDefinition(const SubjectDefinition &subDefinition) {
    SubjectData::subDefinition = subDefinition;
}