/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Serre.cpp
 * Author: snir2g2
 * 
 * Created on 29 janvier 2019, 14:22
 */

#include "Serre.h"

Serre::Serre() {
    this->infosClimat = new InfosClimat ();
}

Serre::~Serre() {
    delete this->infosClimat;
}

void Serre::executerCommande () {
}

InfosClimat * Serre::getInfosClimat () {
    return this->infosClimat;
}