/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BulletinMeteo.cpp
 * Author: snir2g2
 * 
 * Created on 17 janvier 2019, 15:11
 */

#include "BulletinMeteo.h"

BulletinMeteo::BulletinMeteo() {
}

BulletinMeteo::~BulletinMeteo() {
}

int BulletinMeteo::getTemperature () {
    return temperature;
}

int BulletinMeteo::getVitesseVent () {    
    return vitesseVent;
}

void BulletinMeteo::setVitesseVent (int vitesse) {
    this->vitesseVent = vitesse;
}

void BulletinMeteo::setTemperature (int temperature) {    
    this->temperature = temperature;
}

void BulletinMeteo::setAlertVent (bool alert) {
    this->alertVent = alert;
}

