/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VueMeteo.h
 * Author: snir2g2
 *
 * Created on 15 janvier 2019, 16:30
 */

#ifndef _VUEMETEO_H
#define _VUEMETEO_H

#include "ui_VueMeteo.h"

class VueMeteo : public QWidget {
    Q_OBJECT
public:
    VueMeteo();
    virtual ~VueMeteo();
private:
    Ui::VueMeteo widget;
};

#endif /* _VUEMETEO_H */
