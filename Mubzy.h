#include "gradeCalculator.h"

class Mubzy : public Grade{
    public:
        Mubzy(std::vector<int> a, std::vector<int> l, int f_e, int mec_p, int f_p) : Grade(a, l, f_e, mec_p, f_p){};
};