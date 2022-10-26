#include "gradeCalculator.h"

Grade::Grade(std::vector<int> a, std::vector<int> l, int f_e, int mec_p, int f_p){
    this->assignments = a;
    this->labs = l;
    this->final_exam = f_e;
    this->mec_project = mec_p;
    this->final_project = f_p;
}

int Grade::calculateSingleGrade(int g){
    //switch statements 

}   

int Grade::calculateMultipleGrades(std::vector<int> g){

}
