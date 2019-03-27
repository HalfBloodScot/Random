# Random
A C++ static class interface for generating non-cryptographic randomness.

## Installation
Since Random is only a single header/source class, you can directly add it to your project by downloading the two files and adding `#include "Random.h"` in your project.

## Example Usage
``
#include <iostream>
#include "Random.h"

int main() {
    //Generate random float in range [1, 12]
    float x = Random::nextFloat(1, 12);
    
    //Generate random int in rage [0, 10]
    int y = Random::nextInt(10);
    
    return 0;
}
``
