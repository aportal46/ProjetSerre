/********************************************************************************
** Form generated from reading UI file 'VueSerre.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VUESERRE_H
#define UI_VUESERRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VueSerre
{
public:
    QLabel *label;

    void setupUi(QWidget *VueSerre)
    {
        if (VueSerre->objectName().isEmpty())
            VueSerre->setObjectName(QStringLiteral("VueSerre"));
        VueSerre->resize(400, 300);
        label = new QLabel(VueSerre);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 171, 71));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);

        retranslateUi(VueSerre);

        QMetaObject::connectSlotsByName(VueSerre);
    } // setupUi

    void retranslateUi(QWidget *VueSerre)
    {
        VueSerre->setWindowTitle(QApplication::translate("VueSerre", "VueSerre", 0));
        label->setText(QApplication::translate("VueSerre", "Vue Serre", 0));
    } // retranslateUi

};

namespace Ui {
    class VueSerre: public Ui_VueSerre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VUESERRE_H
