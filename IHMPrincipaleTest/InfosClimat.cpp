/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   InfosClimat.cpp
 * Author: snir2g2
 * 
 * Created on 29 janvier 2019, 14:41
 */

#include "InfosClimat.h"

InfosClimat::InfosClimat() {
}

InfosClimat::~InfosClimat() {
}

void InfosClimat::setHygrometrie (int hygrometrie) {
    this->hygrometrie = hygrometrie;
}

int InfosClimat::getHygrometrie () {
    return this->hygrometrie;
}

void InfosClimat::setTemperature (int temperature) {
    this->temperature = temperature;
}

int InfosClimat::getTemperature () {
    return this->temperature;
}

void InfosClimat::setPositionOuvrants (int positionOuvrants) {
    this->positionOuvrants = positionOuvrants;
}

int InfosClimat::getPositionOuvrants () {
    return this->positionOuvrants;
}

void InfosClimat::setLuminosite (int luminosite) {
    this->luminosite = luminosite;
}

int InfosClimat::getLuminosite () {
    return this->luminosite;
}

