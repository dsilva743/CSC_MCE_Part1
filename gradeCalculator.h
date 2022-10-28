#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <cmath>


#ifndef MCE_01_GRADECALCULATOR_H
#define MCE_01_GRADECALCULATOR_H


class Grade{

    private:
        float final_exam, mec_project, final_project;
        std::vector<float> assignments, labs;
    public:
        Grade(std::vector<float> a, std::vector<float> l, float f_e, float mec_p, float f_p);
        int calculateFinalGrade();
        std::string calculateLetterGrade();
        double calculateMidTermGrade();
};


#endif //MCE_01_GRADECALCULATOR_H
