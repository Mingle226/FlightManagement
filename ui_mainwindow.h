/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_6;
    QWidget *page;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QWidget *page_5;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QWidget *page_2;
    QPushButton *pushButton_3;
    QLabel *label_3;
    QTreeWidget *treeWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1050, 709);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        stackedWidget->addWidget(page_6);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 450, 450, 40));
        lineEdit = new QLineEdit(page);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(190, 370, 451, 31));
        QFont font;
        font.setPointSize(13);
        lineEdit->setFont(font);
        lineEdit->setEchoMode(QLineEdit::Password);
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 30, 720, 331));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(17);
        label->setFont(font1);
        label->setCursor(QCursor(Qt::ArrowCursor));
        label->setAcceptDrops(false);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);
        stackedWidget->addWidget(page);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        pushButton_2 = new QPushButton(page_5);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 450, 450, 40));
        label_2 = new QLabel(page_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 40, 720, 291));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2->setWordWrap(true);
        label_2->setMargin(0);
        stackedWidget->addWidget(page_5);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        pushButton_3 = new QPushButton(page_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(190, 450, 450, 40));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 30, 721, 341));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3->setWordWrap(true);
        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 1, 1, 1, 1);

        treeWidget = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setMaximumSize(QSize(180, 16777215));
        QFont font2;
        font2.setPointSize(11);
        font2.setKerning(true);
        treeWidget->setFont(font2);
        treeWidget->viewport()->setProperty("cursor", QVariant(QCursor(Qt::OpenHandCursor)));
        treeWidget->setStyleSheet(QString::fromUtf8(""));
        treeWidget->header()->setVisible(false);

        gridLayout->addWidget(treeWidget, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1050, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\350\277\233\345\205\245\347\256\241\347\220\206\345\221\230\346\250\241\345\274\217", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        label->setWhatsThis(QCoreApplication::translate("MainWindow", "\344\275\277\347\224\250\350\257\264\346\230\216", nullptr));
#endif // QT_CONFIG(whatsthis)
        label->setText(QCoreApplication::translate("MainWindow", "       \346\202\250\345\217\257\344\273\245\351\200\232\350\277\207\346\234\254\351\241\265\351\235\242\350\277\233\345\205\245\347\256\241\347\220\206\345\221\230\346\250\241\345\274\217\357\274\214\345\234\250\344\270\213\351\235\242\347\232\204\346\226\207\346\234\254\346\241\206\344\270\255\350\276\223\345\205\245\346\255\243\347\241\256\347\232\204\345\257\206\347\240\201\357\274\214\345\215\263\345\217\257\350\277\233\345\205\245\347\256\241\347\220\206\345\221\230\346\250\241\345\274\217\357\274\214\345\257\271\350\210\252\347\217\255\344\277\241\346\201\257\350\277\233\350\241\214\347\273\237\344\270\200\347\232\204\346\237\245\350\257\242\347\256\241\347\220\206\357\274\214\346\267\273\345\212\240\350\210\252\347\217\255\357\274\214\344\277\256\346\224\271\350\210\252\347\217\255\344\277\241\346\201\257\357\274\214\345\217\226\346\266\210\350\210\252\347\217\255\357\274\214\344\273\245\345\217\212\345\257\271\350\210\252\347\217\255\346\225\260\346\215\256\350\277\233\350\241\214\344\273\273\346\204\217"
                        "\347\232\204\345\220\210\346\263\225\346\223\215\344\275\234\357\274\214\345\257\271\346\255\244\347\263\273\347\273\237\346\234\211\344\273\273\344\275\225\347\232\204\350\247\202\347\202\271\357\274\214\346\254\242\350\277\216\346\202\250\346\235\245\346\217\220\345\207\272\346\204\217\350\247\201\345\222\214\345\217\215\351\246\210\357\274\214\346\204\237\350\260\242\346\202\250\347\232\204\344\275\277\347\224\250", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\350\277\233\345\205\245\347\224\250\346\210\267\346\250\241\345\274\217", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\344\275\240\345\245\275\357\274\214\346\254\242\350\277\216\344\275\277\347\224\250\346\230\245\347\247\213\350\210\252\347\217\255\350\210\252\347\217\255\344\277\241\346\201\257\346\237\245\350\257\242\347\263\273\347\273\237\351\200\232\350\277\207\346\234\254\347\263\273\347\273\237\347\224\250\346\210\267\345\217\257\350\277\233\350\241\214\350\210\252\347\217\255\344\277\241\346\201\257\347\232\204\346\237\245\350\257\242\344\272\206\350\247\243\345\210\260\357\274\214\346\214\207\345\256\232\350\210\252\347\217\255\347\232\204\350\257\246\347\273\206\344\277\241\346\201\257\346\237\245\350\257\242\346\226\271\345\274\217\345\217\257\344\273\245\351\200\232\350\277\207\344\275\277\350\202\245\345\237\216\345\270\202\350\265\267\351\243\236\357\274\214\345\237\216\345\270\202\345\222\214\346\212\265\350\276\276\345\237\216\345\270\202\350\277\233\350\241\214\346\220\234\345\257\273\347\233\270\345\205\263\347\254\246\345\220\210\346\235\241\344\273\266\347\232\204\350\210\252\347\217\255\357\274\214\345\220"
                        "\214\346\227\266\345\217\257\350\277\233\350\241\214\350\264\255\344\271\260\346\223\215\344\275\234\357\274\214\345\206\215\346\254\241\350\247\201\351\235\242\344\270\213\357\274\214\346\202\250\344\270\215\351\234\200\350\246\201\350\277\233\350\241\214\347\231\273\345\275\225\345\215\263\345\217\257\344\275\277\347\224\250\343\200\202n", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\347\263\273\347\273\237", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\202\250\345\245\275\357\274\214\346\254\242\350\277\216\344\275\277\347\224\250\346\230\245\347\247\213\350\210\252\347\251\272\350\210\252\347\217\255\344\277\241\346\201\257\346\237\245\350\257\242\347\256\241\347\220\206\347\263\273\347\273\237\357\274\214\346\234\254\347\263\273\347\273\237\345\237\272\344\272\216C\345\212\240\345\212\240\350\257\255\350\250\200\357\274\214qt\347\225\214\351\235\242\350\256\276\350\256\241\350\277\233\350\241\214\345\274\200\345\217\221\357\274\214\345\217\257\345\234\250windows MAC\347\255\211\347\216\257\345\242\203\344\270\213\350\277\233\350\241\214\350\277\220\350\241\214\357\274\214\347\256\241\347\220\206\347\263\273\347\273\237\345\275\223\344\270\255\345\214\205\345\220\253\347\256\241\347\220\206\345\221\230\346\250\241\345\274\217\345\222\214\347\224\250\346\210\267\346\250\241\345\274\217\347\233\270\345\205\263\357\274\214\345\220\216\345\217\260\345\267\245\344\275\234\344\272\272\345\221\230\345\217\257\344\273\245\346\240\271\346\215\256\347\233\270\345"
                        "\205\263\347\232\204\345\257\206\347\240\201\350\277\233\345\205\245\347\256\241\347\220\206\345\221\230\346\250\241\345\274\217\357\274\214\345\257\271\350\210\252\347\217\255\344\277\241\346\201\257\350\277\233\350\241\214\346\267\273\345\212\240\344\277\256\346\224\271\357\274\214\345\210\240\351\231\244\346\237\245\350\257\242\347\255\211\346\223\215\344\275\234\357\274\214\346\234\211\350\266\205\347\272\247\347\256\241\347\220\206\345\221\230\346\235\203\351\231\220\347\224\250\346\210\267\346\250\241\345\274\217\346\227\240\351\234\200\347\231\273\345\275\225\357\274\214\345\217\257\346\237\245\350\257\242\347\233\270\345\205\263\345\237\216\345\270\202\346\211\200\345\220\253\346\234\211\347\232\204\350\210\252\347\217\255\344\273\245\345\217\212\345\205\266\350\257\246\347\273\206\344\277\241\346\201\257\357\274\214\345\234\250\344\275\277\347\224\250\350\277\207\347\250\213\345\275\223\344\270\255\357\274\214\346\254\242\350\277\216\346\202\250\346\235\245\346\217\220\345\207\272\344\273\273\344\275\225"
                        "\346\204\217\350\247\201\345\222\214\345\217\215\351\246\210\357\274\214\346\204\237\350\260\242\346\202\250\347\232\204\344\275\277\347\224\250\n"
"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
