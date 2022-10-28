#include "gradeCalculator.h"

Grade::Grade(std::vector<float> a, std::vector<float> l, float f_e, float mec_p, float f_p){
    this->assignments = a;
    this->labs = l;
    this->final_exam = f_e;
    this->mec_project = mec_p;
    this->final_project = f_p;
}

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

char Grade::calculateLetterGrade(float totalPts){
    char letter;
    if (totalPts < 60){
        letter = 'F';
    }
	else if (totalPts < 70){
        letter = 'D';
    }
	else if (totalPts < 80){
        letter = 'C';
    }	
	else if (totalPts < 90){
        letter = 'B';
    }
	else{
        letter = 'A';
    }

    return letter;

   }
    
}

double Grade::calculateMidTermGrade(){




}
