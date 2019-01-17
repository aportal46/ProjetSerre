/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   VuePrincipale.cpp
 * Author: snir2g2
 *
 * Created on 10 janvier 2019, 17:09
 */

#include "VuePrincipale.h"

VuePrincipale::VuePrincipale(Superviseur * unSuperviseur) {
    widget.setupUi(this);
    // creation des widgets
    leSuperviseur = unSuperviseur;
    laVueMeteo = new VueMeteo ();
    for (int i = 0; i < 3; i++) {
        laVueSerre [i] = new VueSerre ();
    }
    // ajout des widgets au BoxLayout
    widget.meteo->addWidget(laVueMeteo);
    widget.serre->addWidget(laVueSerre [0]);
    widget.serre->addWidget(laVueSerre [1]);
    widget.serre->addWidget (laVueSerre [2]);
}

VuePrincipale::~VuePrincipale() {
    delete laVueMeteo;
    for (int i = 0; i < 3; i++) {
        delete laVueSerre [i];
    }
}

VueMeteo * VuePrincipale::getLaVueMeteo () {
    return laVueMeteo;
}

void VuePrincipale::mettreAjour () {
    laVueMeteo->mettreAjour();
    laVueSerre [0]->mettreAjour();
    laVueSerre [1]->mettreAjour();
    laVueSerre [2]->mettreAjour();
}