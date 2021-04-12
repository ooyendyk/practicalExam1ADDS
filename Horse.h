//
// Created by user on 12/04/2021.
//

#ifndef UNTITLED1_HORSE_H
#define UNTITLED1_HORSE_H


#include "Transport.h"

class Horse : public Transport{
private:
    int dist_travelled;
public:
    Horse();
//    virtual int get_dist_travelled();
    virtual void go();
};


#endif //UNTITLED1_HORSE_H
