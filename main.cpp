#include <iostream>
#include "gradeCalculator.h"

int getChoice();

int main(){
    //Each variable assignment section creates variables for each student that is then assigned to the class variable that is created for them

    //dominic
    std::vector<float> domAssign {100, 75, 100, 80, 100};
    std::vector<float> domLab {5, 0, 5, 5, 5, 0, 5, 5, 5, 5, 5};
    float domLastExam = 89;
    float domMec = 30;
    float domLastProj = 320;

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

    //these are the variables for the grade class for each of the 4 student datasets
    Grade student1(domAssign, domLab, domLastExam, domMec,  domLastProj);
    Grade student2(mattAssign, mattLab, mattLastExam, mattMec,  mattLastProj);
    Grade student3(chrisAssign, chrisLab, chrisLastExam, chrisMec,  chrisLastProj);
    Grade student4(mubzyAssign, mubzyLab, mubzyLastExam, mubzyMec,  mubzyLastProj);

    int num = getChoice();

    while(num != 5) {
        if (num == 1) {

            std::cout << "Dom Grades: " << std::endl;
            int totalNumGrade = student1.calculateFinalGrade();
            double midTerm = student1.calculateMidTermGrade(domAssign, domLab);
            std::string totalLetterGrade = student1.calculateLetterGrade(totalNumGrade);
            student1.calculateCategoricalGrade(domAssign, domLab, domLastExam, domMec, domLastProj, midTerm);
            num = getChoice();
        }
        else if(num == 2) {

            std::cout << "Chris Grades: " << std::endl;
            int totalNumGrade = student2.calculateFinalGrade();
            double midTerm = student2.calculateMidTermGrade(chrisAssign, chrisLab);
            std::string totalLetterGrade = student2.calculateLetterGrade(totalNumGrade);
            student2.calculateCategoricalGrade(chrisAssign, chrisLab, chrisLastExam, chrisMec, chrisLastProj, midTerm);
            num = getChoice();
        }
        else if(num == 3){

            std::cout << "Matt Grades: " << std::endl;
            int totalNumGrade = student3.calculateFinalGrade();
            double midTerm = student3.calculateMidTermGrade(mattAssign, mattLab);
            std::string totalLetterGrade = student3.calculateLetterGrade(totalNumGrade);
            student3.calculateCategoricalGrade(mattAssign, mattLab, mattLastExam, mattMec, mattLastProj, midTerm);
            num = getChoice();
        }
        else if(num == 4){

            std::cout << "Mubzy Grades: " << std::endl;
            int totalNumGrade = student4.calculateFinalGrade();
            double midTerm = student4.calculateMidTermGrade(mubzyAssign, mubzyLab);
            std::string totalLetterGrade = student4.calculateLetterGrade(totalNumGrade);
            student4.calculateCategoricalGrade(mubzyAssign, mubzyLab, mubzyLastExam, mubzyMec, mubzyLastProj, midTerm);
            num = getChoice();
        }
        else{
            break;
        }
    }

    std::cout << "Good-bye";

    return 0;
}


int getChoice() {

    int num;

    std::cout << std::endl;

    std::cout << "Select one person who you would like to review grades: " << std::endl;
    std::cout << " 1. Dom " << std::endl;
    std::cout << " 2. Chris " << std::endl;
    std::cout << " 3. Matt " << std::endl;
    std::cout << " 4. Mubzy " << std::endl;
    std::cout << "To quit enter 5" << std::endl;

    std::cout << "Enter Choice: ";
    std::cin >> num;

    std::cout << std::endl;

    return num;

}
