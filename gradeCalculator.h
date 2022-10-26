#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>

const int assignment_weight = 500, lab_weight = 50, final_exam_weight = 100, mec_project_weight = 30, final_project_weight = 350;

class Grade{

    private: 
        int final_exam, mec_project, final_project;
        std::vector<int> assignments, labs;

    public:
        Grade::Grade(std::vector<int> a, std::vector<int> l, int f_e, int mec_p, int f_p);
        int calculateSingleGrade(int g);
        int calculateMultipleGrades(std::vector<int> g);

};