#include "gradeCalculator.h"

int main(){
    //Each variable assignment section creates variables for each student that is then assigned to the class variable that is created for them
    //mubzy
    std::vector<float> mubzyAssign {100, 85, 100, 90, 95};
    std::vector<float> mubzyLab {5, 5, 0, 5, 5, 5, 5, 0, 5, 5, 5};
    float mubzyLastExam = 94;
    float mubzyMec = 30;
    float mubzyLastProj = 325;
    //matt
    std::vector<float> mattAssign {80, 100, 90, 100, 75};
    std::vector<float> mattLab {5, 5, 0, 5, 0, 5, 5, 5, 5, 5, 0};
    float mattLastExam = 96;
    float mattMec = 30;
    float mattLastProj = 280;
    //chris
    std::vector<float> chrisAssign {90, 100, 95, 100, 85};
    std::vector<float> chrisLab {5, 5, 5, 5, 5, 0, 5, 5, 5, 5, 5};
    float chrisLastExam = 91;
    float chrisMec = 30;
    float chrisLastProj = 330;
    //dominic
    std::vector<float> domAssign {100, 95, 100, 80, 100};
    std::vector<float> domLab {5, 0, 5, 5, 5, 0, 5, 5, 5, 5, 5};
    float domLastExam = 89;
    float domMec = 30;
    float domLastProj = 320;
    //these are the variables for the grade class for each of the 4 student datasets
    Grade Mubariz(mubzyAssign, mubzyLab, mubzyLastExam, mubzyMec,  mubzyLastProj);
    Grade Matt(mattAssign, mattLab, mattLastExam, mattMec,  mattLastProj);
    Grade Chris(chrisAssign, chrisLab, chrisLastExam, chrisMec,  chrisLastProj);
    Grade Dom(domAssign, domLab, domLastExam, domMec,  domLastProj);

    int totalNumGrade = student.calculateFinalNumGrade();
    std::string totalLetterGrade = student.calculateLetterGrade(totalNumGrade);
    double totalMidtermGrade = student.calculateMidTermGrade(assign, lab);
    std::cout << totalNumGrade << std::endl;
    std::cout << totalLetterGrade << std::endl;
    std::cout << totalMidtermGrade << std::endl;

    return 0;   
}
