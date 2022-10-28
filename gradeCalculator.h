#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <cmath>

const int assignment_weight = 500, lab_weight = 50, final_exam_weight = 100, mec_project_weight = 30, final_project_weight = 350;

class Grade{
    private:
        float final_exam, mec_project, final_project;
        std::vector<float> assignments, labs;
    public: 
        Grade(std::vector<float> a, std::vector<float> l, float f_e, float mec_p, float f_p);
        int calculateFinalGrade();
        char calculateLetterGrade();
        double calculateMidTermGrade();
};
