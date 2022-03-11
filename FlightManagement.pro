QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    flight.cpp \
    global.cpp \
    graph.cpp \
    main.cpp \
    mainwindow.cpp \
    pages_add.cpp \
    pages_edit.cpp \
    pages_serve.cpp \
    pages_user.cpp

HEADERS += \
    flight.h \
    global.h \
    graph.h \
    mainwindow.h \
    pages_add.h \
    pages_edit.h \
    pages_serve.h \
    pages_user.h

FORMS += \
    mainwindow.ui \
    pages_add.ui \
    pages_edit.ui \
    pages_serve.ui \
    pages_user.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    src.qrc

DISTFILES += \
    logo.png \
    图片1.png
