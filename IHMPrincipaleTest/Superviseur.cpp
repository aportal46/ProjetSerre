/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Superviseur.cpp
 * Author: snir2g2
 * 
 * Created on 17 janvier 2019, 13:27
 */

#include "Superviseur.h"
#include "VuePrincipale.h"

Superviseur::Superviseur() {
    for (int i = 0; i < 3; i++) {
        serre [i] = new Serre ();
    }
    leClientMeteo = new ClientMeteo ();
}

Superviseur::~Superviseur() {
    delete leClientMeteo;
}

ClientMeteo * Superviseur::getLeClientMeteo () {
    return leClientMeteo;
}

void Superviseur::setVuePrincipale (VuePrincipale * uneVuePrincipale) {
    laVue = uneVuePrincipale;
}
