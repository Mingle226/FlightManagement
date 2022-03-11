/********************************************************************************
** Form generated from reading UI file 'pages_serve.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGES_SERVE_H
#define UI_PAGES_SERVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pages_Serve
{
public:
    QWidget *widget;
    QLabel *label_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QDateEdit *dateEdit;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QLabel *label;
    QTableWidget *tableWidget;

    void setupUi(QWidget *Pages_Serve)
    {
        if (Pages_Serve->objectName().isEmpty())
            Pages_Serve->setObjectName(QString::fromUtf8("Pages_Serve"));
        Pages_Serve->resize(1136, 718);
        widget = new QWidget(Pages_Serve);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 10, 1091, 681));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 10, 781, 41));
        label_2->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 70, 1011, 41));
        layoutWidget->setMinimumSize(QSize(0, 30));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(25);
        gridLayout->setVerticalSpacing(4);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(pushButton, 1, 2, 1, 1);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setMinimumSize(QSize(0, 30));
        QFont font;
        font.setPointSize(12);
        dateEdit->setFont(font);
        dateEdit->setAlignment(Qt::AlignCenter);
        dateEdit->setDateTime(QDateTime(QDate(2022, 3, 1), QTime(0, 0, 0)));
        dateEdit->setCalendarPopup(true);

        gridLayout->addWidget(dateEdit, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(pushButton_2, 1, 3, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(pushButton_3, 1, 4, 1, 1);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(pushButton_6, 1, 5, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(910, 20, 121, 21));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        tableWidget = new QTableWidget(widget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(40, 140, 1011, 541));
        tableWidget->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        tableWidget->setStyleSheet(QString::fromUtf8(""));
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setTextElideMode(Qt::ElideMiddle);
        tableWidget->horizontalHeader()->setMinimumSectionSize(30);
        tableWidget->horizontalHeader()->setDefaultSectionSize(120);
        QWidget::setTabOrder(pushButton_5, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton_3);
        QWidget::setTabOrder(pushButton_3, tableWidget);

        retranslateUi(Pages_Serve);

        QMetaObject::connectSlotsByName(Pages_Serve);
    } // setupUi

    void retranslateUi(QWidget *Pages_Serve)
    {
        Pages_Serve->setWindowTitle(QCoreApplication::translate("Pages_Serve", "\344\270\234\346\226\271\350\210\252\347\251\272\350\210\252\347\272\277\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_2->setText(QCoreApplication::translate("Pages_Serve", "\346\230\245\347\247\213\350\210\252\347\251\272\350\210\252\347\272\277\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        pushButton->setText(QCoreApplication::translate("Pages_Serve", "\346\267\273\345\212\240", nullptr));
        dateEdit->setDisplayFormat(QCoreApplication::translate("Pages_Serve", "yyyy\345\271\264M\346\234\210d\346\227\245", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Pages_Serve", "\350\275\275\345\205\245\347\216\260\346\234\211\346\225\260\346\215\256", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Pages_Serve", "\344\277\256\346\224\271", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Pages_Serve", "\345\217\226\346\266\210\350\210\252\347\217\255", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Pages_Serve", "\346\214\211\347\205\247\350\210\252\347\217\255\345\217\267\345\215\207\345\272\217\346\230\276\347\244\272", nullptr));
        label->setText(QCoreApplication::translate("Pages_Serve", "\346\202\250\345\245\275,admin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pages_Serve: public Ui_Pages_Serve {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGES_SERVE_H
