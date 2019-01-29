/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Serre.h
 * Author: snir2g2
 *
 * Created on 29 janvier 2019, 14:22
 */

#ifndef SERRE_H
#define SERRE_H

#include "InfosClimat.h"

class Serre {
public:
    Serre();
    virtual ~Serre();
    InfosClimat * getInfosClimat ();
    void executerCommande ();
private:
    InfosClimat * infosClimat;
};

#endif /* SERRE_H */

