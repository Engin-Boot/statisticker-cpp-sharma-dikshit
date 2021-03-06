#include "stats.h"
#include <numeric>
#include <algorithm>

Stats Statistics::ComputeStatistics(const std::vector<double> &vec) {
    //base condition
    Stats obj;
    double sum = 0;

    if(vec.size()== 0) return obj;
    for(double i : vec) {
        sum += i;
    }

    obj.max = *max_element(vec.begin(), vec.end());
    obj.min = *min_element(vec.begin(), vec.end());
    obj.average = sum / vec.size();

    return obj;
}