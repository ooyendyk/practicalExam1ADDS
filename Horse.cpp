//
// Created by user on 12/04/2021.
//

#include "Horse.h"

void Horse::go() {
    dist_travelled = dist_travelled + speed;
}

Horse::Horse() {
    dist_travelled = 0;
}
