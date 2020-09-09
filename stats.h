#include <vector>
#include <math.h>

class Stats {
    private:
        double max, min, average;
    public:
        Stats() {
            max = nan("null");
            min = nan("null");
            average = nan("null");
        }
};

namespace Statistics {
    Stats ComputeStatistics(const std::vector <double> &);
}
