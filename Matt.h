#include "gradeCalculator.h"

class Matt : public Grade{
    public:
        Matt(std::vector<int> a, std::vector<int> l, int f_e, int mec_p, int f_p) : Grade(a, l, f_e, mec_p, f_p){};
};