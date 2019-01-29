/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   InfosClimat.h
 * Author: snir2g2
 *
 * Created on 29 janvier 2019, 14:41
 */

#ifndef INFOSCLIMAT_H
#define INFOSCLIMAT_H

class InfosClimat {
public:
    InfosClimat();
    virtual ~InfosClimat();
    void setHygrometrie (int hygrometrie);
    int getHygrometrie ();
    void setTemperature (int temperature);
    int getTemperature ();
    void setPositionOuvrants (int positionOuvrants);
    int getPositionOuvrants ();
    void setLuminosite (int luminosite);
    int getLuminosite ();
private:
    int hygrometrie;
    int temperature;
    int positionOuvrants;
    int luminosite;
    int date;
};

#endif /* INFOSCLIMAT_H */

