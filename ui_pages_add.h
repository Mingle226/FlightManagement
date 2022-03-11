/********************************************************************************
** Form generated from reading UI file 'pages_add.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGES_ADD_H
#define UI_PAGES_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pages_add
{
public:
    QLabel *label;
    QLabel *label_8;
    QSpinBox *num;
    QLabel *label_4;
    QLabel *label_7;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btn_yes;
    QPushButton *btn_no;
    QComboBox *cityTo;
    QTimeEdit *endTime;
    QLabel *label_3;
    QTimeEdit *startTime;
    QSpinBox *num_vip;
    QLineEdit *text_id;
    QLabel *label_6;
    QComboBox *cityFrom;
    QLabel *label_2;
    QLabel *label_5;

    void setupUi(QWidget *pages_add)
    {
        if (pages_add->objectName().isEmpty())
            pages_add->setObjectName(QString::fromUtf8("pages_add"));
        pages_add->resize(779, 442);
        label = new QLabel(pages_add);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 20, 351, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267")});
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(pages_add);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(400, 130, 64, 30));
        label_8->setMinimumSize(QSize(0, 25));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223")});
        font1.setPointSize(11);
        font1.setBold(false);
        label_8->setFont(font1);
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        num = new QSpinBox(pages_add);
        num->setObjectName(QString::fromUtf8("num"));
        num->setEnabled(false);
        num->setGeometry(QRect(170, 270, 91, 30));
        num->setMinimumSize(QSize(0, 25));
        QFont font2;
        font2.setPointSize(11);
        num->setFont(font2);
        num->setAlignment(Qt::AlignCenter);
        num->setMinimum(60);
        num->setMaximum(60);
        label_4 = new QLabel(pages_add);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(400, 200, 64, 30));
        label_4->setMinimumSize(QSize(0, 25));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_7 = new QLabel(pages_add);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(400, 270, 64, 30));
        label_7->setMinimumSize(QSize(0, 25));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        layoutWidget = new QWidget(pages_add);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(240, 360, 311, 41));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn_yes = new QPushButton(layoutWidget);
        btn_yes->setObjectName(QString::fromUtf8("btn_yes"));

        gridLayout->addWidget(btn_yes, 0, 0, 1, 1);

        btn_no = new QPushButton(layoutWidget);
        btn_no->setObjectName(QString::fromUtf8("btn_no"));

        gridLayout->addWidget(btn_no, 0, 1, 1, 1);

        cityTo = new QComboBox(pages_add);
        cityTo->addItem(QString());
        cityTo->setObjectName(QString::fromUtf8("cityTo"));
        cityTo->setGeometry(QRect(500, 130, 121, 30));
        cityTo->setMinimumSize(QSize(0, 25));
        cityTo->setFont(font2);
        endTime = new QTimeEdit(pages_add);
        endTime->setObjectName(QString::fromUtf8("endTime"));
        endTime->setGeometry(QRect(500, 200, 118, 30));
        endTime->setMinimumSize(QSize(0, 25));
        endTime->setFont(font2);
        label_3 = new QLabel(pages_add);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 200, 74, 30));
        label_3->setMinimumSize(QSize(0, 25));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        startTime = new QTimeEdit(pages_add);
        startTime->setObjectName(QString::fromUtf8("startTime"));
        startTime->setGeometry(QRect(170, 200, 118, 30));
        startTime->setMinimumSize(QSize(0, 25));
        startTime->setFont(font2);
        num_vip = new QSpinBox(pages_add);
        num_vip->setObjectName(QString::fromUtf8("num_vip"));
        num_vip->setEnabled(false);
        num_vip->setGeometry(QRect(500, 270, 81, 30));
        num_vip->setMinimumSize(QSize(0, 25));
        num_vip->setFont(font2);
        num_vip->setAlignment(Qt::AlignCenter);
        num_vip->setMinimum(12);
        num_vip->setMaximum(12);
        text_id = new QLineEdit(pages_add);
        text_id->setObjectName(QString::fromUtf8("text_id"));
        text_id->setGeometry(QRect(170, 80, 121, 30));
        text_id->setMinimumSize(QSize(0, 25));
        text_id->setFont(font2);
        label_6 = new QLabel(pages_add);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(70, 270, 74, 30));
        label_6->setMinimumSize(QSize(0, 25));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        cityFrom = new QComboBox(pages_add);
        cityFrom->addItem(QString());
        cityFrom->setObjectName(QString::fromUtf8("cityFrom"));
        cityFrom->setGeometry(QRect(168, 130, 111, 30));
        cityFrom->setMinimumSize(QSize(0, 25));
        cityFrom->setFont(font2);
        label_2 = new QLabel(pages_add);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 80, 74, 30));
        label_2->setMinimumSize(QSize(0, 25));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(pages_add);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(70, 130, 74, 30));
        label_5->setMinimumSize(QSize(0, 25));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        retranslateUi(pages_add);

        QMetaObject::connectSlotsByName(pages_add);
    } // setupUi

    void retranslateUi(QWidget *pages_add)
    {
        pages_add->setWindowTitle(QCoreApplication::translate("pages_add", "Form", nullptr));
        label->setText(QCoreApplication::translate("pages_add", "\346\230\245\347\247\213\350\210\252\347\217\255\350\210\252\347\251\272\347\256\241\347\220\206\347\263\273\347\273\237\342\200\224\342\200\224\346\267\273\345\212\240\350\210\252\347\217\255", nullptr));
        label_8->setText(QCoreApplication::translate("pages_add", "\346\212\265\350\276\276\345\237\216\345\270\202", nullptr));
        label_4->setText(QCoreApplication::translate("pages_add", "\346\212\265\350\276\276\346\227\266\351\227\264", nullptr));
        label_7->setText(QCoreApplication::translate("pages_add", "\345\225\206\345\212\241\350\210\261", nullptr));
        btn_yes->setText(QCoreApplication::translate("pages_add", "\347\241\256\350\256\244", nullptr));
        btn_no->setText(QCoreApplication::translate("pages_add", "\345\217\226\346\266\210", nullptr));
        cityTo->setItemText(0, QCoreApplication::translate("pages_add", "\350\257\267\351\200\211\346\213\251", nullptr));

        label_3->setText(QCoreApplication::translate("pages_add", "\350\265\267\351\243\236\346\227\266\351\227\264", nullptr));
        text_id->setPlaceholderText(QCoreApplication::translate("pages_add", "\350\257\267\350\276\223\345\205\245\350\210\252\347\217\255\345\217\267", nullptr));
        label_6->setText(QCoreApplication::translate("pages_add", "\347\273\217\346\265\216\350\210\261", nullptr));
        cityFrom->setItemText(0, QCoreApplication::translate("pages_add", "\350\257\267\351\200\211\346\213\251", nullptr));

        label_2->setText(QCoreApplication::translate("pages_add", "\350\210\252\347\217\255\345\217\267", nullptr));
        label_5->setText(QCoreApplication::translate("pages_add", "\350\265\267\351\243\236\345\237\216\345\270\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pages_add: public Ui_pages_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGES_ADD_H
