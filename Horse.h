//
// Created by user on 12/04/2021.
//

#ifndef UNTITLED1_HORSE_H
#define UNTITLED1_HORSE_H


#include "Transport.h"

class Horse : public Transport{
private:
    int speed = 100;
public:
    Horse();
    virtual void go();
};


#endif //UNTITLED1_HORSE_H
