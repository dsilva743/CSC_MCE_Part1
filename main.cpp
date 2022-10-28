#include "gradeCalculator.h"

int main(){
    
    std::vector<float> assign {100, 100, 100, 100, 100};
    std::vector<float> lab {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    float last_exam = 90;
    float mec = 30;
    float last_proj = 300;
    
    Grade student(assign, lab, last_exam, mec, last_proj);

    int totalNumGrade = student.calculateFinalNumGrade();
    std::string totalLetterGrade = student.calculateLetterGrade(totalNumGrade);
    double totalMidtermGrade = student.calculateMidTermGrade(assign, lab);
    std::cout << totalNumGrade << std::endl;
    std::cout << totalLetterGrade << std::endl;
    std::cout << totalMidtermGrade << std::endl;

    return 0;   
}
