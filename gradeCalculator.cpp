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

    return totalGrade = assignmentTotal + labTotal;


}

//calculates the categorical grade you have for each section and outputs it
void Grade::calculateCategoricalGrade(){
    double assingmentCategorical = 0;
    
    double labCategorical = 0;
    
    double finalExamGrade = final_exam;
    
    double finalProjectGrade = final_project;
    
    double mecProjectGrade = mec_project;
    
    //calculates the total grade of the assignments
    for(int i = 0; i < assignments.size(); i++){
        assignmentCategorical += assignmentCategorical[i];
    }
    //calculates the total grade of the labs
    for(int i = 0; i < labs.size(); i++){
        labCategorical += labCategorical[i];
    }
    //This section I divide all the sections by their weight out of 100 which would return a decimal below 1 so I then multiply each section by 10 to get the percent
    assignmentCategorical = assignmentCategorical /500;
    
    assignmentCategorical = assignmentCategorical * 10;
    
    labCategorical = labCategorical / 50;
    
    labCategorical = labCategorical * 10;
    
    finalExamGrade = finalExamGrade / 100;
    
    finalExamGrade = finalExamGrade * 10;
    
    finalProjectGrade = finalProjectGrade /350;
    
    finalProjectGrade = finalProjectGrade * 10;
    
    mecProjectGrade = mecProjectGrade / 30;
    
    mecProjectGrade = mecProjectGrade * 10;
    
    //These commands output each section with the name of the section the number and a percent symbol
    Std::Cout<< "Assignments Grade: " << assignmentCategorical << "%" << std::endl;
    
    Std::Cout<< "Labs Grade: " << labCategorical << "%" << std::endl;
    
    Std::Cout<< "Final Project Grade: " << finalProjectGrade << "%" << std::endl;
    
    Std::Cout<< "Final Exam Grade: " << finalExamGrade << "%" << std::endl;
    
    Std::Cout<< "MEC project Grade: " << mecProjectGrade <<  "%" << std::endl;
    
    
}
