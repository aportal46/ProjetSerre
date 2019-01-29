/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   VueMeteo.cpp
 * Author: snir2g2
 *
 * Created on 15 janvier 2019, 16:30
 */
#include <QString>
#include "VueMeteo.h"

VueMeteo::VueMeteo() {
    widget.setupUi(this);
}
VueMeteo::VueMeteo(BulletinMeteo * unBulletinMeteo) {
    dernierBulletinMeteo = unBulletinMeteo;
}

VueMeteo::~VueMeteo() {
}
void VueMeteo::mettreAjour(){
    
    widget.vitesseVent->setText(QString::number(dernierBulletinMeteo->getVitesseVent(),10));
    widget.temperature->setText( QString::number(dernierBulletinMeteo->getTemperature(),10));

}