//
// Created by Shaheer Akhtar on 31/10/2023.
//

#ifndef STUDENTMANGEMENTSYSTEM_SUBJECTDATA_H
#define STUDENTMANGEMENTSYSTEM_SUBJECTDATA_H

#include "SubjectDefinition.h"

// SubjectData
//-SubjectDefinition ___Setter/Getter

// constructior
// Print

class SubjectData {

private:
    SubjectDefinition subDefinition;
    int grade;

public:
    const SubjectDefinition &getSubDefinition() const;

    void setSubDefinition(const SubjectDefinition &subDefinition);

    SubjectData(int g, SubjectDefinition subDef);

    int getGrade() const;

    void setGrade(int grade);

};


#endif //STUDENTMANGEMENTSYSTEM_SUBJECTDATA_H
