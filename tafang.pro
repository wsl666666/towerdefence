QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        bluebullet.cpp \
        bluetower.cpp \
        bolck.cpp \
        bullet.cpp \
        enemy.cpp \
        game.cpp \
        hpbarenemyfill.cpp \
        hpbarenemyframe.cpp \
        interface.cpp \
        interfaceonbuttom.cpp \
        interfaceonrightside.cpp \
        main.cpp \
        map.cpp \
        newlevelenemies.cpp \
        palyer.cpp \
        pathforenemy.cpp \
        start.cpp \
        tower.cpp \
        towerrangeattack.cpp \
        widgettowerdetails.cpp \
        widgettoweroptions.cpp \
        widgetwaitforclickblock.cpp \
        widgetwithtoweroptions.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    bluebullet.h \
    bluetower.h \
    bolck.h \
    bullet.h \
    enemy.h \
    game.h \
    hpbarenemyfill.h \
    hpbarenemyframe.h \
    interface.h \
    interfaceonbuttom.h \
    interfaceonrightside.h \
    map.h \
    newlevelenemies.h \
    palyer.h \
    pathforenemy.h \
    start.h \
    tower.h \
    towerrangeattack.h \
    towers_prices.h \
    widgettowerdetails.h \
    widgettoweroptions.h \
    widgetwaitforclickblock.h \
    widgetwithtoweroptions.h
