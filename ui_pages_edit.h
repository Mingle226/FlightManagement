/********************************************************************************
** Form generated from reading UI file 'pages_edit.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGES_EDIT_H
#define UI_PAGES_EDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pages_edit
{
public:
    QComboBox *cityFrom;
    QLineEdit *text_id;
    QTimeEdit *startTime;
    QSpinBox *num_vip;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btn_yes;
    QPushButton *btn_no;
    QSpinBox *num;
    QComboBox *cityTo;
    QTimeEdit *endTime;
    QCommandLinkButton *commandLinkButton;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QWidget *pages_edit)
    {
        if (pages_edit->objectName().isEmpty())
            pages_edit->setObjectName(QString::fromUtf8("pages_edit"));
        pages_edit->resize(616, 435);
        cityFrom = new QComboBox(pages_edit);
        cityFrom->addItem(QString());
        cityFrom->setObjectName(QString::fromUtf8("cityFrom"));
        cityFrom->setGeometry(QRect(110, 130, 111, 30));
        cityFrom->setMinimumSize(QSize(0, 25));
        QFont font;
        font.setPointSize(11);
        cityFrom->setFont(font);
        cityFrom->setEditable(true);
        text_id = new QLineEdit(pages_edit);
        text_id->setObjectName(QString::fromUtf8("text_id"));
        text_id->setGeometry(QRect(110, 80, 121, 30));
        text_id->setMinimumSize(QSize(0, 25));
        text_id->setFont(font);
        startTime = new QTimeEdit(pages_edit);
        startTime->setObjectName(QString::fromUtf8("startTime"));
        startTime->setGeometry(QRect(110, 200, 118, 30));
        startTime->setMinimumSize(QSize(0, 25));
        startTime->setFont(font);
        num_vip = new QSpinBox(pages_edit);
        num_vip->setObjectName(QString::fromUtf8("num_vip"));
        num_vip->setEnabled(false);
        num_vip->setGeometry(QRect(440, 270, 81, 30));
        num_vip->setMinimumSize(QSize(0, 25));
        num_vip->setFont(font);
        num_vip->setAlignment(Qt::AlignCenter);
        num_vip->setMinimum(12);
        num_vip->setMaximum(12);
        layoutWidget = new QWidget(pages_edit);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(160, 360, 311, 41));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn_yes = new QPushButton(layoutWidget);
        btn_yes->setObjectName(QString::fromUtf8("btn_yes"));
        QFont font1;
        font1.setPointSize(10);
        btn_yes->setFont(font1);

        gridLayout->addWidget(btn_yes, 0, 0, 1, 1);

        btn_no = new QPushButton(layoutWidget);
        btn_no->setObjectName(QString::fromUtf8("btn_no"));

        gridLayout->addWidget(btn_no, 0, 1, 1, 1);

        num = new QSpinBox(pages_edit);
        num->setObjectName(QString::fromUtf8("num"));
        num->setEnabled(false);
        num->setGeometry(QRect(110, 270, 91, 30));
        num->setMinimumSize(QSize(0, 25));
        num->setFont(font);
        num->setAlignment(Qt::AlignCenter);
        num->setMinimum(60);
        num->setMaximum(60);
        cityTo = new QComboBox(pages_edit);
        cityTo->addItem(QString());
        cityTo->setObjectName(QString::fromUtf8("cityTo"));
        cityTo->setGeometry(QRect(440, 130, 121, 30));
        cityTo->setMinimumSize(QSize(0, 25));
        cityTo->setFont(font);
        cityTo->setEditable(true);
        endTime = new QTimeEdit(pages_edit);
        endTime->setObjectName(QString::fromUtf8("endTime"));
        endTime->setGeometry(QRect(440, 200, 118, 30));
        endTime->setMinimumSize(QSize(0, 25));
        endTime->setFont(font);
        commandLinkButton = new QCommandLinkButton(pages_edit);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(10, 10, 161, 41));
        label_5 = new QLabel(pages_edit);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 130, 74, 30));
        label_5->setMinimumSize(QSize(0, 25));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(false);
        label_5->setFont(font2);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_8 = new QLabel(pages_edit);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(350, 130, 64, 30));
        label_8->setMinimumSize(QSize(0, 25));
        label_8->setFont(font2);
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(pages_edit);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(350, 200, 64, 30));
        label_4->setMinimumSize(QSize(0, 25));
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(pages_edit);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 200, 74, 30));
        label_3->setMinimumSize(QSize(0, 25));
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(pages_edit);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 270, 74, 30));
        label_6->setMinimumSize(QSize(0, 25));
        label_6->setFont(font2);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_7 = new QLabel(pages_edit);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(350, 270, 64, 30));
        label_7->setMinimumSize(QSize(0, 25));
        label_7->setFont(font2);
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(pages_edit);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 80, 74, 30));
        label_2->setMinimumSize(QSize(0, 25));
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(pages_edit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 20, 351, 31));
        QFont font3;
        font3.setPointSize(14);
        label->setFont(font3);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(pages_edit);

        QMetaObject::connectSlotsByName(pages_edit);
    } // setupUi

    void retranslateUi(QWidget *pages_edit)
    {
        pages_edit->setWindowTitle(QCoreApplication::translate("pages_edit", "Form", nullptr));
        cityFrom->setItemText(0, QCoreApplication::translate("pages_edit", "\350\257\267\351\200\211\346\213\251", nullptr));

        text_id->setPlaceholderText(QCoreApplication::translate("pages_edit", "\350\257\267\350\276\223\345\205\245\350\210\252\347\217\255\345\217\267", nullptr));
        btn_yes->setText(QCoreApplication::translate("pages_edit", "\347\241\256\350\256\244", nullptr));
        btn_no->setText(QCoreApplication::translate("pages_edit", "\345\217\226\346\266\210", nullptr));
        cityTo->setItemText(0, QCoreApplication::translate("pages_edit", "\350\257\267\351\200\211\346\213\251", nullptr));

        commandLinkButton->setText(QCoreApplication::translate("pages_edit", "          \345\244\215      \344\275\215", nullptr));
        label_5->setText(QCoreApplication::translate("pages_edit", "\350\265\267\351\243\236\345\237\216\345\270\202", nullptr));
        label_8->setText(QCoreApplication::translate("pages_edit", "\346\212\265\350\276\276\345\237\216\345\270\202", nullptr));
        label_4->setText(QCoreApplication::translate("pages_edit", "\346\212\265\350\276\276\346\227\266\351\227\264", nullptr));
        label_3->setText(QCoreApplication::translate("pages_edit", "\350\265\267\351\243\236\346\227\266\351\227\264", nullptr));
        label_6->setText(QCoreApplication::translate("pages_edit", "\347\273\217\346\265\216\350\210\261", nullptr));
        label_7->setText(QCoreApplication::translate("pages_edit", "\345\225\206\345\212\241\350\210\261", nullptr));
        label_2->setText(QCoreApplication::translate("pages_edit", "\350\210\252\347\217\255\345\217\267", nullptr));
        label->setText(QCoreApplication::translate("pages_edit", "\346\230\245\347\247\213\350\210\252\347\217\255\350\210\252\347\251\272\347\256\241\347\220\206\347\263\273\347\273\237\342\200\224\342\200\224\344\277\256\346\224\271\350\210\252\347\217\255\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pages_edit: public Ui_pages_edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGES_EDIT_H
