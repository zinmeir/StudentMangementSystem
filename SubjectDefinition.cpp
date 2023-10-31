//
// Created by Shaheer Akhtar on 31/10/2023.
//

#include "SubjectDefinition.h"
#include <iostream>

using namespace std;

string SubjectDefinition::getName() const {
    return Name;
}

void SubjectDefinition::setName(string name) {
    Name = name;
}

const string &SubjectDefinition::getDescription() const {
    return Description;
}

void SubjectDefinition::setDescription(const string &description) {
    Description = description;
}

int SubjectDefinition::getMaxGrade() const {
    return MaxGrade;
}

void SubjectDefinition::setMaxGrade(int maxGrade) {
    MaxGrade = maxGrade;
}

int SubjectDefinition::getMinGrade() const {
    return MinGrade;
}

void SubjectDefinition::setMinGrade(int minGrade) {
    MinGrade = minGrade;
}

int SubjectDefinition::getSuccessGrade() const {
    return SuccessGrade;
}

void SubjectDefinition::setSuccessGrade(int successGrade) {
    SuccessGrade = successGrade;
}

//-Name
//-Description
//-MaxGrade
//-MinGrade
//-SuccessGrade
void SubjectDefinition::PrintReport() {
    cout << "subject name :" << Name << endl
         << "Description :" << Description << endl
         << "MaxGrade :" << MaxGrade << endl
         << "MinGrade :" << MinGrade << endl
         << "SuccessGrade :" << SuccessGrade << endl;
}

SubjectDefinition::SubjectDefinition() {


}
