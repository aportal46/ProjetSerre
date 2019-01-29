/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ClientMeteo.h
 * Author: snir2g2
 *
 * Created on 17 janvier 2019, 14:29
 */

#ifndef CLIENTMETEO_H
#define CLIENTMETEO_H

class BulletinMeteo;

class ClientMeteo {
public:
    ClientMeteo();
    virtual ~ClientMeteo();
    void traiterBulletinMeteo (BulletinMeteo * billetin);
    void declencherAlertVent ();
    void declencherFinAlertVent ();
    BulletinMeteo * getBulletinMeteo ();
private:
    BulletinMeteo * dernierBulletinMeteo;
};

#endif /* CLIENTMETEO_H */

