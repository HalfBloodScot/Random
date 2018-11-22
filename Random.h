#ifndef ZIP_RANDOM_H
#define ZIP_RANDOM_H

#include <random>
#include <ctime>

class Random {
public:
    static float nextFloat(float min, float max);
    static float nextFloat(float max);

    static int nextInt(int min, int max);
    static int nextInt(int max);

    static int nextDirection();

    static unsigned nextUInt(unsigned min, unsigned max);
    static unsigned nextUInt(unsigned max);
protected:
    static std::mt19937 engine;
};

#endif //ZIP_RANDOM_H
