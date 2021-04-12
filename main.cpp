#include <iostream>
#include "Transport.h"
#include "Horse.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    Transport brian;
    std::cout<<brian.get_dist_travelled()<<std::endl;

    Horse nelly;
    std::cout<<nelly.get_dist_travelled()<<std::endl;
    nelly.go();
    std::cout<<nelly.get_dist_travelled()<<std::endl;

    return 0;
}
