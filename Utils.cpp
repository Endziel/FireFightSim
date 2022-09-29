//
// Created by avera on 05.05.2022.
//



#include "Utils.h"
#include <random>

double generateDouble(int bottomRange, int upperRange) {
    std::uniform_int_distribution<int> dist(bottomRange, upperRange);  //(min, max)

//Mersenne Twister: Good quality random number generator
    std::mt19937 rng;
//Initialize with non-deterministic seeds
    rng.seed(std::random_device{}());
    return dist(rng);
}

double generateDouble(double bottomRange, double upperRange) {
    std::uniform_real_distribution<double> dist(bottomRange, upperRange);  //(min, max)

//Mersenne Twister: Good quality random number generator
    std::mt19937 rng;
//Initialize with non-deterministic seeds
    rng.seed(std::random_device{}());
    return dist(rng);

}
