/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VuePrincipale.h
 * Author: snir2g2
 *
 * Created on 10 janvier 2019, 17:09
 */

#ifndef _VUEPRINCIPALE_H
#define _VUEPRINCIPALE_H

#include "ui_VuePrincipale.h"
#include "VueMeteo.h"
#include "VueSerre.h"

class Superviseur;

class VuePrincipale : public QWidget {
    Q_OBJECT
public:
    VuePrincipale();
    virtual ~VuePrincipale();
    VueMeteo * getLaVueMeteo ();
    void mettreAjour ();
private:
    Ui::VuePrincipale widget;
    VueMeteo * laVueMeteo;
    VueSerre * laVueSerre [3];
    Superviseur * leSuperviseur;
};

#endif /* _VUEPRINCIPALE_H */
