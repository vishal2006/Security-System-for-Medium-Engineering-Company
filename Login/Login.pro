QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    #../build-Login-Desktop_Qt_6_0_3_MinGW_64_bit-Debug/debug/search_by_time.cpp \
    #../build-Login-Desktop_Qt_6_0_3_MinGW_64_bit-Debug/debug/visitor_search.cpp \
    deletemp.cpp \
    empins.cpp \
    empsearch.cpp \
    main.cpp \
    mainwindow.cpp \
    search_by_date.cpp \
    search_by_name.cpp \
    search_with_time.cpp \
    searchvisitor2.cpp \
    secwindow.cpp \
    thirdwin.cpp \
    thirdwinemp.cpp \
    visitorinsert_win.cpp

HEADERS += \
    #../build-Login-Desktop_Qt_6_0_3_MinGW_64_bit-Debug/debug/search_by_time.h \
    #../build-Login-Desktop_Qt_6_0_3_MinGW_64_bit-Debug/debug/visitor_search.h \
    deletemp.h \
    empins.h \
    empsearch.h \
    mainwindow.h \
    search_by_date.h \
    search_by_name.h \
    search_with_time.h \
    searchvisitor2.h \
    secwindow.h \
    thirdwin.h \
    thirdwinemp.h \
    visitorinsert_win.h

FORMS += \
    #../build-Login-Desktop_Qt_6_0_3_MinGW_64_bit-Debug/debug/search_by_time.ui \
    #../build-Login-Desktop_Qt_6_0_3_MinGW_64_bit-Debug/debug/visitor_search.ui \
    deletemp.ui \
    empins.ui \
    empsearch.ui \
    mainwindow.ui \
    search_by_date.ui \
    search_by_name.ui \
    search_with_time.ui \
    searchvisitor2.ui \
    secwindow.ui \
    thirdwin.ui \
    thirdwinemp.ui \
    visitorinsert_win.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc

DISTFILES += \
    img/CP1.jpg \
    img/CP2.png \
    img/CP3.jpg \
    img/Untitled.png \
    img/kali2.png
