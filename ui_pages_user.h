/********************************************************************************
** Form generated from reading UI file 'pages_user.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGES_USER_H
#define UI_PAGES_USER_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pages_User
{
public:
    QLabel *label;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QComboBox *cityFromText;
    QComboBox *cityToText;
    QDateEdit *dateEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *Pages_User)
    {
        if (Pages_User->objectName().isEmpty())
            Pages_User->setObjectName(QString::fromUtf8("Pages_User"));
        Pages_User->resize(829, 658);
        label = new QLabel(Pages_User);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 20, 711, 41));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Pages_User);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(720, 30, 81, 16));
        tableWidget = new QTableWidget(Pages_User);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 160, 801, 481));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        layoutWidget = new QWidget(Pages_User);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 90, 801, 61));
        layoutWidget->setMinimumSize(QSize(0, 30));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(28);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        cityFromText = new QComboBox(layoutWidget);
        cityFromText->setObjectName(QString::fromUtf8("cityFromText"));
        cityFromText->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(cityFromText, 0, 0, 1, 1);

        cityToText = new QComboBox(layoutWidget);
        cityToText->setObjectName(QString::fromUtf8("cityToText"));
        cityToText->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(cityToText, 0, 1, 1, 1);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setMinimumSize(QSize(0, 30));
        dateEdit->setCalendarPopup(true);
        dateEdit->setDate(QDate(2022, 3, 3));

        gridLayout->addWidget(dateEdit, 0, 2, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(pushButton, 0, 3, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(pushButton_2, 0, 4, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(pushButton_3, 0, 5, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(pushButton_4, 0, 6, 1, 1);


        retranslateUi(Pages_User);

        QMetaObject::connectSlotsByName(Pages_User);
    } // setupUi

    void retranslateUi(QWidget *Pages_User)
    {
        Pages_User->setWindowTitle(QCoreApplication::translate("Pages_User", "Form", nullptr));
        label->setText(QCoreApplication::translate("Pages_User", "\346\230\245\347\247\213\350\210\252\347\251\272\350\210\252\347\217\255\344\277\241\346\201\257\346\237\245\350\257\242\347\263\273\347\273\237", nullptr));
        label_2->setText(QCoreApplication::translate("Pages_User", "\346\202\250\345\245\275\357\274\214User", nullptr));
        dateEdit->setDisplayFormat(QCoreApplication::translate("Pages_User", "yyyy\345\271\264M\346\234\210d\346\227\245", nullptr));
        pushButton->setText(QCoreApplication::translate("Pages_User", "\346\237\245\350\257\242", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Pages_User", "\346\214\211\351\243\236\350\241\214\346\227\266\351\225\277\346\216\222\345\272\217", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Pages_User", "\350\264\255\344\271\260\347\273\217\346\265\216\350\210\261", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Pages_User", "\350\264\255\344\271\260\345\225\206\345\212\241\350\210\261", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pages_User: public Ui_Pages_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGES_USER_H
