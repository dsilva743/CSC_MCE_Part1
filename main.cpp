#include "gradeCalculator.h"

int main(){
    
    Grade chris({100, 100, 100, 100, 100}, {5, 5, 5, 5, 5, 5, 5, 5, 5, 5}, 90, 30, 300);
    Grade dom({80, 100, 95, 95, 80}, {5, 5, 5, 5, 5, 5, 5, 5, 5, 5}, 85, 30, 300);
    Grade matt({100, 90, 80, 80, 95}, {5, 5, 5, 5, 5, 5, 5, 5, 5, 5}, 90, 30, 300);
    Grade mubzy({80, 100, 80, 90, 100}, {5, 5, 5, 5, 5, 5, 5, 5, 5, 5}, 80, 30, 300);

    chris.calculateNumGrade();
    dom.calculateNumGrade();
    matt.calculateNumGrade();
    mubzy.calculateNumGrade();

    return 0;
}
