/********************************************************************************
** Form generated from reading UI file 'etatright.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ETATRIGHT_H
#define UI_ETATRIGHT_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QCheckBox>
#include <QFrame>
#include <QHBoxLayout>
#include <QHeaderView>
#include <QLabel>
#include <QSpacerItem>
#include <QVBoxLayout>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_etatRight
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *Choix;
    QFrame *frame;
    QVBoxLayout *ShowChoix;

    void setupUi(QWidget *etatRight)
    {
        if (etatRight->objectName().isEmpty())
            etatRight->setObjectName(QString::fromUtf8("etatRight"));
        etatRight->resize(400, 300);
        etatRight->setMinimumSize(QSize(0, 200));
        horizontalLayout = new QHBoxLayout(etatRight);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label = new QLabel(etatRight);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(true);
        font.setWeight(50);
        font.setStrikeOut(false);
        label->setFont(font);

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        checkBox_2 = new QCheckBox(etatRight);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        horizontalLayout_2->addWidget(checkBox_2);

        checkBox = new QCheckBox(etatRight);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout_2->addWidget(checkBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        Choix = new QHBoxLayout();
        Choix->setObjectName(QString::fromUtf8("Choix"));
        Choix->setContentsMargins(-1, 4, -1, -1);

        verticalLayout->addLayout(Choix);

        frame = new QFrame(etatRight);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        ShowChoix = new QVBoxLayout(frame);
        ShowChoix->setObjectName(QString::fromUtf8("ShowChoix"));
        ShowChoix->setSizeConstraint(QLayout::SetMinAndMaxSize);

        verticalLayout->addWidget(frame);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(etatRight);

        QMetaObject::connectSlotsByName(etatRight);
    } // setupUi

    void retranslateUi(QWidget *etatRight)
    {
        etatRight->setWindowTitle(QApplication::translate("etatRight", "Form", 0, -1));
        label->setText(QApplication::translate("etatRight", "Mon Etat", 0, -1));
        checkBox_2->setText(QApplication::translate("etatRight", "Initial", 0, -1));
        checkBox->setText(QApplication::translate("etatRight", "Final", 0, -1));
    } // retranslateUi

};

namespace Ui {
    class etatRight: public Ui_etatRight {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ETATRIGHT_H
