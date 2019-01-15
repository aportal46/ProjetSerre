/********************************************************************************
** Form generated from reading UI file 'VueMeteo.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VUEMETEO_H
#define UI_VUEMETEO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VueMeteo
{
public:
    QLabel *label;

    void setupUi(QWidget *VueMeteo)
    {
        if (VueMeteo->objectName().isEmpty())
            VueMeteo->setObjectName(QStringLiteral("VueMeteo"));
        VueMeteo->resize(400, 300);
        label = new QLabel(VueMeteo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 191, 61));
        QFont font;
        font.setPointSize(26);
        label->setFont(font);

        retranslateUi(VueMeteo);

        QMetaObject::connectSlotsByName(VueMeteo);
    } // setupUi

    void retranslateUi(QWidget *VueMeteo)
    {
        VueMeteo->setWindowTitle(QApplication::translate("VueMeteo", "VueMeteo", 0));
        label->setText(QApplication::translate("VueMeteo", "Vue Meteo", 0));
    } // retranslateUi

};

namespace Ui {
    class VueMeteo: public Ui_VueMeteo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VUEMETEO_H
