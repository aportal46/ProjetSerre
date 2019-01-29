/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BulletinMeteo.h
 * Author: snir2g2
 *
 * Created on 17 janvier 2019, 15:11
 */

#ifndef BULLETINMETEO_H
#define BULLETINMETEO_H

class BulletinMeteo {
public:
    BulletinMeteo();
    virtual ~BulletinMeteo();
    int getTemperature ();
    int getVitesseVent ();
    void setVitesseVent (int vitesse);
    void setTemperature (int temperature);
    void setAlertVent (bool alert);
private:
    int temperature;
    int vitesseVent;
    bool alertVent;
};

#endif /* BULLETINMETEO_H */

