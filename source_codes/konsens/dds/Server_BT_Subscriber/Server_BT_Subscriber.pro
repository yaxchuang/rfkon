TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    KonSensData.cpp \
    KonSensDataDcps.cpp \
    KonSensDataDcps_impl.cpp \
    KonSensDataSplDcps.cpp \
    ServerBtSubscriber.cpp \
    DDSEntityManagerKonSens.cpp \
    CheckStatus.cpp

DISTFILES += \
    Server_BT_Subscriber.pro.user \
    KonSensData.idl

HEADERS += \
    ccpp_KonSensData.h \
    KonSensData.h \
    KonSensDataDcps.h \
    KonSensDataDcps_impl.h \
    KonSensDataSplDcps.h \
    DDSEntityManagerKonSens.h \
    CheckStatus.h


LIBS +=     -L/opt/HDE/x86_64.linux/lib \
            -lddsserialization \
            -lddskernel \
            -lddsutil \
            -lddsdatabase \
            -lddsuser \
            -lddsconf \
            -lddsconfparser \
            -ldcpsgapi \
            -ldcpssacpp \
            -lddsos \
            -L/opt/mongodb/lib \
            -lmongoclient \
            -lboost_thread \
            -lboost_system \
            -lboost_regex \

INCLUDEPATH +=  /opt/HDE/x86_64.linux/include /opt/HDE/x86_64.linux/include/dcps/C++/SACPP/ /opt/HDE/x86_64.linux/examples/include \
                /opt/mongodb/include
DEPENDPATH += /opt/HDE/x86_64.linux/include /opt/HDE/x86_64.linux/include/dcps/C++/SACPP/ /opt/HDE/x86_64.linux/examples/include \
                /opt/mongodb/include
