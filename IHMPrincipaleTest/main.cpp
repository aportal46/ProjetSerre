/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: snir2g2
 *
 * Created on 10 janvier 2019, 16:57
 */

#include <QApplication>

#include "VuePrincipale.h"
#include "Superviseur.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here
    Superviseur * superviseur = new Superviseur ();
    VuePrincipale * vp = new VuePrincipale (superviseur);
    vp->mettreAjour ();
    vp->show ();
    return app.exec();
}
