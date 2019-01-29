/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ClientMeteo.cpp
 * Author: snir2g2
 * 
 * Created on 17 janvier 2019, 14:29
 */

#include "ClientMeteo.h"
#include "BulletinMeteo.h"

ClientMeteo::ClientMeteo() {
    
}

ClientMeteo::~ClientMeteo() {
}

void ClientMeteo::traiterBulletinMeteo (BulletinMeteo * bulletin) {
    this->dernierBulletinMeteo = bulletin;
}

void ClientMeteo::declencherAlertVent () {
    dernierBulletinMeteo->setAlertVent(true);
}

void ClientMeteo::declencherFinAlertVent () {
    dernierBulletinMeteo->setAlertVent(false);
}

BulletinMeteo * ClientMeteo::getBulletinMeteo () {
    return dernierBulletinMeteo;
}
