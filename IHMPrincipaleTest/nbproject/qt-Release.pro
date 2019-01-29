# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Release/GNU-Linux
TARGET = IHMPrincipaleTest
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += release 
PKGCONFIG +=
QT = core gui widgets
SOURCES += ../VueMeteoTesteur/VueMeteo.cpp.cc BulletinMeteo.cpp ClientMeteo.cpp InfosClimat.cpp Serre.cpp Superviseur.cpp VuePrincipale.cpp.cc VueSerre.cpp.cc main.cpp
HEADERS += ../VueMeteoTesteur/VueMeteo.h BulletinMeteo.h ClientMeteo.h InfosClimat.h Serre.h Superviseur.h VuePrincipale.h VueSerre.h
FORMS += ../VueMeteoTesteur/VueMeteo.ui VuePrincipale.ui VueSerre.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Release/GNU-Linux
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 
