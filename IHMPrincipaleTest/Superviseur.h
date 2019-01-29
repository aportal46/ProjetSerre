/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Superviseur.h
 * Author: snir2g2
 *
 * Created on 17 janvier 2019, 13:27
 */

#ifndef SUPERVISEUR_H
#define SUPERVISEUR_H

#include "VuePrincipale.h"
#include "ClientMeteo.h"
#include "Serre.h"

class Superviseur {
public:
    Superviseur();
    virtual ~Superviseur();
    ClientMeteo * getLeClientMeteo ();
    void setVuePrincipale (VuePrincipale * uneVuePrincipale);
private:
    VuePrincipale * laVue;
    Serre * serre [3];
    ClientMeteo * leClientMeteo;
};

#endif /* SUPERVISEUR_H */

