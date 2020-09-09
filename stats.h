#include <vector>
#include <math.h>

class Stats {
    public:
        double max, min, average;
        Stats() {
            max = nan("null");
            min = nan("null");
            average = nan("null");
        }
};

namespace Statistics {
    Stats ComputeStatistics(const std::vector <double> &);
}
