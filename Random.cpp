#include "Random.h"

std::mt19937 Random::engine((unsigned)time(nullptr));

float Random::nextFloat(float min, float max) {
    std::uniform_real_distribution<float> dist(min, max);
    return dist(engine);
}

float Random::nextFloat(float max) {
    std::uniform_real_distribution<float> dist(0.f, max);
    return dist(engine);
}

int Random::nextInt(int min, int max) {
    std::uniform_int_distribution<int> dist(min, max);
    return dist(engine);
}

int Random::nextInt(int max) {
    std::uniform_int_distribution<int> dist(0, max);
    return dist(engine);
}

int Random::nextDirection() {
    std::uniform_int_distribution<int> dist(0, 1);
    return dist(engine) == 0 ? 1 : -1;
}

unsigned Random::nextUInt(unsigned min, unsigned max) {
    std::uniform_int_distribution<unsigned> dist(min, max);
    return dist(engine);
}

unsigned Random::nextUInt(unsigned max) {
    std::uniform_int_distribution<unsigned> dist(0, max);
    return dist(engine);
}