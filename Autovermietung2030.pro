QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    fahrzeugeinzel.cpp \
    fahrzeugliste.cpp \
    fahrzeugneu.cpp \
    kundeeinzel.cpp \
    kundeliste.cpp \
    kundeneu.cpp \
    kundensuchergebnis.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    fahrzeugeinzel.h \
    fahrzeugliste.h \
    fahrzeugneu.h \
    kundeeinzel.h \
    kundeliste.h \
    kundeneu.h \
    kundensuchergebnis.h \
    mainwindow.h

FORMS += \
    fahrzeugeinzel.ui \
    fahrzeugneu.ui \
    kundeeinzel.ui \
    kundeneu.ui \
    kundensuchergebnis.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    symbole.qrc
