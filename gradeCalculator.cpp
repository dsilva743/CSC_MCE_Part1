#include <iostream>
#include "gradeCalculator.h"

Grade::Grade(std::vector<float> a, std::vector<float> l, float f_e, float mec_p, float f_p){
    this-> assignments = a;
    this-> labs = l;
    this-> final_exam = f_e;
    this-> mec_project = mec_p;
    this-> final_project = f_p;
}

//Calculate final grade
int Grade::calculateFinalGrade(){

    float assignmentPts = 0;
    float labPts = 0;
    float finalExamPts = final_exam;
    float mecProjectPts = mec_project;
    float finalProjectPts = final_project;

    for(int i = 0; i < assignments.size(); i++){
        assignmentPts += assignments[i];
    }

    for(int i = 0; i < labs.size(); i++){
        labPts += labs[i];
    }

    float totalPts = (assignmentPts + labPts + finalExamPts + mecProjectPts + finalProjectPts) / 10;

    return totalPts;
}


//Output letter grade based off final grade
std::string Grade::calculateLetterGrade(float totalPts){

    std::string letter;

    if(totalPts >= 94){
        letter = "A";
    }
    else if(totalPts < 94 && totalPts >= 90){
        letter = "A-";
    }
    else if(totalPts < 90 && totalPts >= 87){
        letter = "B+";
    }
    else if(totalPts < 87 && totalPts >= 83){
        letter = "B";
    }
    else if(totalPts < 83 && totalPts >= 80){
        letter = "B-";
    }
    else if(totalPts < 80 && totalPts >= 77){
        letter = "C+";
    }
    else if(totalPts < 77 && totalPts >= 73){
        letter = "C";
    }
    else if(totalPts < 73 && totalPts >= 70){
        letter = "C-";
    }
    else if(totalPts < 70 && totalPts >= 67){
        letter = "D+";
    }
    else if(totalPts < 67 && totalPts >= 60){
        letter = "D";
    }
    else{
        letter = "F";
    }

    return letter;
}


//Calculating mid term grade 3 assignments 6 labs
double Grade::calculateMidTermGrade(std::vector<float> a, std::vector<float> l){

    double assignmentTotal = 0;
    double labTotal = 0;

    double totalGrade = 0;

    //Total sum of the first 3 assignments grades
    for(int i = 0; i < 3; i++){
        assignmentTotal += assignments[i];
    }

    //Total sum of for 6 lab assignment grades
    for(int i = 0; i < 6; i++){
        labTotal += labs[i];
    }

    totalGrade = assignmentTotal + labTotal;

    return totalGrade;

}

//calculates the categorical grade you have for each section and outputs it
void Grade::calculateCategoricalGrade(std::vector<float> a, std::vector<float> l, float f_e, float mec_p, float f_p, double midTerm){

    double midterm = midTerm;
    double assingmentCategorical = 0;
    double labCategorical = 0;
    double finalExamGrade = f_e;
    double finalProjectGrade = f_p;
    double mecProjectGrade = mec_p;

    //calculates the total grade of the assignments
    for(int i = 0; i < a.size(); i++){
        assingmentCategorical += a[i];
    }
    //calculates the total grade of the labs
    for(int i = 0; i < l.size(); i++){
        labCategorical += l[i];
    }
    //This section I divide all the sections by their weight out of 100 which would return a decimal below 1 so I then multiply each section by 10 to get the percent
    assingmentCategorical = assingmentCategorical / 500;
    assingmentCategorical = assingmentCategorical * 100;

    midterm /= 300;
    midterm *= 100;

    labCategorical = labCategorical / 50;
    labCategorical = labCategorical * 100;

    finalExamGrade = finalExamGrade / 100;
    finalExamGrade = finalExamGrade * 100;

    finalProjectGrade = finalProjectGrade / 350;
    finalProjectGrade = finalProjectGrade * 100;

    mecProjectGrade = mecProjectGrade / 30;
    mecProjectGrade = mecProjectGrade * 100;

    //These commands output each section with the name of the section the number and a percent symbol
    std::cout<< "Assignments Grade: " << assingmentCategorical << "%" << std::endl;

    std::cout<< "Labs Grade: " << labCategorical << "%" << std::endl;

    std::cout << "Mid-term Grade: " << midterm << "%" << std::endl;

    std::cout<< "MEC project Grade: " << mecProjectGrade <<  "%" << std::endl;

    std::cout<< "Final Project Grade: " << finalProjectGrade << "%" << std::endl;

    std::cout<< "Final Exam Grade: " << finalExamGrade << "%" << std::endl;



}



